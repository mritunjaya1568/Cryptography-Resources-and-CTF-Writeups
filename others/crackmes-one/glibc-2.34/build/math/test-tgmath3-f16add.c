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
(f16addf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "f16add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
_Float16
(f16addf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f16add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float16
(f16addf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f16add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float16
(f16addf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f16add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float16
(f16addf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f16add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_0 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16add_1 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16add_2 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16add_3 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16add_4 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16add_5 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_6 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_7 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_8 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_9 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_10 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_11 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_12 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_13 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_14 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_15 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_16 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16add_17 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16add_18 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_19 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_20 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_21 (void)
{
  extern typeof (f16add (vol_var__Float16, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16add_22 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_23 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16add_24 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16add_25 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16add_26 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16add_27 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_28 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_29 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_30 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_31 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_32 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_33 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_34 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_35 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_36 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_37 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_38 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16add_39 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16add_40 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_41 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_42 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_43 (void)
{
  extern typeof (f16add (vol_var__Float32, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16add_44 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16add_45 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_46 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16add_47 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16add_48 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16add_49 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_50 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_51 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_52 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_53 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_54 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_55 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_56 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_57 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_58 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_59 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_60 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16add_61 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16add_62 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_63 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_64 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_65 (void)
{
  extern typeof (f16add (vol_var__Float32x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16add_66 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16add_67 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16add_68 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_69 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16add_70 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16add_71 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_72 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_73 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_74 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_75 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_76 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_77 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_78 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_79 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_80 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_81 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_82 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16add_83 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16add_84 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_85 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_86 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_87 (void)
{
  extern typeof (f16add (vol_var__Float64, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16add_88 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16add_89 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16add_90 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16add_91 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_92 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16add_93 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_94 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_95 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_96 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_97 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_98 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_99 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_100 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_101 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_102 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_103 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_104 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16add_105 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16add_106 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_107 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_108 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_109 (void)
{
  extern typeof (f16add (vol_var__Float64x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16add_110 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16add_111 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16add_112 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16add_113 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16add_114 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_115 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_116 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_117 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_118 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_119 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_120 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_121 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_122 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_123 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_124 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_125 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_126 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16add_127 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16add_128 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_129 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_130 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_131 (void)
{
  extern typeof (f16add (vol_var__Float128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_132 (void)
{
  extern typeof (f16add (vol_var_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_133 (void)
{
  extern typeof (f16add (vol_var_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_134 (void)
{
  extern typeof (f16add (vol_var_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_135 (void)
{
  extern typeof (f16add (vol_var_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_136 (void)
{
  extern typeof (f16add (vol_var_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_137 (void)
{
  extern typeof (f16add (vol_var_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_138 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_139 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_140 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_141 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_142 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_143 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_144 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_145 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_146 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_147 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_148 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_149 (void)
{
  extern typeof (f16add (vol_var_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_150 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_151 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_152 (void)
{
  extern typeof (f16add (vol_var_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_153 (void)
{
  extern typeof (f16add (vol_var_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_154 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_155 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_156 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_157 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_158 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_159 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_160 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_161 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_162 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_163 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_164 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_165 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_166 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_167 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_168 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_169 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_170 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_171 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_172 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_173 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_174 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_175 (void)
{
  extern typeof (f16add (vol_var_signed_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_176 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_177 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_178 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_179 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_180 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_181 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_182 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_183 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_184 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_185 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_186 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_187 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_188 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_189 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_190 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_191 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_192 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_193 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_194 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_195 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_196 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_197 (void)
{
  extern typeof (f16add (vol_var_unsigned_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_198 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_199 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_200 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_201 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_202 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_203 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_204 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_205 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_206 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_207 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_208 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_209 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_210 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_211 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_212 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_213 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_214 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_215 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_216 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_217 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_218 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_219 (void)
{
  extern typeof (f16add (vol_var_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_220 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_221 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_222 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_223 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_224 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_225 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_226 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_227 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_228 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_229 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_230 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_231 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_232 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_233 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_234 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_235 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_236 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_237 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_238 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_239 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_240 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_241 (void)
{
  extern typeof (f16add (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_242 (void)
{
  extern typeof (f16add (vol_var_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_243 (void)
{
  extern typeof (f16add (vol_var_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_244 (void)
{
  extern typeof (f16add (vol_var_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_245 (void)
{
  extern typeof (f16add (vol_var_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_246 (void)
{
  extern typeof (f16add (vol_var_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_247 (void)
{
  extern typeof (f16add (vol_var_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_248 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_249 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_250 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_251 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_252 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_253 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_254 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_255 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_256 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_257 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_258 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_259 (void)
{
  extern typeof (f16add (vol_var_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_260 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_261 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_262 (void)
{
  extern typeof (f16add (vol_var_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_263 (void)
{
  extern typeof (f16add (vol_var_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_264 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_265 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_266 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_267 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_268 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_269 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_270 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_271 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_272 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_273 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_274 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_275 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_276 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_277 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_278 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_279 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_280 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_281 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_282 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_283 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_284 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_285 (void)
{
  extern typeof (f16add (vol_var_unsigned_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_286 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_287 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_288 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_289 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_290 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_291 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_292 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_293 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_294 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_295 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_296 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_297 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_298 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_299 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_300 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_301 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_302 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_303 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_304 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_305 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_306 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_307 (void)
{
  extern typeof (f16add (vol_var_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_308 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_309 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_310 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_311 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_312 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_313 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_314 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_315 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_316 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_317 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_318 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_319 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_320 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_321 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_322 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_323 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_324 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_325 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_326 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_327 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_328 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_329 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_330 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_331 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_332 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_333 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_334 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_335 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_336 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_337 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_338 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_339 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_340 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_341 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_342 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_343 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_344 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_345 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_346 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_347 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_348 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_349 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_350 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_351 (void)
{
  extern typeof (f16add (vol_var_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_352 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_353 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_354 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_355 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_356 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_357 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_358 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_359 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_360 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_361 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_362 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_363 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_364 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_365 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_366 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_367 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_368 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_369 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_370 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_371 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_372 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_373 (void)
{
  extern typeof (f16add (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16add_374 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16add_375 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16add_376 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16add_377 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16add_378 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16add_379 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_380 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_381 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_382 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_383 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_384 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_385 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_386 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_387 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_388 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_389 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_390 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_391 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_392 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_393 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_394 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_395 (void)
{
  extern typeof (f16add (vol_var___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16add_396 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16add_397 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16add_398 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16add_399 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16add_400 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16add_401 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_402 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_403 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_404 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_405 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_406 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_407 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_408 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_409 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_410 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_411 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_412 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_413 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_414 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_415 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_416 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_417 (void)
{
  extern typeof (f16add (vol_var_unsigned___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_418 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_419 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_420 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_421 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_422 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_423 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_424 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_425 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_426 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_427 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_428 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_429 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_430 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_431 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_432 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_433 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_434 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_435 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_436 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_437 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_438 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_439 (void)
{
  extern typeof (f16add (vol_var_enum_e, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_440 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_441 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_442 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_443 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_444 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_445 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_446 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_447 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_448 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_449 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_450 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_451 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_452 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_453 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_454 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_455 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_456 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_457 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_458 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_459 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_460 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_461 (void)
{
  extern typeof (f16add (vol_var__Bool, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16add_462 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16add_463 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16add_464 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16add_465 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16add_466 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16add_467 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_468 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_469 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_470 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_471 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_472 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_473 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_474 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_475 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_476 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_477 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_478 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_479 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16add_480 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_481 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_482 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16add_483 (void)
{
  extern typeof (f16add (vol_var_bit_field, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16add (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_0, "f16add", "f16add (_Float16, _Float16)", FLT32_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16add_1, "f16add", "f16add (_Float16, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16add_2, "f16add", "f16add (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16add_3, "f16add", "f16add (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16add_4, "f16add", "f16add (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16add_5, "f16add", "f16add (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_6, "f16add", "f16add (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_7, "f16add", "f16add (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_8, "f16add", "f16add (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_9, "f16add", "f16add (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_10, "f16add", "f16add (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_11, "f16add", "f16add (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_12, "f16add", "f16add (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_13, "f16add", "f16add (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_14, "f16add", "f16add (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_15, "f16add", "f16add (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_16, "f16add", "f16add (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16add_17, "f16add", "f16add (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16add_18, "f16add", "f16add (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_19, "f16add", "f16add (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_20, "f16add", "f16add (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_21, "f16add", "f16add (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16add_22, "f16add", "f16add (_Float32, _Float16)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_23, "f16add", "f16add (_Float32, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16add_24, "f16add", "f16add (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16add_25, "f16add", "f16add (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16add_26, "f16add", "f16add (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16add_27, "f16add", "f16add (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_28, "f16add", "f16add (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_29, "f16add", "f16add (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_30, "f16add", "f16add (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_31, "f16add", "f16add (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_32, "f16add", "f16add (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_33, "f16add", "f16add (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_34, "f16add", "f16add (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_35, "f16add", "f16add (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_36, "f16add", "f16add (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_37, "f16add", "f16add (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_38, "f16add", "f16add (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16add_39, "f16add", "f16add (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16add_40, "f16add", "f16add (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_41, "f16add", "f16add (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_42, "f16add", "f16add (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_43, "f16add", "f16add (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16add_44, "f16add", "f16add (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16add_45, "f16add", "f16add (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_46, "f16add", "f16add (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16add_47, "f16add", "f16add (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16add_48, "f16add", "f16add (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16add_49, "f16add", "f16add (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_50, "f16add", "f16add (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_51, "f16add", "f16add (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_52, "f16add", "f16add (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_53, "f16add", "f16add (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_54, "f16add", "f16add (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_55, "f16add", "f16add (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_56, "f16add", "f16add (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_57, "f16add", "f16add (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_58, "f16add", "f16add (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_59, "f16add", "f16add (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_60, "f16add", "f16add (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16add_61, "f16add", "f16add (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16add_62, "f16add", "f16add (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_63, "f16add", "f16add (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_64, "f16add", "f16add (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_65, "f16add", "f16add (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16add_66, "f16add", "f16add (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16add_67, "f16add", "f16add (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16add_68, "f16add", "f16add (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_69, "f16add", "f16add (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16add_70, "f16add", "f16add (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16add_71, "f16add", "f16add (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_72, "f16add", "f16add (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_73, "f16add", "f16add (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_74, "f16add", "f16add (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_75, "f16add", "f16add (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_76, "f16add", "f16add (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_77, "f16add", "f16add (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_78, "f16add", "f16add (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_79, "f16add", "f16add (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_80, "f16add", "f16add (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_81, "f16add", "f16add (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_82, "f16add", "f16add (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16add_83, "f16add", "f16add (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16add_84, "f16add", "f16add (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_85, "f16add", "f16add (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_86, "f16add", "f16add (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_87, "f16add", "f16add (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16add_88, "f16add", "f16add (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16add_89, "f16add", "f16add (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16add_90, "f16add", "f16add (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16add_91, "f16add", "f16add (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_92, "f16add", "f16add (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16add_93, "f16add", "f16add (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_94, "f16add", "f16add (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_95, "f16add", "f16add (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_96, "f16add", "f16add (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_97, "f16add", "f16add (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_98, "f16add", "f16add (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_99, "f16add", "f16add (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_100, "f16add", "f16add (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_101, "f16add", "f16add (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_102, "f16add", "f16add (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_103, "f16add", "f16add (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_104, "f16add", "f16add (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16add_105, "f16add", "f16add (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16add_106, "f16add", "f16add (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_107, "f16add", "f16add (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_108, "f16add", "f16add (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_109, "f16add", "f16add (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16add_110, "f16add", "f16add (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16add_111, "f16add", "f16add (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16add_112, "f16add", "f16add (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16add_113, "f16add", "f16add (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16add_114, "f16add", "f16add (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_115, "f16add", "f16add (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_116, "f16add", "f16add (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_117, "f16add", "f16add (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_118, "f16add", "f16add (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_119, "f16add", "f16add (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_120, "f16add", "f16add (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_121, "f16add", "f16add (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_122, "f16add", "f16add (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_123, "f16add", "f16add (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_124, "f16add", "f16add (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_125, "f16add", "f16add (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_126, "f16add", "f16add (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16add_127, "f16add", "f16add (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16add_128, "f16add", "f16add (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_129, "f16add", "f16add (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_130, "f16add", "f16add (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_131, "f16add", "f16add (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_132, "f16add", "f16add (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_133, "f16add", "f16add (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_134, "f16add", "f16add (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_135, "f16add", "f16add (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_136, "f16add", "f16add (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_137, "f16add", "f16add (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_138, "f16add", "f16add (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_139, "f16add", "f16add (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_140, "f16add", "f16add (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_141, "f16add", "f16add (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_142, "f16add", "f16add (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_143, "f16add", "f16add (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_144, "f16add", "f16add (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_145, "f16add", "f16add (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_146, "f16add", "f16add (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_147, "f16add", "f16add (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_148, "f16add", "f16add (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_149, "f16add", "f16add (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_150, "f16add", "f16add (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_151, "f16add", "f16add (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_152, "f16add", "f16add (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_153, "f16add", "f16add (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_154, "f16add", "f16add (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_155, "f16add", "f16add (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_156, "f16add", "f16add (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_157, "f16add", "f16add (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_158, "f16add", "f16add (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_159, "f16add", "f16add (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_160, "f16add", "f16add (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_161, "f16add", "f16add (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_162, "f16add", "f16add (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_163, "f16add", "f16add (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_164, "f16add", "f16add (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_165, "f16add", "f16add (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_166, "f16add", "f16add (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_167, "f16add", "f16add (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_168, "f16add", "f16add (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_169, "f16add", "f16add (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_170, "f16add", "f16add (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_171, "f16add", "f16add (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_172, "f16add", "f16add (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_173, "f16add", "f16add (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_174, "f16add", "f16add (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_175, "f16add", "f16add (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_176, "f16add", "f16add (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_177, "f16add", "f16add (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_178, "f16add", "f16add (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_179, "f16add", "f16add (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_180, "f16add", "f16add (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_181, "f16add", "f16add (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_182, "f16add", "f16add (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_183, "f16add", "f16add (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_184, "f16add", "f16add (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_185, "f16add", "f16add (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_186, "f16add", "f16add (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_187, "f16add", "f16add (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_188, "f16add", "f16add (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_189, "f16add", "f16add (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_190, "f16add", "f16add (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_191, "f16add", "f16add (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_192, "f16add", "f16add (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_193, "f16add", "f16add (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_194, "f16add", "f16add (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_195, "f16add", "f16add (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_196, "f16add", "f16add (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_197, "f16add", "f16add (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_198, "f16add", "f16add (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_199, "f16add", "f16add (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_200, "f16add", "f16add (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_201, "f16add", "f16add (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_202, "f16add", "f16add (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_203, "f16add", "f16add (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_204, "f16add", "f16add (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_205, "f16add", "f16add (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_206, "f16add", "f16add (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_207, "f16add", "f16add (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_208, "f16add", "f16add (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_209, "f16add", "f16add (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_210, "f16add", "f16add (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_211, "f16add", "f16add (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_212, "f16add", "f16add (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_213, "f16add", "f16add (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_214, "f16add", "f16add (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_215, "f16add", "f16add (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_216, "f16add", "f16add (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_217, "f16add", "f16add (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_218, "f16add", "f16add (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_219, "f16add", "f16add (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_220, "f16add", "f16add (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_221, "f16add", "f16add (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_222, "f16add", "f16add (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_223, "f16add", "f16add (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_224, "f16add", "f16add (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_225, "f16add", "f16add (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_226, "f16add", "f16add (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_227, "f16add", "f16add (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_228, "f16add", "f16add (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_229, "f16add", "f16add (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_230, "f16add", "f16add (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_231, "f16add", "f16add (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_232, "f16add", "f16add (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_233, "f16add", "f16add (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_234, "f16add", "f16add (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_235, "f16add", "f16add (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_236, "f16add", "f16add (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_237, "f16add", "f16add (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_238, "f16add", "f16add (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_239, "f16add", "f16add (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_240, "f16add", "f16add (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_241, "f16add", "f16add (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_242, "f16add", "f16add (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_243, "f16add", "f16add (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_244, "f16add", "f16add (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_245, "f16add", "f16add (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_246, "f16add", "f16add (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_247, "f16add", "f16add (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_248, "f16add", "f16add (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_249, "f16add", "f16add (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_250, "f16add", "f16add (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_251, "f16add", "f16add (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_252, "f16add", "f16add (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_253, "f16add", "f16add (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_254, "f16add", "f16add (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_255, "f16add", "f16add (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_256, "f16add", "f16add (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_257, "f16add", "f16add (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_258, "f16add", "f16add (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_259, "f16add", "f16add (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_260, "f16add", "f16add (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_261, "f16add", "f16add (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_262, "f16add", "f16add (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_263, "f16add", "f16add (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_264, "f16add", "f16add (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_265, "f16add", "f16add (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_266, "f16add", "f16add (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_267, "f16add", "f16add (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_268, "f16add", "f16add (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_269, "f16add", "f16add (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_270, "f16add", "f16add (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_271, "f16add", "f16add (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_272, "f16add", "f16add (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_273, "f16add", "f16add (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_274, "f16add", "f16add (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_275, "f16add", "f16add (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_276, "f16add", "f16add (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_277, "f16add", "f16add (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_278, "f16add", "f16add (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_279, "f16add", "f16add (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_280, "f16add", "f16add (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_281, "f16add", "f16add (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_282, "f16add", "f16add (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_283, "f16add", "f16add (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_284, "f16add", "f16add (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_285, "f16add", "f16add (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_286, "f16add", "f16add (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_287, "f16add", "f16add (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_288, "f16add", "f16add (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_289, "f16add", "f16add (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_290, "f16add", "f16add (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_291, "f16add", "f16add (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_292, "f16add", "f16add (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_293, "f16add", "f16add (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_294, "f16add", "f16add (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_295, "f16add", "f16add (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_296, "f16add", "f16add (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_297, "f16add", "f16add (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_298, "f16add", "f16add (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_299, "f16add", "f16add (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_300, "f16add", "f16add (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_301, "f16add", "f16add (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_302, "f16add", "f16add (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_303, "f16add", "f16add (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_304, "f16add", "f16add (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_305, "f16add", "f16add (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_306, "f16add", "f16add (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_307, "f16add", "f16add (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_308, "f16add", "f16add (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_309, "f16add", "f16add (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_310, "f16add", "f16add (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_311, "f16add", "f16add (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_312, "f16add", "f16add (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_313, "f16add", "f16add (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_314, "f16add", "f16add (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_315, "f16add", "f16add (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_316, "f16add", "f16add (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_317, "f16add", "f16add (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_318, "f16add", "f16add (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_319, "f16add", "f16add (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_320, "f16add", "f16add (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_321, "f16add", "f16add (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_322, "f16add", "f16add (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_323, "f16add", "f16add (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_324, "f16add", "f16add (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_325, "f16add", "f16add (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_326, "f16add", "f16add (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_327, "f16add", "f16add (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_328, "f16add", "f16add (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_329, "f16add", "f16add (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_330, "f16add", "f16add (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_331, "f16add", "f16add (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_332, "f16add", "f16add (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_333, "f16add", "f16add (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_334, "f16add", "f16add (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_335, "f16add", "f16add (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_336, "f16add", "f16add (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_337, "f16add", "f16add (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_338, "f16add", "f16add (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_339, "f16add", "f16add (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_340, "f16add", "f16add (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_341, "f16add", "f16add (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_342, "f16add", "f16add (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_343, "f16add", "f16add (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_344, "f16add", "f16add (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_345, "f16add", "f16add (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_346, "f16add", "f16add (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_347, "f16add", "f16add (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_348, "f16add", "f16add (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_349, "f16add", "f16add (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_350, "f16add", "f16add (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_351, "f16add", "f16add (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_352, "f16add", "f16add (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_353, "f16add", "f16add (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_354, "f16add", "f16add (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_355, "f16add", "f16add (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_356, "f16add", "f16add (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_357, "f16add", "f16add (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_358, "f16add", "f16add (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_359, "f16add", "f16add (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_360, "f16add", "f16add (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_361, "f16add", "f16add (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_362, "f16add", "f16add (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_363, "f16add", "f16add (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_364, "f16add", "f16add (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_365, "f16add", "f16add (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_366, "f16add", "f16add (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_367, "f16add", "f16add (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_368, "f16add", "f16add (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_369, "f16add", "f16add (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_370, "f16add", "f16add (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_371, "f16add", "f16add (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_372, "f16add", "f16add (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_373, "f16add", "f16add (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16add_374, "f16add", "f16add (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16add_375, "f16add", "f16add (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16add_376, "f16add", "f16add (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16add_377, "f16add", "f16add (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16add_378, "f16add", "f16add (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16add_379, "f16add", "f16add (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_380, "f16add", "f16add (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_381, "f16add", "f16add (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_382, "f16add", "f16add (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_383, "f16add", "f16add (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_384, "f16add", "f16add (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_385, "f16add", "f16add (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_386, "f16add", "f16add (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_387, "f16add", "f16add (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_388, "f16add", "f16add (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_389, "f16add", "f16add (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_390, "f16add", "f16add (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_391, "f16add", "f16add (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_392, "f16add", "f16add (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_393, "f16add", "f16add (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_394, "f16add", "f16add (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_395, "f16add", "f16add (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16add_396, "f16add", "f16add (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16add_397, "f16add", "f16add (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16add_398, "f16add", "f16add (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16add_399, "f16add", "f16add (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16add_400, "f16add", "f16add (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16add_401, "f16add", "f16add (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_402, "f16add", "f16add (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_403, "f16add", "f16add (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_404, "f16add", "f16add (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_405, "f16add", "f16add (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_406, "f16add", "f16add (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_407, "f16add", "f16add (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_408, "f16add", "f16add (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_409, "f16add", "f16add (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_410, "f16add", "f16add (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_411, "f16add", "f16add (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_412, "f16add", "f16add (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_413, "f16add", "f16add (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_414, "f16add", "f16add (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_415, "f16add", "f16add (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_416, "f16add", "f16add (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_417, "f16add", "f16add (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_418, "f16add", "f16add (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_419, "f16add", "f16add (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_420, "f16add", "f16add (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_421, "f16add", "f16add (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_422, "f16add", "f16add (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_423, "f16add", "f16add (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_424, "f16add", "f16add (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_425, "f16add", "f16add (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_426, "f16add", "f16add (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_427, "f16add", "f16add (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_428, "f16add", "f16add (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_429, "f16add", "f16add (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_430, "f16add", "f16add (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_431, "f16add", "f16add (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_432, "f16add", "f16add (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_433, "f16add", "f16add (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_434, "f16add", "f16add (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_435, "f16add", "f16add (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_436, "f16add", "f16add (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_437, "f16add", "f16add (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_438, "f16add", "f16add (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_439, "f16add", "f16add (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_440, "f16add", "f16add (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_441, "f16add", "f16add (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_442, "f16add", "f16add (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_443, "f16add", "f16add (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_444, "f16add", "f16add (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_445, "f16add", "f16add (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_446, "f16add", "f16add (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_447, "f16add", "f16add (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_448, "f16add", "f16add (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_449, "f16add", "f16add (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_450, "f16add", "f16add (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_451, "f16add", "f16add (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_452, "f16add", "f16add (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_453, "f16add", "f16add (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_454, "f16add", "f16add (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_455, "f16add", "f16add (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_456, "f16add", "f16add (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_457, "f16add", "f16add (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_458, "f16add", "f16add (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_459, "f16add", "f16add (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_460, "f16add", "f16add (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_461, "f16add", "f16add (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16add_462, "f16add", "f16add (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16add_463, "f16add", "f16add (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16add_464, "f16add", "f16add (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16add_465, "f16add", "f16add (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16add_466, "f16add", "f16add (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16add_467, "f16add", "f16add (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_468, "f16add", "f16add (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_469, "f16add", "f16add (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_470, "f16add", "f16add (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_471, "f16add", "f16add (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_472, "f16add", "f16add (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_473, "f16add", "f16add (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_474, "f16add", "f16add (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_475, "f16add", "f16add (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_476, "f16add", "f16add (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_477, "f16add", "f16add (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_478, "f16add", "f16add (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_479, "f16add", "f16add (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16add_480, "f16add", "f16add (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_481, "f16add", "f16add (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_482, "f16add", "f16add (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16add_483, "f16add", "f16add (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
