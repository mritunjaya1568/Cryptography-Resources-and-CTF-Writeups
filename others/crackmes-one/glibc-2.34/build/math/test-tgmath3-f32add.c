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
(f32addf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f32add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float32
(f32addf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32
(f32addf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32
(f32addf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_0 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32add_1 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32add_2 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32add_3 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32add_4 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32add_5 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_6 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_7 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_8 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_9 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_10 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_11 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_12 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_13 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_14 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_15 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_16 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32add_17 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32add_18 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_19 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_20 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_21 (void)
{
  extern typeof (f32add (vol_var__Float16, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32add_22 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_23 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32add_24 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32add_25 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32add_26 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32add_27 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_28 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_29 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_30 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_31 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_32 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_33 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_34 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_35 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_36 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_37 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_38 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32add_39 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32add_40 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_41 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_42 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_43 (void)
{
  extern typeof (f32add (vol_var__Float32, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32add_44 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32add_45 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_46 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32add_47 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32add_48 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32add_49 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_50 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_51 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_52 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_53 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_54 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_55 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_56 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_57 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_58 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_59 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_60 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32add_61 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32add_62 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_63 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_64 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_65 (void)
{
  extern typeof (f32add (vol_var__Float32x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32add_66 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32add_67 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32add_68 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_69 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32add_70 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32add_71 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_72 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_73 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_74 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_75 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_76 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_77 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_78 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_79 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_80 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_81 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_82 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32add_83 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32add_84 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_85 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_86 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_87 (void)
{
  extern typeof (f32add (vol_var__Float64, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32add_88 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32add_89 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32add_90 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32add_91 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_92 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32add_93 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_94 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_95 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_96 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_97 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_98 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_99 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_100 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_101 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_102 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_103 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_104 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32add_105 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32add_106 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_107 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_108 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_109 (void)
{
  extern typeof (f32add (vol_var__Float64x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32add_110 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32add_111 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32add_112 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32add_113 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32add_114 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_115 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_116 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_117 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_118 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_119 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_120 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_121 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_122 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_123 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_124 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_125 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_126 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32add_127 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32add_128 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_129 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_130 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_131 (void)
{
  extern typeof (f32add (vol_var__Float128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_132 (void)
{
  extern typeof (f32add (vol_var_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_133 (void)
{
  extern typeof (f32add (vol_var_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_134 (void)
{
  extern typeof (f32add (vol_var_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_135 (void)
{
  extern typeof (f32add (vol_var_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_136 (void)
{
  extern typeof (f32add (vol_var_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_137 (void)
{
  extern typeof (f32add (vol_var_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_138 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_139 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_140 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_141 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_142 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_143 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_144 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_145 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_146 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_147 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_148 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_149 (void)
{
  extern typeof (f32add (vol_var_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_150 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_151 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_152 (void)
{
  extern typeof (f32add (vol_var_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_153 (void)
{
  extern typeof (f32add (vol_var_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_154 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_155 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_156 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_157 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_158 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_159 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_160 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_161 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_162 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_163 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_164 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_165 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_166 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_167 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_168 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_169 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_170 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_171 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_172 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_173 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_174 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_175 (void)
{
  extern typeof (f32add (vol_var_signed_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_176 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_177 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_178 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_179 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_180 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_181 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_182 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_183 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_184 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_185 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_186 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_187 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_188 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_189 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_190 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_191 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_192 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_193 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_194 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_195 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_196 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_197 (void)
{
  extern typeof (f32add (vol_var_unsigned_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_198 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_199 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_200 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_201 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_202 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_203 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_204 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_205 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_206 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_207 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_208 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_209 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_210 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_211 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_212 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_213 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_214 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_215 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_216 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_217 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_218 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_219 (void)
{
  extern typeof (f32add (vol_var_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_220 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_221 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_222 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_223 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_224 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_225 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_226 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_227 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_228 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_229 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_230 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_231 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_232 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_233 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_234 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_235 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_236 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_237 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_238 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_239 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_240 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_241 (void)
{
  extern typeof (f32add (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_242 (void)
{
  extern typeof (f32add (vol_var_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_243 (void)
{
  extern typeof (f32add (vol_var_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_244 (void)
{
  extern typeof (f32add (vol_var_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_245 (void)
{
  extern typeof (f32add (vol_var_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_246 (void)
{
  extern typeof (f32add (vol_var_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_247 (void)
{
  extern typeof (f32add (vol_var_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_248 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_249 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_250 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_251 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_252 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_253 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_254 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_255 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_256 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_257 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_258 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_259 (void)
{
  extern typeof (f32add (vol_var_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_260 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_261 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_262 (void)
{
  extern typeof (f32add (vol_var_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_263 (void)
{
  extern typeof (f32add (vol_var_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_264 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_265 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_266 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_267 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_268 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_269 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_270 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_271 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_272 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_273 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_274 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_275 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_276 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_277 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_278 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_279 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_280 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_281 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_282 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_283 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_284 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_285 (void)
{
  extern typeof (f32add (vol_var_unsigned_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_286 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_287 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_288 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_289 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_290 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_291 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_292 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_293 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_294 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_295 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_296 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_297 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_298 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_299 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_300 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_301 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_302 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_303 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_304 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_305 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_306 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_307 (void)
{
  extern typeof (f32add (vol_var_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_308 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_309 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_310 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_311 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_312 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_313 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_314 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_315 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_316 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_317 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_318 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_319 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_320 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_321 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_322 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_323 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_324 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_325 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_326 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_327 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_328 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_329 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_330 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_331 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_332 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_333 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_334 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_335 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_336 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_337 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_338 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_339 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_340 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_341 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_342 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_343 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_344 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_345 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_346 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_347 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_348 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_349 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_350 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_351 (void)
{
  extern typeof (f32add (vol_var_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_352 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_353 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_354 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_355 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_356 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_357 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_358 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_359 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_360 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_361 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_362 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_363 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_364 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_365 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_366 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_367 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_368 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_369 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_370 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_371 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_372 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_373 (void)
{
  extern typeof (f32add (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32add_374 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32add_375 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32add_376 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32add_377 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32add_378 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32add_379 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_380 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_381 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_382 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_383 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_384 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_385 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_386 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_387 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_388 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_389 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_390 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_391 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_392 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_393 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_394 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_395 (void)
{
  extern typeof (f32add (vol_var___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32add_396 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32add_397 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32add_398 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32add_399 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32add_400 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32add_401 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_402 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_403 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_404 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_405 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_406 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_407 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_408 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_409 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_410 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_411 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_412 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_413 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_414 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_415 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_416 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_417 (void)
{
  extern typeof (f32add (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_418 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_419 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_420 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_421 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_422 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_423 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_424 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_425 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_426 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_427 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_428 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_429 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_430 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_431 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_432 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_433 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_434 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_435 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_436 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_437 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_438 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_439 (void)
{
  extern typeof (f32add (vol_var_enum_e, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_440 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_441 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_442 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_443 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_444 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_445 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_446 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_447 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_448 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_449 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_450 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_451 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_452 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_453 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_454 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_455 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_456 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_457 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_458 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_459 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_460 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_461 (void)
{
  extern typeof (f32add (vol_var__Bool, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32add_462 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32add_463 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32add_464 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32add_465 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32add_466 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32add_467 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_468 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_469 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_470 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_471 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_472 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_473 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_474 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_475 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_476 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_477 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_478 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_479 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32add_480 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_481 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_482 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32add_483 (void)
{
  extern typeof (f32add (vol_var_bit_field, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32add (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_0, "f32add", "f32add (_Float16, _Float16)", FLT64_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32add_1, "f32add", "f32add (_Float16, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32add_2, "f32add", "f32add (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32add_3, "f32add", "f32add (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32add_4, "f32add", "f32add (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32add_5, "f32add", "f32add (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_6, "f32add", "f32add (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_7, "f32add", "f32add (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_8, "f32add", "f32add (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_9, "f32add", "f32add (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_10, "f32add", "f32add (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_11, "f32add", "f32add (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_12, "f32add", "f32add (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_13, "f32add", "f32add (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_14, "f32add", "f32add (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_15, "f32add", "f32add (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_16, "f32add", "f32add (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32add_17, "f32add", "f32add (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32add_18, "f32add", "f32add (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_19, "f32add", "f32add (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_20, "f32add", "f32add (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_21, "f32add", "f32add (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32add_22, "f32add", "f32add (_Float32, _Float16)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_23, "f32add", "f32add (_Float32, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32add_24, "f32add", "f32add (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32add_25, "f32add", "f32add (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32add_26, "f32add", "f32add (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32add_27, "f32add", "f32add (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_28, "f32add", "f32add (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_29, "f32add", "f32add (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_30, "f32add", "f32add (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_31, "f32add", "f32add (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_32, "f32add", "f32add (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_33, "f32add", "f32add (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_34, "f32add", "f32add (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_35, "f32add", "f32add (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_36, "f32add", "f32add (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_37, "f32add", "f32add (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_38, "f32add", "f32add (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32add_39, "f32add", "f32add (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32add_40, "f32add", "f32add (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_41, "f32add", "f32add (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_42, "f32add", "f32add (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_43, "f32add", "f32add (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32add_44, "f32add", "f32add (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32add_45, "f32add", "f32add (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_46, "f32add", "f32add (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32add_47, "f32add", "f32add (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32add_48, "f32add", "f32add (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32add_49, "f32add", "f32add (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_50, "f32add", "f32add (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_51, "f32add", "f32add (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_52, "f32add", "f32add (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_53, "f32add", "f32add (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_54, "f32add", "f32add (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_55, "f32add", "f32add (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_56, "f32add", "f32add (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_57, "f32add", "f32add (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_58, "f32add", "f32add (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_59, "f32add", "f32add (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_60, "f32add", "f32add (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32add_61, "f32add", "f32add (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32add_62, "f32add", "f32add (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_63, "f32add", "f32add (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_64, "f32add", "f32add (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_65, "f32add", "f32add (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32add_66, "f32add", "f32add (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32add_67, "f32add", "f32add (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32add_68, "f32add", "f32add (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_69, "f32add", "f32add (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32add_70, "f32add", "f32add (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32add_71, "f32add", "f32add (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_72, "f32add", "f32add (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_73, "f32add", "f32add (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_74, "f32add", "f32add (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_75, "f32add", "f32add (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_76, "f32add", "f32add (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_77, "f32add", "f32add (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_78, "f32add", "f32add (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_79, "f32add", "f32add (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_80, "f32add", "f32add (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_81, "f32add", "f32add (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_82, "f32add", "f32add (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32add_83, "f32add", "f32add (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32add_84, "f32add", "f32add (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_85, "f32add", "f32add (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_86, "f32add", "f32add (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_87, "f32add", "f32add (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32add_88, "f32add", "f32add (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32add_89, "f32add", "f32add (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32add_90, "f32add", "f32add (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32add_91, "f32add", "f32add (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_92, "f32add", "f32add (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32add_93, "f32add", "f32add (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_94, "f32add", "f32add (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_95, "f32add", "f32add (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_96, "f32add", "f32add (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_97, "f32add", "f32add (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_98, "f32add", "f32add (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_99, "f32add", "f32add (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_100, "f32add", "f32add (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_101, "f32add", "f32add (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_102, "f32add", "f32add (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_103, "f32add", "f32add (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_104, "f32add", "f32add (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32add_105, "f32add", "f32add (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32add_106, "f32add", "f32add (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_107, "f32add", "f32add (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_108, "f32add", "f32add (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_109, "f32add", "f32add (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32add_110, "f32add", "f32add (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32add_111, "f32add", "f32add (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32add_112, "f32add", "f32add (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32add_113, "f32add", "f32add (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32add_114, "f32add", "f32add (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_115, "f32add", "f32add (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_116, "f32add", "f32add (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_117, "f32add", "f32add (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_118, "f32add", "f32add (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_119, "f32add", "f32add (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_120, "f32add", "f32add (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_121, "f32add", "f32add (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_122, "f32add", "f32add (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_123, "f32add", "f32add (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_124, "f32add", "f32add (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_125, "f32add", "f32add (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_126, "f32add", "f32add (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32add_127, "f32add", "f32add (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32add_128, "f32add", "f32add (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_129, "f32add", "f32add (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_130, "f32add", "f32add (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_131, "f32add", "f32add (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_132, "f32add", "f32add (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_133, "f32add", "f32add (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_134, "f32add", "f32add (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_135, "f32add", "f32add (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_136, "f32add", "f32add (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_137, "f32add", "f32add (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_138, "f32add", "f32add (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_139, "f32add", "f32add (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_140, "f32add", "f32add (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_141, "f32add", "f32add (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_142, "f32add", "f32add (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_143, "f32add", "f32add (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_144, "f32add", "f32add (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_145, "f32add", "f32add (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_146, "f32add", "f32add (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_147, "f32add", "f32add (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_148, "f32add", "f32add (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_149, "f32add", "f32add (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_150, "f32add", "f32add (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_151, "f32add", "f32add (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_152, "f32add", "f32add (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_153, "f32add", "f32add (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_154, "f32add", "f32add (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_155, "f32add", "f32add (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_156, "f32add", "f32add (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_157, "f32add", "f32add (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_158, "f32add", "f32add (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_159, "f32add", "f32add (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_160, "f32add", "f32add (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_161, "f32add", "f32add (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_162, "f32add", "f32add (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_163, "f32add", "f32add (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_164, "f32add", "f32add (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_165, "f32add", "f32add (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_166, "f32add", "f32add (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_167, "f32add", "f32add (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_168, "f32add", "f32add (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_169, "f32add", "f32add (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_170, "f32add", "f32add (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_171, "f32add", "f32add (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_172, "f32add", "f32add (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_173, "f32add", "f32add (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_174, "f32add", "f32add (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_175, "f32add", "f32add (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_176, "f32add", "f32add (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_177, "f32add", "f32add (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_178, "f32add", "f32add (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_179, "f32add", "f32add (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_180, "f32add", "f32add (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_181, "f32add", "f32add (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_182, "f32add", "f32add (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_183, "f32add", "f32add (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_184, "f32add", "f32add (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_185, "f32add", "f32add (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_186, "f32add", "f32add (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_187, "f32add", "f32add (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_188, "f32add", "f32add (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_189, "f32add", "f32add (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_190, "f32add", "f32add (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_191, "f32add", "f32add (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_192, "f32add", "f32add (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_193, "f32add", "f32add (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_194, "f32add", "f32add (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_195, "f32add", "f32add (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_196, "f32add", "f32add (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_197, "f32add", "f32add (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_198, "f32add", "f32add (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_199, "f32add", "f32add (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_200, "f32add", "f32add (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_201, "f32add", "f32add (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_202, "f32add", "f32add (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_203, "f32add", "f32add (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_204, "f32add", "f32add (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_205, "f32add", "f32add (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_206, "f32add", "f32add (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_207, "f32add", "f32add (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_208, "f32add", "f32add (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_209, "f32add", "f32add (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_210, "f32add", "f32add (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_211, "f32add", "f32add (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_212, "f32add", "f32add (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_213, "f32add", "f32add (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_214, "f32add", "f32add (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_215, "f32add", "f32add (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_216, "f32add", "f32add (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_217, "f32add", "f32add (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_218, "f32add", "f32add (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_219, "f32add", "f32add (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_220, "f32add", "f32add (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_221, "f32add", "f32add (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_222, "f32add", "f32add (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_223, "f32add", "f32add (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_224, "f32add", "f32add (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_225, "f32add", "f32add (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_226, "f32add", "f32add (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_227, "f32add", "f32add (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_228, "f32add", "f32add (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_229, "f32add", "f32add (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_230, "f32add", "f32add (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_231, "f32add", "f32add (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_232, "f32add", "f32add (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_233, "f32add", "f32add (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_234, "f32add", "f32add (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_235, "f32add", "f32add (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_236, "f32add", "f32add (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_237, "f32add", "f32add (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_238, "f32add", "f32add (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_239, "f32add", "f32add (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_240, "f32add", "f32add (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_241, "f32add", "f32add (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_242, "f32add", "f32add (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_243, "f32add", "f32add (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_244, "f32add", "f32add (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_245, "f32add", "f32add (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_246, "f32add", "f32add (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_247, "f32add", "f32add (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_248, "f32add", "f32add (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_249, "f32add", "f32add (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_250, "f32add", "f32add (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_251, "f32add", "f32add (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_252, "f32add", "f32add (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_253, "f32add", "f32add (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_254, "f32add", "f32add (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_255, "f32add", "f32add (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_256, "f32add", "f32add (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_257, "f32add", "f32add (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_258, "f32add", "f32add (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_259, "f32add", "f32add (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_260, "f32add", "f32add (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_261, "f32add", "f32add (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_262, "f32add", "f32add (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_263, "f32add", "f32add (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_264, "f32add", "f32add (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_265, "f32add", "f32add (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_266, "f32add", "f32add (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_267, "f32add", "f32add (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_268, "f32add", "f32add (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_269, "f32add", "f32add (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_270, "f32add", "f32add (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_271, "f32add", "f32add (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_272, "f32add", "f32add (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_273, "f32add", "f32add (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_274, "f32add", "f32add (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_275, "f32add", "f32add (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_276, "f32add", "f32add (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_277, "f32add", "f32add (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_278, "f32add", "f32add (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_279, "f32add", "f32add (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_280, "f32add", "f32add (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_281, "f32add", "f32add (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_282, "f32add", "f32add (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_283, "f32add", "f32add (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_284, "f32add", "f32add (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_285, "f32add", "f32add (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_286, "f32add", "f32add (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_287, "f32add", "f32add (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_288, "f32add", "f32add (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_289, "f32add", "f32add (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_290, "f32add", "f32add (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_291, "f32add", "f32add (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_292, "f32add", "f32add (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_293, "f32add", "f32add (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_294, "f32add", "f32add (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_295, "f32add", "f32add (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_296, "f32add", "f32add (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_297, "f32add", "f32add (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_298, "f32add", "f32add (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_299, "f32add", "f32add (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_300, "f32add", "f32add (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_301, "f32add", "f32add (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_302, "f32add", "f32add (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_303, "f32add", "f32add (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_304, "f32add", "f32add (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_305, "f32add", "f32add (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_306, "f32add", "f32add (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_307, "f32add", "f32add (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_308, "f32add", "f32add (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_309, "f32add", "f32add (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_310, "f32add", "f32add (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_311, "f32add", "f32add (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_312, "f32add", "f32add (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_313, "f32add", "f32add (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_314, "f32add", "f32add (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_315, "f32add", "f32add (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_316, "f32add", "f32add (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_317, "f32add", "f32add (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_318, "f32add", "f32add (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_319, "f32add", "f32add (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_320, "f32add", "f32add (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_321, "f32add", "f32add (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_322, "f32add", "f32add (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_323, "f32add", "f32add (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_324, "f32add", "f32add (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_325, "f32add", "f32add (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_326, "f32add", "f32add (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_327, "f32add", "f32add (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_328, "f32add", "f32add (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_329, "f32add", "f32add (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_330, "f32add", "f32add (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_331, "f32add", "f32add (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_332, "f32add", "f32add (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_333, "f32add", "f32add (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_334, "f32add", "f32add (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_335, "f32add", "f32add (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_336, "f32add", "f32add (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_337, "f32add", "f32add (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_338, "f32add", "f32add (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_339, "f32add", "f32add (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_340, "f32add", "f32add (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_341, "f32add", "f32add (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_342, "f32add", "f32add (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_343, "f32add", "f32add (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_344, "f32add", "f32add (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_345, "f32add", "f32add (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_346, "f32add", "f32add (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_347, "f32add", "f32add (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_348, "f32add", "f32add (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_349, "f32add", "f32add (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_350, "f32add", "f32add (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_351, "f32add", "f32add (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_352, "f32add", "f32add (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_353, "f32add", "f32add (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_354, "f32add", "f32add (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_355, "f32add", "f32add (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_356, "f32add", "f32add (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_357, "f32add", "f32add (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_358, "f32add", "f32add (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_359, "f32add", "f32add (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_360, "f32add", "f32add (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_361, "f32add", "f32add (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_362, "f32add", "f32add (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_363, "f32add", "f32add (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_364, "f32add", "f32add (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_365, "f32add", "f32add (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_366, "f32add", "f32add (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_367, "f32add", "f32add (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_368, "f32add", "f32add (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_369, "f32add", "f32add (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_370, "f32add", "f32add (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_371, "f32add", "f32add (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_372, "f32add", "f32add (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_373, "f32add", "f32add (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32add_374, "f32add", "f32add (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32add_375, "f32add", "f32add (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32add_376, "f32add", "f32add (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32add_377, "f32add", "f32add (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32add_378, "f32add", "f32add (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32add_379, "f32add", "f32add (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_380, "f32add", "f32add (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_381, "f32add", "f32add (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_382, "f32add", "f32add (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_383, "f32add", "f32add (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_384, "f32add", "f32add (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_385, "f32add", "f32add (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_386, "f32add", "f32add (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_387, "f32add", "f32add (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_388, "f32add", "f32add (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_389, "f32add", "f32add (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_390, "f32add", "f32add (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_391, "f32add", "f32add (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_392, "f32add", "f32add (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_393, "f32add", "f32add (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_394, "f32add", "f32add (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_395, "f32add", "f32add (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32add_396, "f32add", "f32add (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32add_397, "f32add", "f32add (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32add_398, "f32add", "f32add (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32add_399, "f32add", "f32add (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32add_400, "f32add", "f32add (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32add_401, "f32add", "f32add (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_402, "f32add", "f32add (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_403, "f32add", "f32add (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_404, "f32add", "f32add (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_405, "f32add", "f32add (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_406, "f32add", "f32add (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_407, "f32add", "f32add (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_408, "f32add", "f32add (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_409, "f32add", "f32add (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_410, "f32add", "f32add (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_411, "f32add", "f32add (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_412, "f32add", "f32add (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_413, "f32add", "f32add (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_414, "f32add", "f32add (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_415, "f32add", "f32add (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_416, "f32add", "f32add (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_417, "f32add", "f32add (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_418, "f32add", "f32add (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_419, "f32add", "f32add (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_420, "f32add", "f32add (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_421, "f32add", "f32add (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_422, "f32add", "f32add (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_423, "f32add", "f32add (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_424, "f32add", "f32add (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_425, "f32add", "f32add (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_426, "f32add", "f32add (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_427, "f32add", "f32add (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_428, "f32add", "f32add (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_429, "f32add", "f32add (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_430, "f32add", "f32add (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_431, "f32add", "f32add (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_432, "f32add", "f32add (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_433, "f32add", "f32add (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_434, "f32add", "f32add (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_435, "f32add", "f32add (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_436, "f32add", "f32add (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_437, "f32add", "f32add (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_438, "f32add", "f32add (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_439, "f32add", "f32add (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_440, "f32add", "f32add (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_441, "f32add", "f32add (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_442, "f32add", "f32add (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_443, "f32add", "f32add (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_444, "f32add", "f32add (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_445, "f32add", "f32add (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_446, "f32add", "f32add (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_447, "f32add", "f32add (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_448, "f32add", "f32add (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_449, "f32add", "f32add (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_450, "f32add", "f32add (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_451, "f32add", "f32add (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_452, "f32add", "f32add (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_453, "f32add", "f32add (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_454, "f32add", "f32add (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_455, "f32add", "f32add (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_456, "f32add", "f32add (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_457, "f32add", "f32add (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_458, "f32add", "f32add (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_459, "f32add", "f32add (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_460, "f32add", "f32add (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_461, "f32add", "f32add (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32add_462, "f32add", "f32add (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32add_463, "f32add", "f32add (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32add_464, "f32add", "f32add (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32add_465, "f32add", "f32add (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32add_466, "f32add", "f32add (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32add_467, "f32add", "f32add (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_468, "f32add", "f32add (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_469, "f32add", "f32add (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_470, "f32add", "f32add (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_471, "f32add", "f32add (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_472, "f32add", "f32add (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_473, "f32add", "f32add (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_474, "f32add", "f32add (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_475, "f32add", "f32add (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_476, "f32add", "f32add (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_477, "f32add", "f32add (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_478, "f32add", "f32add (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_479, "f32add", "f32add (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32add_480, "f32add", "f32add (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_481, "f32add", "f32add (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_482, "f32add", "f32add (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32add_483, "f32add", "f32add (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
