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
(f64mulf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f64mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float64
(f64mulf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_0 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64mul_1 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64mul_2 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64mul_3 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64mul_4 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64mul_5 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_6 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_7 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_8 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_9 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_10 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_11 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_12 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_13 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_14 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_15 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_16 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64mul_17 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64mul_18 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_19 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_20 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_21 (void)
{
  extern typeof (f64mul (vol_var__Float16, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64mul_22 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_23 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64mul_24 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64mul_25 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64mul_26 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64mul_27 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_28 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_29 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_30 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_31 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_32 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_33 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_34 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_35 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_36 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_37 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_38 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64mul_39 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64mul_40 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_41 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_42 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_43 (void)
{
  extern typeof (f64mul (vol_var__Float32, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64mul_44 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64mul_45 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_46 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64mul_47 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64mul_48 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64mul_49 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_50 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_51 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_52 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_53 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_54 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_55 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_56 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_57 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_58 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_59 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_60 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64mul_61 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64mul_62 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_63 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_64 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_65 (void)
{
  extern typeof (f64mul (vol_var__Float32x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64mul_66 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64mul_67 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64mul_68 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_69 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64mul_70 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64mul_71 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_72 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_73 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_74 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_75 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_76 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_77 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_78 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_79 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_80 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_81 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_82 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64mul_83 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64mul_84 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_85 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_86 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_87 (void)
{
  extern typeof (f64mul (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64mul_88 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64mul_89 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64mul_90 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64mul_91 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_92 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64mul_93 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_94 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_95 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_96 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_97 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_98 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_99 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_100 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_101 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_102 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_103 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_104 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64mul_105 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64mul_106 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_107 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_108 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_109 (void)
{
  extern typeof (f64mul (vol_var__Float64x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64mul_110 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64mul_111 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64mul_112 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64mul_113 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64mul_114 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_115 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_116 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_117 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_118 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_119 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_120 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_121 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_122 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_123 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_124 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_125 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_126 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64mul_127 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64mul_128 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_129 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_130 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_131 (void)
{
  extern typeof (f64mul (vol_var__Float128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_132 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_133 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_134 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_135 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_136 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_137 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_138 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_139 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_140 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_141 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_142 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_143 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_144 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_145 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_146 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_147 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_148 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_149 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_150 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_151 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_152 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_153 (void)
{
  extern typeof (f64mul (vol_var_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_154 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_155 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_156 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_157 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_158 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_159 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_160 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_161 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_162 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_163 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_164 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_165 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_166 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_167 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_168 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_169 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_170 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_171 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_172 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_173 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_174 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_175 (void)
{
  extern typeof (f64mul (vol_var_signed_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_176 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_177 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_178 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_179 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_180 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_181 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_182 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_183 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_184 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_185 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_186 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_187 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_188 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_189 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_190 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_191 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_192 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_193 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_194 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_195 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_196 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_197 (void)
{
  extern typeof (f64mul (vol_var_unsigned_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_198 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_199 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_200 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_201 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_202 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_203 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_204 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_205 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_206 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_207 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_208 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_209 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_210 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_211 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_212 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_213 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_214 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_215 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_216 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_217 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_218 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_219 (void)
{
  extern typeof (f64mul (vol_var_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_220 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_221 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_222 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_223 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_224 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_225 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_226 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_227 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_228 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_229 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_230 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_231 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_232 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_233 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_234 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_235 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_236 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_237 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_238 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_239 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_240 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_241 (void)
{
  extern typeof (f64mul (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_242 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_243 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_244 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_245 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_246 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_247 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_248 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_249 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_250 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_251 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_252 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_253 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_254 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_255 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_256 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_257 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_258 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_259 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_260 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_261 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_262 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_263 (void)
{
  extern typeof (f64mul (vol_var_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_264 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_265 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_266 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_267 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_268 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_269 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_270 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_271 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_272 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_273 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_274 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_275 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_276 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_277 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_278 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_279 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_280 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_281 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_282 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_283 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_284 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_285 (void)
{
  extern typeof (f64mul (vol_var_unsigned_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_286 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_287 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_288 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_289 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_290 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_291 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_292 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_293 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_294 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_295 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_296 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_297 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_298 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_299 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_300 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_301 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_302 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_303 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_304 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_305 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_306 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_307 (void)
{
  extern typeof (f64mul (vol_var_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_308 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_309 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_310 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_311 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_312 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_313 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_314 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_315 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_316 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_317 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_318 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_319 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_320 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_321 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_322 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_323 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_324 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_325 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_326 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_327 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_328 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_329 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_330 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_331 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_332 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_333 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_334 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_335 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_336 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_337 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_338 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_339 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_340 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_341 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_342 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_343 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_344 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_345 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_346 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_347 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_348 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_349 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_350 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_351 (void)
{
  extern typeof (f64mul (vol_var_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_352 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_353 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_354 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_355 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_356 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_357 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_358 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_359 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_360 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_361 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_362 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_363 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_364 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_365 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_366 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_367 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_368 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_369 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_370 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_371 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_372 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_373 (void)
{
  extern typeof (f64mul (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64mul_374 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64mul_375 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64mul_376 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64mul_377 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64mul_378 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64mul_379 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_380 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_381 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_382 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_383 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_384 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_385 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_386 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_387 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_388 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_389 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_390 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_391 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_392 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_393 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_394 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_395 (void)
{
  extern typeof (f64mul (vol_var___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64mul_396 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64mul_397 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64mul_398 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64mul_399 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64mul_400 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64mul_401 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_402 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_403 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_404 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_405 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_406 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_407 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_408 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_409 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_410 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_411 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_412 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_413 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_414 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_415 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_416 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_417 (void)
{
  extern typeof (f64mul (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_418 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_419 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_420 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_421 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_422 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_423 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_424 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_425 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_426 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_427 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_428 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_429 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_430 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_431 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_432 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_433 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_434 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_435 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_436 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_437 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_438 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_439 (void)
{
  extern typeof (f64mul (vol_var_enum_e, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_440 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_441 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_442 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_443 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_444 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_445 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_446 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_447 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_448 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_449 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_450 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_451 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_452 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_453 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_454 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_455 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_456 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_457 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_458 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_459 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_460 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_461 (void)
{
  extern typeof (f64mul (vol_var__Bool, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64mul_462 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64mul_463 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64mul_464 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64mul_465 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64mul_466 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64mul_467 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_468 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_469 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_470 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_471 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_472 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_473 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_474 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_475 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_476 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_477 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_478 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_479 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64mul_480 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_481 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_482 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64mul_483 (void)
{
  extern typeof (f64mul (vol_var_bit_field, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64mul (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_0, "f64mul", "f64mul (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64mul_1, "f64mul", "f64mul (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64mul_2, "f64mul", "f64mul (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64mul_3, "f64mul", "f64mul (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64mul_4, "f64mul", "f64mul (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64mul_5, "f64mul", "f64mul (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_6, "f64mul", "f64mul (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_7, "f64mul", "f64mul (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_8, "f64mul", "f64mul (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_9, "f64mul", "f64mul (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_10, "f64mul", "f64mul (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_11, "f64mul", "f64mul (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_12, "f64mul", "f64mul (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_13, "f64mul", "f64mul (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_14, "f64mul", "f64mul (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_15, "f64mul", "f64mul (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_16, "f64mul", "f64mul (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64mul_17, "f64mul", "f64mul (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64mul_18, "f64mul", "f64mul (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_19, "f64mul", "f64mul (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_20, "f64mul", "f64mul (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_21, "f64mul", "f64mul (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64mul_22, "f64mul", "f64mul (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_23, "f64mul", "f64mul (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64mul_24, "f64mul", "f64mul (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64mul_25, "f64mul", "f64mul (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64mul_26, "f64mul", "f64mul (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64mul_27, "f64mul", "f64mul (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_28, "f64mul", "f64mul (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_29, "f64mul", "f64mul (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_30, "f64mul", "f64mul (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_31, "f64mul", "f64mul (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_32, "f64mul", "f64mul (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_33, "f64mul", "f64mul (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_34, "f64mul", "f64mul (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_35, "f64mul", "f64mul (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_36, "f64mul", "f64mul (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_37, "f64mul", "f64mul (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_38, "f64mul", "f64mul (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64mul_39, "f64mul", "f64mul (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64mul_40, "f64mul", "f64mul (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_41, "f64mul", "f64mul (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_42, "f64mul", "f64mul (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_43, "f64mul", "f64mul (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64mul_44, "f64mul", "f64mul (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64mul_45, "f64mul", "f64mul (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_46, "f64mul", "f64mul (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64mul_47, "f64mul", "f64mul (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64mul_48, "f64mul", "f64mul (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64mul_49, "f64mul", "f64mul (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_50, "f64mul", "f64mul (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_51, "f64mul", "f64mul (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_52, "f64mul", "f64mul (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_53, "f64mul", "f64mul (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_54, "f64mul", "f64mul (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_55, "f64mul", "f64mul (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_56, "f64mul", "f64mul (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_57, "f64mul", "f64mul (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_58, "f64mul", "f64mul (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_59, "f64mul", "f64mul (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_60, "f64mul", "f64mul (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64mul_61, "f64mul", "f64mul (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64mul_62, "f64mul", "f64mul (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_63, "f64mul", "f64mul (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_64, "f64mul", "f64mul (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_65, "f64mul", "f64mul (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64mul_66, "f64mul", "f64mul (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64mul_67, "f64mul", "f64mul (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64mul_68, "f64mul", "f64mul (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_69, "f64mul", "f64mul (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64mul_70, "f64mul", "f64mul (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64mul_71, "f64mul", "f64mul (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_72, "f64mul", "f64mul (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_73, "f64mul", "f64mul (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_74, "f64mul", "f64mul (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_75, "f64mul", "f64mul (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_76, "f64mul", "f64mul (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_77, "f64mul", "f64mul (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_78, "f64mul", "f64mul (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_79, "f64mul", "f64mul (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_80, "f64mul", "f64mul (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_81, "f64mul", "f64mul (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_82, "f64mul", "f64mul (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64mul_83, "f64mul", "f64mul (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64mul_84, "f64mul", "f64mul (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_85, "f64mul", "f64mul (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_86, "f64mul", "f64mul (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_87, "f64mul", "f64mul (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64mul_88, "f64mul", "f64mul (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64mul_89, "f64mul", "f64mul (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64mul_90, "f64mul", "f64mul (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64mul_91, "f64mul", "f64mul (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_92, "f64mul", "f64mul (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64mul_93, "f64mul", "f64mul (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_94, "f64mul", "f64mul (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_95, "f64mul", "f64mul (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_96, "f64mul", "f64mul (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_97, "f64mul", "f64mul (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_98, "f64mul", "f64mul (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_99, "f64mul", "f64mul (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_100, "f64mul", "f64mul (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_101, "f64mul", "f64mul (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_102, "f64mul", "f64mul (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_103, "f64mul", "f64mul (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_104, "f64mul", "f64mul (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64mul_105, "f64mul", "f64mul (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64mul_106, "f64mul", "f64mul (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_107, "f64mul", "f64mul (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_108, "f64mul", "f64mul (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_109, "f64mul", "f64mul (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64mul_110, "f64mul", "f64mul (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64mul_111, "f64mul", "f64mul (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64mul_112, "f64mul", "f64mul (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64mul_113, "f64mul", "f64mul (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64mul_114, "f64mul", "f64mul (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_115, "f64mul", "f64mul (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_116, "f64mul", "f64mul (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_117, "f64mul", "f64mul (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_118, "f64mul", "f64mul (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_119, "f64mul", "f64mul (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_120, "f64mul", "f64mul (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_121, "f64mul", "f64mul (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_122, "f64mul", "f64mul (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_123, "f64mul", "f64mul (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_124, "f64mul", "f64mul (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_125, "f64mul", "f64mul (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_126, "f64mul", "f64mul (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64mul_127, "f64mul", "f64mul (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64mul_128, "f64mul", "f64mul (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_129, "f64mul", "f64mul (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_130, "f64mul", "f64mul (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_131, "f64mul", "f64mul (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_132, "f64mul", "f64mul (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_133, "f64mul", "f64mul (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_134, "f64mul", "f64mul (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_135, "f64mul", "f64mul (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_136, "f64mul", "f64mul (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_137, "f64mul", "f64mul (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_138, "f64mul", "f64mul (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_139, "f64mul", "f64mul (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_140, "f64mul", "f64mul (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_141, "f64mul", "f64mul (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_142, "f64mul", "f64mul (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_143, "f64mul", "f64mul (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_144, "f64mul", "f64mul (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_145, "f64mul", "f64mul (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_146, "f64mul", "f64mul (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_147, "f64mul", "f64mul (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_148, "f64mul", "f64mul (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_149, "f64mul", "f64mul (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_150, "f64mul", "f64mul (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_151, "f64mul", "f64mul (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_152, "f64mul", "f64mul (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_153, "f64mul", "f64mul (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_154, "f64mul", "f64mul (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_155, "f64mul", "f64mul (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_156, "f64mul", "f64mul (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_157, "f64mul", "f64mul (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_158, "f64mul", "f64mul (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_159, "f64mul", "f64mul (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_160, "f64mul", "f64mul (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_161, "f64mul", "f64mul (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_162, "f64mul", "f64mul (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_163, "f64mul", "f64mul (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_164, "f64mul", "f64mul (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_165, "f64mul", "f64mul (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_166, "f64mul", "f64mul (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_167, "f64mul", "f64mul (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_168, "f64mul", "f64mul (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_169, "f64mul", "f64mul (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_170, "f64mul", "f64mul (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_171, "f64mul", "f64mul (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_172, "f64mul", "f64mul (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_173, "f64mul", "f64mul (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_174, "f64mul", "f64mul (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_175, "f64mul", "f64mul (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_176, "f64mul", "f64mul (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_177, "f64mul", "f64mul (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_178, "f64mul", "f64mul (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_179, "f64mul", "f64mul (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_180, "f64mul", "f64mul (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_181, "f64mul", "f64mul (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_182, "f64mul", "f64mul (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_183, "f64mul", "f64mul (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_184, "f64mul", "f64mul (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_185, "f64mul", "f64mul (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_186, "f64mul", "f64mul (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_187, "f64mul", "f64mul (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_188, "f64mul", "f64mul (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_189, "f64mul", "f64mul (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_190, "f64mul", "f64mul (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_191, "f64mul", "f64mul (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_192, "f64mul", "f64mul (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_193, "f64mul", "f64mul (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_194, "f64mul", "f64mul (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_195, "f64mul", "f64mul (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_196, "f64mul", "f64mul (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_197, "f64mul", "f64mul (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_198, "f64mul", "f64mul (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_199, "f64mul", "f64mul (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_200, "f64mul", "f64mul (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_201, "f64mul", "f64mul (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_202, "f64mul", "f64mul (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_203, "f64mul", "f64mul (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_204, "f64mul", "f64mul (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_205, "f64mul", "f64mul (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_206, "f64mul", "f64mul (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_207, "f64mul", "f64mul (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_208, "f64mul", "f64mul (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_209, "f64mul", "f64mul (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_210, "f64mul", "f64mul (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_211, "f64mul", "f64mul (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_212, "f64mul", "f64mul (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_213, "f64mul", "f64mul (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_214, "f64mul", "f64mul (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_215, "f64mul", "f64mul (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_216, "f64mul", "f64mul (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_217, "f64mul", "f64mul (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_218, "f64mul", "f64mul (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_219, "f64mul", "f64mul (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_220, "f64mul", "f64mul (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_221, "f64mul", "f64mul (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_222, "f64mul", "f64mul (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_223, "f64mul", "f64mul (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_224, "f64mul", "f64mul (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_225, "f64mul", "f64mul (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_226, "f64mul", "f64mul (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_227, "f64mul", "f64mul (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_228, "f64mul", "f64mul (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_229, "f64mul", "f64mul (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_230, "f64mul", "f64mul (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_231, "f64mul", "f64mul (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_232, "f64mul", "f64mul (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_233, "f64mul", "f64mul (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_234, "f64mul", "f64mul (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_235, "f64mul", "f64mul (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_236, "f64mul", "f64mul (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_237, "f64mul", "f64mul (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_238, "f64mul", "f64mul (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_239, "f64mul", "f64mul (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_240, "f64mul", "f64mul (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_241, "f64mul", "f64mul (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_242, "f64mul", "f64mul (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_243, "f64mul", "f64mul (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_244, "f64mul", "f64mul (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_245, "f64mul", "f64mul (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_246, "f64mul", "f64mul (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_247, "f64mul", "f64mul (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_248, "f64mul", "f64mul (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_249, "f64mul", "f64mul (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_250, "f64mul", "f64mul (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_251, "f64mul", "f64mul (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_252, "f64mul", "f64mul (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_253, "f64mul", "f64mul (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_254, "f64mul", "f64mul (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_255, "f64mul", "f64mul (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_256, "f64mul", "f64mul (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_257, "f64mul", "f64mul (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_258, "f64mul", "f64mul (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_259, "f64mul", "f64mul (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_260, "f64mul", "f64mul (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_261, "f64mul", "f64mul (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_262, "f64mul", "f64mul (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_263, "f64mul", "f64mul (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_264, "f64mul", "f64mul (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_265, "f64mul", "f64mul (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_266, "f64mul", "f64mul (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_267, "f64mul", "f64mul (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_268, "f64mul", "f64mul (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_269, "f64mul", "f64mul (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_270, "f64mul", "f64mul (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_271, "f64mul", "f64mul (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_272, "f64mul", "f64mul (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_273, "f64mul", "f64mul (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_274, "f64mul", "f64mul (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_275, "f64mul", "f64mul (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_276, "f64mul", "f64mul (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_277, "f64mul", "f64mul (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_278, "f64mul", "f64mul (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_279, "f64mul", "f64mul (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_280, "f64mul", "f64mul (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_281, "f64mul", "f64mul (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_282, "f64mul", "f64mul (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_283, "f64mul", "f64mul (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_284, "f64mul", "f64mul (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_285, "f64mul", "f64mul (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_286, "f64mul", "f64mul (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_287, "f64mul", "f64mul (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_288, "f64mul", "f64mul (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_289, "f64mul", "f64mul (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_290, "f64mul", "f64mul (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_291, "f64mul", "f64mul (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_292, "f64mul", "f64mul (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_293, "f64mul", "f64mul (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_294, "f64mul", "f64mul (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_295, "f64mul", "f64mul (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_296, "f64mul", "f64mul (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_297, "f64mul", "f64mul (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_298, "f64mul", "f64mul (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_299, "f64mul", "f64mul (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_300, "f64mul", "f64mul (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_301, "f64mul", "f64mul (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_302, "f64mul", "f64mul (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_303, "f64mul", "f64mul (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_304, "f64mul", "f64mul (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_305, "f64mul", "f64mul (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_306, "f64mul", "f64mul (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_307, "f64mul", "f64mul (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_308, "f64mul", "f64mul (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_309, "f64mul", "f64mul (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_310, "f64mul", "f64mul (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_311, "f64mul", "f64mul (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_312, "f64mul", "f64mul (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_313, "f64mul", "f64mul (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_314, "f64mul", "f64mul (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_315, "f64mul", "f64mul (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_316, "f64mul", "f64mul (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_317, "f64mul", "f64mul (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_318, "f64mul", "f64mul (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_319, "f64mul", "f64mul (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_320, "f64mul", "f64mul (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_321, "f64mul", "f64mul (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_322, "f64mul", "f64mul (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_323, "f64mul", "f64mul (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_324, "f64mul", "f64mul (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_325, "f64mul", "f64mul (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_326, "f64mul", "f64mul (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_327, "f64mul", "f64mul (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_328, "f64mul", "f64mul (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_329, "f64mul", "f64mul (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_330, "f64mul", "f64mul (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_331, "f64mul", "f64mul (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_332, "f64mul", "f64mul (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_333, "f64mul", "f64mul (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_334, "f64mul", "f64mul (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_335, "f64mul", "f64mul (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_336, "f64mul", "f64mul (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_337, "f64mul", "f64mul (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_338, "f64mul", "f64mul (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_339, "f64mul", "f64mul (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_340, "f64mul", "f64mul (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_341, "f64mul", "f64mul (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_342, "f64mul", "f64mul (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_343, "f64mul", "f64mul (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_344, "f64mul", "f64mul (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_345, "f64mul", "f64mul (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_346, "f64mul", "f64mul (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_347, "f64mul", "f64mul (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_348, "f64mul", "f64mul (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_349, "f64mul", "f64mul (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_350, "f64mul", "f64mul (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_351, "f64mul", "f64mul (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_352, "f64mul", "f64mul (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_353, "f64mul", "f64mul (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_354, "f64mul", "f64mul (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_355, "f64mul", "f64mul (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_356, "f64mul", "f64mul (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_357, "f64mul", "f64mul (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_358, "f64mul", "f64mul (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_359, "f64mul", "f64mul (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_360, "f64mul", "f64mul (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_361, "f64mul", "f64mul (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_362, "f64mul", "f64mul (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_363, "f64mul", "f64mul (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_364, "f64mul", "f64mul (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_365, "f64mul", "f64mul (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_366, "f64mul", "f64mul (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_367, "f64mul", "f64mul (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_368, "f64mul", "f64mul (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_369, "f64mul", "f64mul (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_370, "f64mul", "f64mul (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_371, "f64mul", "f64mul (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_372, "f64mul", "f64mul (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_373, "f64mul", "f64mul (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64mul_374, "f64mul", "f64mul (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64mul_375, "f64mul", "f64mul (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64mul_376, "f64mul", "f64mul (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64mul_377, "f64mul", "f64mul (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64mul_378, "f64mul", "f64mul (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64mul_379, "f64mul", "f64mul (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_380, "f64mul", "f64mul (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_381, "f64mul", "f64mul (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_382, "f64mul", "f64mul (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_383, "f64mul", "f64mul (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_384, "f64mul", "f64mul (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_385, "f64mul", "f64mul (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_386, "f64mul", "f64mul (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_387, "f64mul", "f64mul (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_388, "f64mul", "f64mul (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_389, "f64mul", "f64mul (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_390, "f64mul", "f64mul (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_391, "f64mul", "f64mul (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_392, "f64mul", "f64mul (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_393, "f64mul", "f64mul (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_394, "f64mul", "f64mul (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_395, "f64mul", "f64mul (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64mul_396, "f64mul", "f64mul (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64mul_397, "f64mul", "f64mul (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64mul_398, "f64mul", "f64mul (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64mul_399, "f64mul", "f64mul (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64mul_400, "f64mul", "f64mul (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64mul_401, "f64mul", "f64mul (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_402, "f64mul", "f64mul (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_403, "f64mul", "f64mul (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_404, "f64mul", "f64mul (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_405, "f64mul", "f64mul (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_406, "f64mul", "f64mul (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_407, "f64mul", "f64mul (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_408, "f64mul", "f64mul (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_409, "f64mul", "f64mul (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_410, "f64mul", "f64mul (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_411, "f64mul", "f64mul (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_412, "f64mul", "f64mul (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_413, "f64mul", "f64mul (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_414, "f64mul", "f64mul (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_415, "f64mul", "f64mul (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_416, "f64mul", "f64mul (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_417, "f64mul", "f64mul (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_418, "f64mul", "f64mul (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_419, "f64mul", "f64mul (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_420, "f64mul", "f64mul (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_421, "f64mul", "f64mul (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_422, "f64mul", "f64mul (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_423, "f64mul", "f64mul (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_424, "f64mul", "f64mul (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_425, "f64mul", "f64mul (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_426, "f64mul", "f64mul (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_427, "f64mul", "f64mul (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_428, "f64mul", "f64mul (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_429, "f64mul", "f64mul (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_430, "f64mul", "f64mul (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_431, "f64mul", "f64mul (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_432, "f64mul", "f64mul (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_433, "f64mul", "f64mul (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_434, "f64mul", "f64mul (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_435, "f64mul", "f64mul (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_436, "f64mul", "f64mul (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_437, "f64mul", "f64mul (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_438, "f64mul", "f64mul (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_439, "f64mul", "f64mul (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_440, "f64mul", "f64mul (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_441, "f64mul", "f64mul (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_442, "f64mul", "f64mul (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_443, "f64mul", "f64mul (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_444, "f64mul", "f64mul (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_445, "f64mul", "f64mul (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_446, "f64mul", "f64mul (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_447, "f64mul", "f64mul (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_448, "f64mul", "f64mul (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_449, "f64mul", "f64mul (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_450, "f64mul", "f64mul (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_451, "f64mul", "f64mul (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_452, "f64mul", "f64mul (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_453, "f64mul", "f64mul (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_454, "f64mul", "f64mul (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_455, "f64mul", "f64mul (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_456, "f64mul", "f64mul (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_457, "f64mul", "f64mul (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_458, "f64mul", "f64mul (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_459, "f64mul", "f64mul (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_460, "f64mul", "f64mul (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_461, "f64mul", "f64mul (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64mul_462, "f64mul", "f64mul (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64mul_463, "f64mul", "f64mul (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64mul_464, "f64mul", "f64mul (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64mul_465, "f64mul", "f64mul (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64mul_466, "f64mul", "f64mul (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64mul_467, "f64mul", "f64mul (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_468, "f64mul", "f64mul (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_469, "f64mul", "f64mul (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_470, "f64mul", "f64mul (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_471, "f64mul", "f64mul (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_472, "f64mul", "f64mul (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_473, "f64mul", "f64mul (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_474, "f64mul", "f64mul (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_475, "f64mul", "f64mul (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_476, "f64mul", "f64mul (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_477, "f64mul", "f64mul (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_478, "f64mul", "f64mul (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_479, "f64mul", "f64mul (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64mul_480, "f64mul", "f64mul (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_481, "f64mul", "f64mul (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_482, "f64mul", "f64mul (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64mul_483, "f64mul", "f64mul (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
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
