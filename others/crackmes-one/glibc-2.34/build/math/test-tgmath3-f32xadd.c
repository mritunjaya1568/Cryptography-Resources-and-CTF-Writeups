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
(f32xaddf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32xadd";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32x
(f32xaddf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32xadd";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32x
(f32xaddf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32xadd";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_0 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xadd_1 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xadd_2 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xadd_3 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xadd_4 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xadd_5 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_6 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_7 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_8 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_9 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_10 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_11 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_12 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_13 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_14 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_15 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_16 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xadd_17 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xadd_18 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_19 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_20 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_21 (void)
{
  extern typeof (f32xadd (vol_var__Float16, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xadd_22 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_23 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xadd_24 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xadd_25 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xadd_26 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xadd_27 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_28 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_29 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_30 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_31 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_32 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_33 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_34 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_35 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_36 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_37 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_38 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xadd_39 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xadd_40 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_41 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_42 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_43 (void)
{
  extern typeof (f32xadd (vol_var__Float32, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xadd_44 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xadd_45 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_46 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xadd_47 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xadd_48 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xadd_49 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_50 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_51 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_52 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_53 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_54 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_55 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_56 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_57 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_58 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_59 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_60 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xadd_61 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xadd_62 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_63 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_64 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_65 (void)
{
  extern typeof (f32xadd (vol_var__Float32x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xadd_66 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xadd_67 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xadd_68 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_69 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xadd_70 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xadd_71 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_72 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_73 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_74 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_75 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_76 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_77 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_78 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_79 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_80 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_81 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_82 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xadd_83 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xadd_84 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_85 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_86 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_87 (void)
{
  extern typeof (f32xadd (vol_var__Float64, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xadd_88 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xadd_89 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xadd_90 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xadd_91 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_92 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xadd_93 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_94 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_95 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_96 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_97 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_98 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_99 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_100 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_101 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_102 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_103 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_104 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xadd_105 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xadd_106 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_107 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_108 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_109 (void)
{
  extern typeof (f32xadd (vol_var__Float64x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xadd_110 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xadd_111 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xadd_112 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xadd_113 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xadd_114 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_115 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_116 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_117 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_118 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_119 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_120 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_121 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_122 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_123 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_124 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_125 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_126 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xadd_127 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xadd_128 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_129 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_130 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_131 (void)
{
  extern typeof (f32xadd (vol_var__Float128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_132 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_133 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_134 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_135 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_136 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_137 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_138 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_139 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_140 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_141 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_142 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_143 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_144 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_145 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_146 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_147 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_148 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_149 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_150 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_151 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_152 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_153 (void)
{
  extern typeof (f32xadd (vol_var_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_154 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_155 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_156 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_157 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_158 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_159 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_160 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_161 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_162 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_163 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_164 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_165 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_166 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_167 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_168 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_169 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_170 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_171 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_172 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_173 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_174 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_175 (void)
{
  extern typeof (f32xadd (vol_var_signed_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_176 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_177 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_178 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_179 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_180 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_181 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_182 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_183 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_184 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_185 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_186 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_187 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_188 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_189 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_190 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_191 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_192 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_193 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_194 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_195 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_196 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_197 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_198 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_199 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_200 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_201 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_202 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_203 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_204 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_205 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_206 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_207 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_208 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_209 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_210 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_211 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_212 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_213 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_214 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_215 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_216 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_217 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_218 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_219 (void)
{
  extern typeof (f32xadd (vol_var_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_220 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_221 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_222 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_223 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_224 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_225 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_226 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_227 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_228 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_229 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_230 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_231 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_232 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_233 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_234 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_235 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_236 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_237 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_238 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_239 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_240 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_241 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_242 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_243 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_244 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_245 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_246 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_247 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_248 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_249 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_250 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_251 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_252 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_253 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_254 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_255 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_256 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_257 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_258 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_259 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_260 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_261 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_262 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_263 (void)
{
  extern typeof (f32xadd (vol_var_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_264 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_265 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_266 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_267 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_268 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_269 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_270 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_271 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_272 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_273 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_274 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_275 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_276 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_277 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_278 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_279 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_280 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_281 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_282 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_283 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_284 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_285 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_286 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_287 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_288 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_289 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_290 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_291 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_292 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_293 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_294 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_295 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_296 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_297 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_298 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_299 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_300 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_301 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_302 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_303 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_304 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_305 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_306 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_307 (void)
{
  extern typeof (f32xadd (vol_var_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_308 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_309 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_310 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_311 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_312 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_313 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_314 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_315 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_316 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_317 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_318 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_319 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_320 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_321 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_322 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_323 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_324 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_325 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_326 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_327 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_328 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_329 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_330 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_331 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_332 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_333 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_334 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_335 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_336 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_337 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_338 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_339 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_340 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_341 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_342 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_343 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_344 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_345 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_346 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_347 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_348 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_349 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_350 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_351 (void)
{
  extern typeof (f32xadd (vol_var_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_352 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_353 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_354 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_355 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_356 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_357 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_358 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_359 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_360 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_361 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_362 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_363 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_364 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_365 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_366 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_367 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_368 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_369 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_370 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_371 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_372 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_373 (void)
{
  extern typeof (f32xadd (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xadd_374 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xadd_375 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xadd_376 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xadd_377 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xadd_378 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xadd_379 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_380 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_381 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_382 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_383 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_384 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_385 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_386 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_387 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_388 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_389 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_390 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_391 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_392 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_393 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_394 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_395 (void)
{
  extern typeof (f32xadd (vol_var___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xadd_396 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xadd_397 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xadd_398 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xadd_399 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xadd_400 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xadd_401 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_402 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_403 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_404 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_405 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_406 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_407 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_408 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_409 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_410 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_411 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_412 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_413 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_414 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_415 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_416 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_417 (void)
{
  extern typeof (f32xadd (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_418 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_419 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_420 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_421 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_422 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_423 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_424 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_425 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_426 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_427 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_428 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_429 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_430 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_431 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_432 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_433 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_434 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_435 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_436 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_437 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_438 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_439 (void)
{
  extern typeof (f32xadd (vol_var_enum_e, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_440 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_441 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_442 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_443 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_444 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_445 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_446 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_447 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_448 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_449 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_450 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_451 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_452 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_453 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_454 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_455 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_456 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_457 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_458 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_459 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_460 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_461 (void)
{
  extern typeof (f32xadd (vol_var__Bool, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xadd_462 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xadd_463 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xadd_464 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xadd_465 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xadd_466 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xadd_467 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_468 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_469 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_470 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_471 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_472 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_473 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_474 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_475 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_476 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_477 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_478 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_479 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xadd_480 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_481 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_482 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xadd_483 (void)
{
  extern typeof (f32xadd (vol_var_bit_field, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xadd (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_0, "f32xadd", "f32xadd (_Float16, _Float16)", FLT32X_EXT_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xadd_1, "f32xadd", "f32xadd (_Float16, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xadd_2, "f32xadd", "f32xadd (_Float16, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xadd_3, "f32xadd", "f32xadd (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xadd_4, "f32xadd", "f32xadd (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xadd_5, "f32xadd", "f32xadd (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_6, "f32xadd", "f32xadd (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_7, "f32xadd", "f32xadd (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_8, "f32xadd", "f32xadd (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_9, "f32xadd", "f32xadd (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_10, "f32xadd", "f32xadd (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_11, "f32xadd", "f32xadd (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_12, "f32xadd", "f32xadd (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_13, "f32xadd", "f32xadd (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_14, "f32xadd", "f32xadd (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_15, "f32xadd", "f32xadd (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_16, "f32xadd", "f32xadd (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xadd_17, "f32xadd", "f32xadd (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xadd_18, "f32xadd", "f32xadd (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_19, "f32xadd", "f32xadd (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_20, "f32xadd", "f32xadd (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_21, "f32xadd", "f32xadd (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xadd_22, "f32xadd", "f32xadd (_Float32, _Float16)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_23, "f32xadd", "f32xadd (_Float32, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xadd_24, "f32xadd", "f32xadd (_Float32, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xadd_25, "f32xadd", "f32xadd (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xadd_26, "f32xadd", "f32xadd (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xadd_27, "f32xadd", "f32xadd (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_28, "f32xadd", "f32xadd (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_29, "f32xadd", "f32xadd (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_30, "f32xadd", "f32xadd (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_31, "f32xadd", "f32xadd (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_32, "f32xadd", "f32xadd (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_33, "f32xadd", "f32xadd (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_34, "f32xadd", "f32xadd (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_35, "f32xadd", "f32xadd (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_36, "f32xadd", "f32xadd (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_37, "f32xadd", "f32xadd (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_38, "f32xadd", "f32xadd (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xadd_39, "f32xadd", "f32xadd (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xadd_40, "f32xadd", "f32xadd (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_41, "f32xadd", "f32xadd (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_42, "f32xadd", "f32xadd (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_43, "f32xadd", "f32xadd (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xadd_44, "f32xadd", "f32xadd (_Float32x, _Float16)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xadd_45, "f32xadd", "f32xadd (_Float32x, _Float32)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_46, "f32xadd", "f32xadd (_Float32x, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xadd_47, "f32xadd", "f32xadd (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xadd_48, "f32xadd", "f32xadd (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xadd_49, "f32xadd", "f32xadd (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_50, "f32xadd", "f32xadd (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_51, "f32xadd", "f32xadd (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_52, "f32xadd", "f32xadd (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_53, "f32xadd", "f32xadd (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_54, "f32xadd", "f32xadd (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_55, "f32xadd", "f32xadd (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_56, "f32xadd", "f32xadd (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_57, "f32xadd", "f32xadd (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_58, "f32xadd", "f32xadd (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_59, "f32xadd", "f32xadd (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_60, "f32xadd", "f32xadd (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xadd_61, "f32xadd", "f32xadd (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xadd_62, "f32xadd", "f32xadd (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_63, "f32xadd", "f32xadd (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_64, "f32xadd", "f32xadd (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_65, "f32xadd", "f32xadd (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xadd_66, "f32xadd", "f32xadd (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xadd_67, "f32xadd", "f32xadd (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xadd_68, "f32xadd", "f32xadd (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_69, "f32xadd", "f32xadd (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xadd_70, "f32xadd", "f32xadd (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xadd_71, "f32xadd", "f32xadd (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_72, "f32xadd", "f32xadd (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_73, "f32xadd", "f32xadd (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_74, "f32xadd", "f32xadd (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_75, "f32xadd", "f32xadd (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_76, "f32xadd", "f32xadd (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_77, "f32xadd", "f32xadd (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_78, "f32xadd", "f32xadd (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_79, "f32xadd", "f32xadd (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_80, "f32xadd", "f32xadd (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_81, "f32xadd", "f32xadd (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_82, "f32xadd", "f32xadd (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xadd_83, "f32xadd", "f32xadd (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xadd_84, "f32xadd", "f32xadd (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_85, "f32xadd", "f32xadd (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_86, "f32xadd", "f32xadd (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_87, "f32xadd", "f32xadd (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xadd_88, "f32xadd", "f32xadd (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xadd_89, "f32xadd", "f32xadd (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xadd_90, "f32xadd", "f32xadd (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xadd_91, "f32xadd", "f32xadd (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_92, "f32xadd", "f32xadd (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xadd_93, "f32xadd", "f32xadd (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_94, "f32xadd", "f32xadd (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_95, "f32xadd", "f32xadd (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_96, "f32xadd", "f32xadd (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_97, "f32xadd", "f32xadd (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_98, "f32xadd", "f32xadd (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_99, "f32xadd", "f32xadd (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_100, "f32xadd", "f32xadd (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_101, "f32xadd", "f32xadd (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_102, "f32xadd", "f32xadd (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_103, "f32xadd", "f32xadd (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_104, "f32xadd", "f32xadd (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xadd_105, "f32xadd", "f32xadd (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xadd_106, "f32xadd", "f32xadd (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_107, "f32xadd", "f32xadd (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_108, "f32xadd", "f32xadd (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_109, "f32xadd", "f32xadd (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xadd_110, "f32xadd", "f32xadd (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xadd_111, "f32xadd", "f32xadd (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xadd_112, "f32xadd", "f32xadd (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xadd_113, "f32xadd", "f32xadd (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xadd_114, "f32xadd", "f32xadd (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_115, "f32xadd", "f32xadd (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_116, "f32xadd", "f32xadd (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_117, "f32xadd", "f32xadd (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_118, "f32xadd", "f32xadd (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_119, "f32xadd", "f32xadd (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_120, "f32xadd", "f32xadd (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_121, "f32xadd", "f32xadd (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_122, "f32xadd", "f32xadd (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_123, "f32xadd", "f32xadd (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_124, "f32xadd", "f32xadd (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_125, "f32xadd", "f32xadd (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_126, "f32xadd", "f32xadd (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xadd_127, "f32xadd", "f32xadd (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xadd_128, "f32xadd", "f32xadd (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_129, "f32xadd", "f32xadd (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_130, "f32xadd", "f32xadd (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_131, "f32xadd", "f32xadd (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_132, "f32xadd", "f32xadd (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_133, "f32xadd", "f32xadd (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_134, "f32xadd", "f32xadd (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_135, "f32xadd", "f32xadd (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_136, "f32xadd", "f32xadd (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_137, "f32xadd", "f32xadd (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_138, "f32xadd", "f32xadd (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_139, "f32xadd", "f32xadd (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_140, "f32xadd", "f32xadd (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_141, "f32xadd", "f32xadd (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_142, "f32xadd", "f32xadd (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_143, "f32xadd", "f32xadd (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_144, "f32xadd", "f32xadd (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_145, "f32xadd", "f32xadd (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_146, "f32xadd", "f32xadd (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_147, "f32xadd", "f32xadd (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_148, "f32xadd", "f32xadd (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_149, "f32xadd", "f32xadd (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_150, "f32xadd", "f32xadd (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_151, "f32xadd", "f32xadd (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_152, "f32xadd", "f32xadd (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_153, "f32xadd", "f32xadd (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_154, "f32xadd", "f32xadd (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_155, "f32xadd", "f32xadd (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_156, "f32xadd", "f32xadd (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_157, "f32xadd", "f32xadd (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_158, "f32xadd", "f32xadd (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_159, "f32xadd", "f32xadd (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_160, "f32xadd", "f32xadd (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_161, "f32xadd", "f32xadd (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_162, "f32xadd", "f32xadd (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_163, "f32xadd", "f32xadd (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_164, "f32xadd", "f32xadd (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_165, "f32xadd", "f32xadd (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_166, "f32xadd", "f32xadd (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_167, "f32xadd", "f32xadd (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_168, "f32xadd", "f32xadd (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_169, "f32xadd", "f32xadd (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_170, "f32xadd", "f32xadd (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_171, "f32xadd", "f32xadd (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_172, "f32xadd", "f32xadd (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_173, "f32xadd", "f32xadd (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_174, "f32xadd", "f32xadd (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_175, "f32xadd", "f32xadd (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_176, "f32xadd", "f32xadd (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_177, "f32xadd", "f32xadd (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_178, "f32xadd", "f32xadd (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_179, "f32xadd", "f32xadd (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_180, "f32xadd", "f32xadd (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_181, "f32xadd", "f32xadd (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_182, "f32xadd", "f32xadd (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_183, "f32xadd", "f32xadd (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_184, "f32xadd", "f32xadd (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_185, "f32xadd", "f32xadd (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_186, "f32xadd", "f32xadd (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_187, "f32xadd", "f32xadd (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_188, "f32xadd", "f32xadd (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_189, "f32xadd", "f32xadd (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_190, "f32xadd", "f32xadd (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_191, "f32xadd", "f32xadd (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_192, "f32xadd", "f32xadd (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_193, "f32xadd", "f32xadd (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_194, "f32xadd", "f32xadd (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_195, "f32xadd", "f32xadd (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_196, "f32xadd", "f32xadd (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_197, "f32xadd", "f32xadd (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_198, "f32xadd", "f32xadd (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_199, "f32xadd", "f32xadd (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_200, "f32xadd", "f32xadd (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_201, "f32xadd", "f32xadd (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_202, "f32xadd", "f32xadd (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_203, "f32xadd", "f32xadd (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_204, "f32xadd", "f32xadd (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_205, "f32xadd", "f32xadd (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_206, "f32xadd", "f32xadd (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_207, "f32xadd", "f32xadd (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_208, "f32xadd", "f32xadd (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_209, "f32xadd", "f32xadd (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_210, "f32xadd", "f32xadd (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_211, "f32xadd", "f32xadd (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_212, "f32xadd", "f32xadd (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_213, "f32xadd", "f32xadd (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_214, "f32xadd", "f32xadd (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_215, "f32xadd", "f32xadd (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_216, "f32xadd", "f32xadd (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_217, "f32xadd", "f32xadd (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_218, "f32xadd", "f32xadd (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_219, "f32xadd", "f32xadd (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_220, "f32xadd", "f32xadd (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_221, "f32xadd", "f32xadd (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_222, "f32xadd", "f32xadd (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_223, "f32xadd", "f32xadd (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_224, "f32xadd", "f32xadd (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_225, "f32xadd", "f32xadd (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_226, "f32xadd", "f32xadd (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_227, "f32xadd", "f32xadd (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_228, "f32xadd", "f32xadd (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_229, "f32xadd", "f32xadd (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_230, "f32xadd", "f32xadd (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_231, "f32xadd", "f32xadd (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_232, "f32xadd", "f32xadd (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_233, "f32xadd", "f32xadd (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_234, "f32xadd", "f32xadd (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_235, "f32xadd", "f32xadd (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_236, "f32xadd", "f32xadd (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_237, "f32xadd", "f32xadd (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_238, "f32xadd", "f32xadd (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_239, "f32xadd", "f32xadd (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_240, "f32xadd", "f32xadd (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_241, "f32xadd", "f32xadd (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_242, "f32xadd", "f32xadd (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_243, "f32xadd", "f32xadd (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_244, "f32xadd", "f32xadd (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_245, "f32xadd", "f32xadd (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_246, "f32xadd", "f32xadd (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_247, "f32xadd", "f32xadd (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_248, "f32xadd", "f32xadd (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_249, "f32xadd", "f32xadd (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_250, "f32xadd", "f32xadd (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_251, "f32xadd", "f32xadd (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_252, "f32xadd", "f32xadd (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_253, "f32xadd", "f32xadd (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_254, "f32xadd", "f32xadd (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_255, "f32xadd", "f32xadd (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_256, "f32xadd", "f32xadd (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_257, "f32xadd", "f32xadd (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_258, "f32xadd", "f32xadd (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_259, "f32xadd", "f32xadd (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_260, "f32xadd", "f32xadd (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_261, "f32xadd", "f32xadd (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_262, "f32xadd", "f32xadd (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_263, "f32xadd", "f32xadd (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_264, "f32xadd", "f32xadd (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_265, "f32xadd", "f32xadd (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_266, "f32xadd", "f32xadd (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_267, "f32xadd", "f32xadd (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_268, "f32xadd", "f32xadd (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_269, "f32xadd", "f32xadd (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_270, "f32xadd", "f32xadd (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_271, "f32xadd", "f32xadd (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_272, "f32xadd", "f32xadd (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_273, "f32xadd", "f32xadd (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_274, "f32xadd", "f32xadd (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_275, "f32xadd", "f32xadd (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_276, "f32xadd", "f32xadd (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_277, "f32xadd", "f32xadd (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_278, "f32xadd", "f32xadd (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_279, "f32xadd", "f32xadd (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_280, "f32xadd", "f32xadd (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_281, "f32xadd", "f32xadd (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_282, "f32xadd", "f32xadd (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_283, "f32xadd", "f32xadd (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_284, "f32xadd", "f32xadd (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_285, "f32xadd", "f32xadd (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_286, "f32xadd", "f32xadd (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_287, "f32xadd", "f32xadd (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_288, "f32xadd", "f32xadd (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_289, "f32xadd", "f32xadd (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_290, "f32xadd", "f32xadd (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_291, "f32xadd", "f32xadd (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_292, "f32xadd", "f32xadd (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_293, "f32xadd", "f32xadd (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_294, "f32xadd", "f32xadd (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_295, "f32xadd", "f32xadd (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_296, "f32xadd", "f32xadd (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_297, "f32xadd", "f32xadd (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_298, "f32xadd", "f32xadd (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_299, "f32xadd", "f32xadd (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_300, "f32xadd", "f32xadd (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_301, "f32xadd", "f32xadd (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_302, "f32xadd", "f32xadd (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_303, "f32xadd", "f32xadd (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_304, "f32xadd", "f32xadd (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_305, "f32xadd", "f32xadd (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_306, "f32xadd", "f32xadd (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_307, "f32xadd", "f32xadd (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_308, "f32xadd", "f32xadd (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_309, "f32xadd", "f32xadd (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_310, "f32xadd", "f32xadd (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_311, "f32xadd", "f32xadd (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_312, "f32xadd", "f32xadd (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_313, "f32xadd", "f32xadd (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_314, "f32xadd", "f32xadd (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_315, "f32xadd", "f32xadd (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_316, "f32xadd", "f32xadd (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_317, "f32xadd", "f32xadd (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_318, "f32xadd", "f32xadd (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_319, "f32xadd", "f32xadd (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_320, "f32xadd", "f32xadd (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_321, "f32xadd", "f32xadd (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_322, "f32xadd", "f32xadd (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_323, "f32xadd", "f32xadd (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_324, "f32xadd", "f32xadd (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_325, "f32xadd", "f32xadd (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_326, "f32xadd", "f32xadd (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_327, "f32xadd", "f32xadd (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_328, "f32xadd", "f32xadd (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_329, "f32xadd", "f32xadd (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_330, "f32xadd", "f32xadd (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_331, "f32xadd", "f32xadd (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_332, "f32xadd", "f32xadd (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_333, "f32xadd", "f32xadd (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_334, "f32xadd", "f32xadd (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_335, "f32xadd", "f32xadd (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_336, "f32xadd", "f32xadd (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_337, "f32xadd", "f32xadd (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_338, "f32xadd", "f32xadd (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_339, "f32xadd", "f32xadd (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_340, "f32xadd", "f32xadd (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_341, "f32xadd", "f32xadd (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_342, "f32xadd", "f32xadd (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_343, "f32xadd", "f32xadd (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_344, "f32xadd", "f32xadd (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_345, "f32xadd", "f32xadd (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_346, "f32xadd", "f32xadd (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_347, "f32xadd", "f32xadd (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_348, "f32xadd", "f32xadd (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_349, "f32xadd", "f32xadd (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_350, "f32xadd", "f32xadd (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_351, "f32xadd", "f32xadd (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_352, "f32xadd", "f32xadd (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_353, "f32xadd", "f32xadd (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_354, "f32xadd", "f32xadd (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_355, "f32xadd", "f32xadd (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_356, "f32xadd", "f32xadd (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_357, "f32xadd", "f32xadd (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_358, "f32xadd", "f32xadd (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_359, "f32xadd", "f32xadd (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_360, "f32xadd", "f32xadd (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_361, "f32xadd", "f32xadd (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_362, "f32xadd", "f32xadd (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_363, "f32xadd", "f32xadd (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_364, "f32xadd", "f32xadd (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_365, "f32xadd", "f32xadd (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_366, "f32xadd", "f32xadd (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_367, "f32xadd", "f32xadd (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_368, "f32xadd", "f32xadd (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_369, "f32xadd", "f32xadd (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_370, "f32xadd", "f32xadd (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_371, "f32xadd", "f32xadd (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_372, "f32xadd", "f32xadd (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_373, "f32xadd", "f32xadd (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xadd_374, "f32xadd", "f32xadd (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xadd_375, "f32xadd", "f32xadd (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xadd_376, "f32xadd", "f32xadd (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xadd_377, "f32xadd", "f32xadd (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xadd_378, "f32xadd", "f32xadd (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xadd_379, "f32xadd", "f32xadd (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_380, "f32xadd", "f32xadd (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_381, "f32xadd", "f32xadd (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_382, "f32xadd", "f32xadd (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_383, "f32xadd", "f32xadd (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_384, "f32xadd", "f32xadd (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_385, "f32xadd", "f32xadd (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_386, "f32xadd", "f32xadd (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_387, "f32xadd", "f32xadd (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_388, "f32xadd", "f32xadd (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_389, "f32xadd", "f32xadd (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_390, "f32xadd", "f32xadd (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_391, "f32xadd", "f32xadd (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_392, "f32xadd", "f32xadd (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_393, "f32xadd", "f32xadd (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_394, "f32xadd", "f32xadd (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_395, "f32xadd", "f32xadd (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xadd_396, "f32xadd", "f32xadd (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xadd_397, "f32xadd", "f32xadd (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xadd_398, "f32xadd", "f32xadd (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xadd_399, "f32xadd", "f32xadd (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xadd_400, "f32xadd", "f32xadd (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xadd_401, "f32xadd", "f32xadd (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_402, "f32xadd", "f32xadd (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_403, "f32xadd", "f32xadd (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_404, "f32xadd", "f32xadd (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_405, "f32xadd", "f32xadd (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_406, "f32xadd", "f32xadd (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_407, "f32xadd", "f32xadd (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_408, "f32xadd", "f32xadd (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_409, "f32xadd", "f32xadd (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_410, "f32xadd", "f32xadd (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_411, "f32xadd", "f32xadd (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_412, "f32xadd", "f32xadd (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_413, "f32xadd", "f32xadd (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_414, "f32xadd", "f32xadd (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_415, "f32xadd", "f32xadd (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_416, "f32xadd", "f32xadd (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_417, "f32xadd", "f32xadd (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_418, "f32xadd", "f32xadd (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_419, "f32xadd", "f32xadd (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_420, "f32xadd", "f32xadd (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_421, "f32xadd", "f32xadd (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_422, "f32xadd", "f32xadd (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_423, "f32xadd", "f32xadd (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_424, "f32xadd", "f32xadd (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_425, "f32xadd", "f32xadd (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_426, "f32xadd", "f32xadd (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_427, "f32xadd", "f32xadd (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_428, "f32xadd", "f32xadd (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_429, "f32xadd", "f32xadd (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_430, "f32xadd", "f32xadd (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_431, "f32xadd", "f32xadd (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_432, "f32xadd", "f32xadd (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_433, "f32xadd", "f32xadd (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_434, "f32xadd", "f32xadd (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_435, "f32xadd", "f32xadd (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_436, "f32xadd", "f32xadd (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_437, "f32xadd", "f32xadd (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_438, "f32xadd", "f32xadd (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_439, "f32xadd", "f32xadd (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_440, "f32xadd", "f32xadd (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_441, "f32xadd", "f32xadd (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_442, "f32xadd", "f32xadd (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_443, "f32xadd", "f32xadd (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_444, "f32xadd", "f32xadd (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_445, "f32xadd", "f32xadd (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_446, "f32xadd", "f32xadd (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_447, "f32xadd", "f32xadd (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_448, "f32xadd", "f32xadd (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_449, "f32xadd", "f32xadd (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_450, "f32xadd", "f32xadd (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_451, "f32xadd", "f32xadd (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_452, "f32xadd", "f32xadd (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_453, "f32xadd", "f32xadd (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_454, "f32xadd", "f32xadd (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_455, "f32xadd", "f32xadd (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_456, "f32xadd", "f32xadd (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_457, "f32xadd", "f32xadd (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_458, "f32xadd", "f32xadd (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_459, "f32xadd", "f32xadd (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_460, "f32xadd", "f32xadd (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_461, "f32xadd", "f32xadd (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xadd_462, "f32xadd", "f32xadd (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xadd_463, "f32xadd", "f32xadd (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xadd_464, "f32xadd", "f32xadd (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xadd_465, "f32xadd", "f32xadd (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xadd_466, "f32xadd", "f32xadd (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xadd_467, "f32xadd", "f32xadd (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_468, "f32xadd", "f32xadd (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_469, "f32xadd", "f32xadd (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_470, "f32xadd", "f32xadd (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_471, "f32xadd", "f32xadd (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_472, "f32xadd", "f32xadd (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_473, "f32xadd", "f32xadd (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_474, "f32xadd", "f32xadd (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_475, "f32xadd", "f32xadd (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_476, "f32xadd", "f32xadd (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_477, "f32xadd", "f32xadd (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_478, "f32xadd", "f32xadd (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_479, "f32xadd", "f32xadd (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xadd_480, "f32xadd", "f32xadd (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_481, "f32xadd", "f32xadd (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_482, "f32xadd", "f32xadd (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xadd_483, "f32xadd", "f32xadd (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
