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
(f64addf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f64add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float64
(f64addf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64add";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_0 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64add_1 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64add_2 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64add_3 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64add_4 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64add_5 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_6 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_7 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_8 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_9 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_10 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_11 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_12 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_13 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_14 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_15 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_16 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64add_17 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64add_18 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_19 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_20 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_21 (void)
{
  extern typeof (f64add (vol_var__Float16, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64add_22 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_23 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64add_24 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64add_25 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64add_26 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64add_27 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_28 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_29 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_30 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_31 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_32 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_33 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_34 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_35 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_36 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_37 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_38 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64add_39 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64add_40 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_41 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_42 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_43 (void)
{
  extern typeof (f64add (vol_var__Float32, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64add_44 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64add_45 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_46 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64add_47 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64add_48 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64add_49 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_50 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_51 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_52 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_53 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_54 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_55 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_56 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_57 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_58 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_59 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_60 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64add_61 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64add_62 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_63 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_64 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_65 (void)
{
  extern typeof (f64add (vol_var__Float32x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64add_66 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64add_67 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64add_68 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_69 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64add_70 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64add_71 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_72 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_73 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_74 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_75 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_76 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_77 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_78 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_79 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_80 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_81 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_82 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64add_83 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64add_84 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_85 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_86 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_87 (void)
{
  extern typeof (f64add (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64add_88 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64add_89 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64add_90 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64add_91 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_92 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64add_93 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_94 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_95 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_96 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_97 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_98 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_99 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_100 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_101 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_102 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_103 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_104 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64add_105 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64add_106 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_107 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_108 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_109 (void)
{
  extern typeof (f64add (vol_var__Float64x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64add_110 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64add_111 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64add_112 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64add_113 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64add_114 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_115 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_116 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_117 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_118 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_119 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_120 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_121 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_122 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_123 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_124 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_125 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_126 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64add_127 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64add_128 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_129 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_130 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_131 (void)
{
  extern typeof (f64add (vol_var__Float128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_132 (void)
{
  extern typeof (f64add (vol_var_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_133 (void)
{
  extern typeof (f64add (vol_var_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_134 (void)
{
  extern typeof (f64add (vol_var_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_135 (void)
{
  extern typeof (f64add (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_136 (void)
{
  extern typeof (f64add (vol_var_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_137 (void)
{
  extern typeof (f64add (vol_var_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_138 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_139 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_140 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_141 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_142 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_143 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_144 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_145 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_146 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_147 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_148 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_149 (void)
{
  extern typeof (f64add (vol_var_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_150 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_151 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_152 (void)
{
  extern typeof (f64add (vol_var_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_153 (void)
{
  extern typeof (f64add (vol_var_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_154 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_155 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_156 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_157 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_158 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_159 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_160 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_161 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_162 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_163 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_164 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_165 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_166 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_167 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_168 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_169 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_170 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_171 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_172 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_173 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_174 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_175 (void)
{
  extern typeof (f64add (vol_var_signed_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_176 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_177 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_178 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_179 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_180 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_181 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_182 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_183 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_184 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_185 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_186 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_187 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_188 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_189 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_190 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_191 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_192 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_193 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_194 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_195 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_196 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_197 (void)
{
  extern typeof (f64add (vol_var_unsigned_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_198 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_199 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_200 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_201 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_202 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_203 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_204 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_205 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_206 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_207 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_208 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_209 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_210 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_211 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_212 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_213 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_214 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_215 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_216 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_217 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_218 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_219 (void)
{
  extern typeof (f64add (vol_var_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_220 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_221 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_222 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_223 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_224 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_225 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_226 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_227 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_228 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_229 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_230 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_231 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_232 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_233 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_234 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_235 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_236 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_237 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_238 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_239 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_240 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_241 (void)
{
  extern typeof (f64add (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_242 (void)
{
  extern typeof (f64add (vol_var_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_243 (void)
{
  extern typeof (f64add (vol_var_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_244 (void)
{
  extern typeof (f64add (vol_var_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_245 (void)
{
  extern typeof (f64add (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_246 (void)
{
  extern typeof (f64add (vol_var_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_247 (void)
{
  extern typeof (f64add (vol_var_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_248 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_249 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_250 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_251 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_252 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_253 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_254 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_255 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_256 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_257 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_258 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_259 (void)
{
  extern typeof (f64add (vol_var_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_260 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_261 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_262 (void)
{
  extern typeof (f64add (vol_var_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_263 (void)
{
  extern typeof (f64add (vol_var_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_264 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_265 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_266 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_267 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_268 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_269 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_270 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_271 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_272 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_273 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_274 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_275 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_276 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_277 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_278 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_279 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_280 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_281 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_282 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_283 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_284 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_285 (void)
{
  extern typeof (f64add (vol_var_unsigned_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_286 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_287 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_288 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_289 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_290 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_291 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_292 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_293 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_294 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_295 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_296 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_297 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_298 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_299 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_300 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_301 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_302 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_303 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_304 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_305 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_306 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_307 (void)
{
  extern typeof (f64add (vol_var_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_308 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_309 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_310 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_311 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_312 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_313 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_314 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_315 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_316 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_317 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_318 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_319 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_320 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_321 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_322 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_323 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_324 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_325 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_326 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_327 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_328 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_329 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_330 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_331 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_332 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_333 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_334 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_335 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_336 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_337 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_338 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_339 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_340 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_341 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_342 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_343 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_344 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_345 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_346 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_347 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_348 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_349 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_350 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_351 (void)
{
  extern typeof (f64add (vol_var_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_352 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_353 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_354 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_355 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_356 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_357 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_358 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_359 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_360 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_361 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_362 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_363 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_364 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_365 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_366 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_367 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_368 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_369 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_370 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_371 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_372 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_373 (void)
{
  extern typeof (f64add (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64add_374 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64add_375 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64add_376 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64add_377 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64add_378 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64add_379 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_380 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_381 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_382 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_383 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_384 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_385 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_386 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_387 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_388 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_389 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_390 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_391 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_392 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_393 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_394 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_395 (void)
{
  extern typeof (f64add (vol_var___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64add_396 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64add_397 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64add_398 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64add_399 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64add_400 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64add_401 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_402 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_403 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_404 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_405 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_406 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_407 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_408 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_409 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_410 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_411 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_412 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_413 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_414 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_415 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_416 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_417 (void)
{
  extern typeof (f64add (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_418 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_419 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_420 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_421 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_422 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_423 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_424 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_425 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_426 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_427 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_428 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_429 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_430 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_431 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_432 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_433 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_434 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_435 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_436 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_437 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_438 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_439 (void)
{
  extern typeof (f64add (vol_var_enum_e, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_440 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_441 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_442 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_443 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_444 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_445 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_446 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_447 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_448 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_449 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_450 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_451 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_452 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_453 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_454 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_455 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_456 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_457 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_458 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_459 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_460 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_461 (void)
{
  extern typeof (f64add (vol_var__Bool, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64add_462 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64add_463 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64add_464 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64add_465 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64add_466 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64add_467 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_468 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_469 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_470 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_471 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_472 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_473 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_474 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_475 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_476 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_477 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_478 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_479 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64add_480 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_481 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_482 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64add_483 (void)
{
  extern typeof (f64add (vol_var_bit_field, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64add (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_0, "f64add", "f64add (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64add_1, "f64add", "f64add (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64add_2, "f64add", "f64add (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64add_3, "f64add", "f64add (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64add_4, "f64add", "f64add (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64add_5, "f64add", "f64add (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_6, "f64add", "f64add (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_7, "f64add", "f64add (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_8, "f64add", "f64add (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_9, "f64add", "f64add (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_10, "f64add", "f64add (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_11, "f64add", "f64add (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_12, "f64add", "f64add (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_13, "f64add", "f64add (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_14, "f64add", "f64add (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_15, "f64add", "f64add (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_16, "f64add", "f64add (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64add_17, "f64add", "f64add (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64add_18, "f64add", "f64add (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_19, "f64add", "f64add (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_20, "f64add", "f64add (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_21, "f64add", "f64add (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64add_22, "f64add", "f64add (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_23, "f64add", "f64add (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64add_24, "f64add", "f64add (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64add_25, "f64add", "f64add (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64add_26, "f64add", "f64add (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64add_27, "f64add", "f64add (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_28, "f64add", "f64add (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_29, "f64add", "f64add (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_30, "f64add", "f64add (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_31, "f64add", "f64add (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_32, "f64add", "f64add (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_33, "f64add", "f64add (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_34, "f64add", "f64add (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_35, "f64add", "f64add (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_36, "f64add", "f64add (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_37, "f64add", "f64add (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_38, "f64add", "f64add (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64add_39, "f64add", "f64add (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64add_40, "f64add", "f64add (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_41, "f64add", "f64add (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_42, "f64add", "f64add (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_43, "f64add", "f64add (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64add_44, "f64add", "f64add (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64add_45, "f64add", "f64add (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_46, "f64add", "f64add (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64add_47, "f64add", "f64add (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64add_48, "f64add", "f64add (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64add_49, "f64add", "f64add (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_50, "f64add", "f64add (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_51, "f64add", "f64add (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_52, "f64add", "f64add (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_53, "f64add", "f64add (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_54, "f64add", "f64add (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_55, "f64add", "f64add (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_56, "f64add", "f64add (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_57, "f64add", "f64add (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_58, "f64add", "f64add (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_59, "f64add", "f64add (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_60, "f64add", "f64add (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64add_61, "f64add", "f64add (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64add_62, "f64add", "f64add (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_63, "f64add", "f64add (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_64, "f64add", "f64add (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_65, "f64add", "f64add (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64add_66, "f64add", "f64add (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64add_67, "f64add", "f64add (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64add_68, "f64add", "f64add (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_69, "f64add", "f64add (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64add_70, "f64add", "f64add (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64add_71, "f64add", "f64add (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_72, "f64add", "f64add (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_73, "f64add", "f64add (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_74, "f64add", "f64add (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_75, "f64add", "f64add (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_76, "f64add", "f64add (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_77, "f64add", "f64add (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_78, "f64add", "f64add (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_79, "f64add", "f64add (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_80, "f64add", "f64add (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_81, "f64add", "f64add (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_82, "f64add", "f64add (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64add_83, "f64add", "f64add (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64add_84, "f64add", "f64add (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_85, "f64add", "f64add (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_86, "f64add", "f64add (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_87, "f64add", "f64add (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64add_88, "f64add", "f64add (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64add_89, "f64add", "f64add (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64add_90, "f64add", "f64add (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64add_91, "f64add", "f64add (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_92, "f64add", "f64add (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64add_93, "f64add", "f64add (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_94, "f64add", "f64add (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_95, "f64add", "f64add (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_96, "f64add", "f64add (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_97, "f64add", "f64add (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_98, "f64add", "f64add (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_99, "f64add", "f64add (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_100, "f64add", "f64add (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_101, "f64add", "f64add (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_102, "f64add", "f64add (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_103, "f64add", "f64add (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_104, "f64add", "f64add (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64add_105, "f64add", "f64add (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64add_106, "f64add", "f64add (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_107, "f64add", "f64add (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_108, "f64add", "f64add (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_109, "f64add", "f64add (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64add_110, "f64add", "f64add (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64add_111, "f64add", "f64add (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64add_112, "f64add", "f64add (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64add_113, "f64add", "f64add (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64add_114, "f64add", "f64add (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_115, "f64add", "f64add (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_116, "f64add", "f64add (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_117, "f64add", "f64add (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_118, "f64add", "f64add (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_119, "f64add", "f64add (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_120, "f64add", "f64add (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_121, "f64add", "f64add (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_122, "f64add", "f64add (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_123, "f64add", "f64add (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_124, "f64add", "f64add (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_125, "f64add", "f64add (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_126, "f64add", "f64add (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64add_127, "f64add", "f64add (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64add_128, "f64add", "f64add (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_129, "f64add", "f64add (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_130, "f64add", "f64add (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_131, "f64add", "f64add (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_132, "f64add", "f64add (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_133, "f64add", "f64add (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_134, "f64add", "f64add (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_135, "f64add", "f64add (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_136, "f64add", "f64add (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_137, "f64add", "f64add (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_138, "f64add", "f64add (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_139, "f64add", "f64add (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_140, "f64add", "f64add (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_141, "f64add", "f64add (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_142, "f64add", "f64add (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_143, "f64add", "f64add (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_144, "f64add", "f64add (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_145, "f64add", "f64add (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_146, "f64add", "f64add (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_147, "f64add", "f64add (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_148, "f64add", "f64add (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_149, "f64add", "f64add (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_150, "f64add", "f64add (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_151, "f64add", "f64add (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_152, "f64add", "f64add (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_153, "f64add", "f64add (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_154, "f64add", "f64add (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_155, "f64add", "f64add (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_156, "f64add", "f64add (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_157, "f64add", "f64add (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_158, "f64add", "f64add (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_159, "f64add", "f64add (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_160, "f64add", "f64add (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_161, "f64add", "f64add (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_162, "f64add", "f64add (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_163, "f64add", "f64add (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_164, "f64add", "f64add (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_165, "f64add", "f64add (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_166, "f64add", "f64add (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_167, "f64add", "f64add (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_168, "f64add", "f64add (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_169, "f64add", "f64add (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_170, "f64add", "f64add (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_171, "f64add", "f64add (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_172, "f64add", "f64add (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_173, "f64add", "f64add (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_174, "f64add", "f64add (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_175, "f64add", "f64add (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_176, "f64add", "f64add (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_177, "f64add", "f64add (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_178, "f64add", "f64add (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_179, "f64add", "f64add (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_180, "f64add", "f64add (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_181, "f64add", "f64add (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_182, "f64add", "f64add (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_183, "f64add", "f64add (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_184, "f64add", "f64add (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_185, "f64add", "f64add (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_186, "f64add", "f64add (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_187, "f64add", "f64add (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_188, "f64add", "f64add (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_189, "f64add", "f64add (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_190, "f64add", "f64add (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_191, "f64add", "f64add (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_192, "f64add", "f64add (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_193, "f64add", "f64add (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_194, "f64add", "f64add (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_195, "f64add", "f64add (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_196, "f64add", "f64add (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_197, "f64add", "f64add (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_198, "f64add", "f64add (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_199, "f64add", "f64add (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_200, "f64add", "f64add (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_201, "f64add", "f64add (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_202, "f64add", "f64add (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_203, "f64add", "f64add (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_204, "f64add", "f64add (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_205, "f64add", "f64add (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_206, "f64add", "f64add (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_207, "f64add", "f64add (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_208, "f64add", "f64add (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_209, "f64add", "f64add (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_210, "f64add", "f64add (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_211, "f64add", "f64add (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_212, "f64add", "f64add (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_213, "f64add", "f64add (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_214, "f64add", "f64add (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_215, "f64add", "f64add (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_216, "f64add", "f64add (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_217, "f64add", "f64add (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_218, "f64add", "f64add (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_219, "f64add", "f64add (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_220, "f64add", "f64add (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_221, "f64add", "f64add (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_222, "f64add", "f64add (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_223, "f64add", "f64add (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_224, "f64add", "f64add (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_225, "f64add", "f64add (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_226, "f64add", "f64add (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_227, "f64add", "f64add (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_228, "f64add", "f64add (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_229, "f64add", "f64add (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_230, "f64add", "f64add (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_231, "f64add", "f64add (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_232, "f64add", "f64add (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_233, "f64add", "f64add (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_234, "f64add", "f64add (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_235, "f64add", "f64add (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_236, "f64add", "f64add (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_237, "f64add", "f64add (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_238, "f64add", "f64add (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_239, "f64add", "f64add (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_240, "f64add", "f64add (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_241, "f64add", "f64add (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_242, "f64add", "f64add (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_243, "f64add", "f64add (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_244, "f64add", "f64add (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_245, "f64add", "f64add (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_246, "f64add", "f64add (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_247, "f64add", "f64add (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_248, "f64add", "f64add (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_249, "f64add", "f64add (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_250, "f64add", "f64add (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_251, "f64add", "f64add (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_252, "f64add", "f64add (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_253, "f64add", "f64add (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_254, "f64add", "f64add (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_255, "f64add", "f64add (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_256, "f64add", "f64add (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_257, "f64add", "f64add (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_258, "f64add", "f64add (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_259, "f64add", "f64add (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_260, "f64add", "f64add (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_261, "f64add", "f64add (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_262, "f64add", "f64add (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_263, "f64add", "f64add (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_264, "f64add", "f64add (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_265, "f64add", "f64add (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_266, "f64add", "f64add (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_267, "f64add", "f64add (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_268, "f64add", "f64add (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_269, "f64add", "f64add (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_270, "f64add", "f64add (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_271, "f64add", "f64add (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_272, "f64add", "f64add (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_273, "f64add", "f64add (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_274, "f64add", "f64add (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_275, "f64add", "f64add (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_276, "f64add", "f64add (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_277, "f64add", "f64add (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_278, "f64add", "f64add (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_279, "f64add", "f64add (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_280, "f64add", "f64add (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_281, "f64add", "f64add (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_282, "f64add", "f64add (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_283, "f64add", "f64add (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_284, "f64add", "f64add (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_285, "f64add", "f64add (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_286, "f64add", "f64add (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_287, "f64add", "f64add (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_288, "f64add", "f64add (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_289, "f64add", "f64add (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_290, "f64add", "f64add (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_291, "f64add", "f64add (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_292, "f64add", "f64add (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_293, "f64add", "f64add (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_294, "f64add", "f64add (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_295, "f64add", "f64add (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_296, "f64add", "f64add (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_297, "f64add", "f64add (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_298, "f64add", "f64add (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_299, "f64add", "f64add (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_300, "f64add", "f64add (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_301, "f64add", "f64add (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_302, "f64add", "f64add (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_303, "f64add", "f64add (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_304, "f64add", "f64add (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_305, "f64add", "f64add (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_306, "f64add", "f64add (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_307, "f64add", "f64add (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_308, "f64add", "f64add (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_309, "f64add", "f64add (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_310, "f64add", "f64add (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_311, "f64add", "f64add (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_312, "f64add", "f64add (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_313, "f64add", "f64add (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_314, "f64add", "f64add (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_315, "f64add", "f64add (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_316, "f64add", "f64add (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_317, "f64add", "f64add (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_318, "f64add", "f64add (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_319, "f64add", "f64add (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_320, "f64add", "f64add (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_321, "f64add", "f64add (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_322, "f64add", "f64add (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_323, "f64add", "f64add (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_324, "f64add", "f64add (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_325, "f64add", "f64add (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_326, "f64add", "f64add (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_327, "f64add", "f64add (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_328, "f64add", "f64add (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_329, "f64add", "f64add (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_330, "f64add", "f64add (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_331, "f64add", "f64add (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_332, "f64add", "f64add (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_333, "f64add", "f64add (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_334, "f64add", "f64add (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_335, "f64add", "f64add (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_336, "f64add", "f64add (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_337, "f64add", "f64add (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_338, "f64add", "f64add (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_339, "f64add", "f64add (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_340, "f64add", "f64add (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_341, "f64add", "f64add (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_342, "f64add", "f64add (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_343, "f64add", "f64add (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_344, "f64add", "f64add (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_345, "f64add", "f64add (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_346, "f64add", "f64add (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_347, "f64add", "f64add (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_348, "f64add", "f64add (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_349, "f64add", "f64add (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_350, "f64add", "f64add (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_351, "f64add", "f64add (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_352, "f64add", "f64add (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_353, "f64add", "f64add (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_354, "f64add", "f64add (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_355, "f64add", "f64add (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_356, "f64add", "f64add (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_357, "f64add", "f64add (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_358, "f64add", "f64add (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_359, "f64add", "f64add (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_360, "f64add", "f64add (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_361, "f64add", "f64add (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_362, "f64add", "f64add (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_363, "f64add", "f64add (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_364, "f64add", "f64add (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_365, "f64add", "f64add (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_366, "f64add", "f64add (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_367, "f64add", "f64add (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_368, "f64add", "f64add (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_369, "f64add", "f64add (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_370, "f64add", "f64add (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_371, "f64add", "f64add (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_372, "f64add", "f64add (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_373, "f64add", "f64add (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64add_374, "f64add", "f64add (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64add_375, "f64add", "f64add (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64add_376, "f64add", "f64add (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64add_377, "f64add", "f64add (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64add_378, "f64add", "f64add (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64add_379, "f64add", "f64add (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_380, "f64add", "f64add (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_381, "f64add", "f64add (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_382, "f64add", "f64add (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_383, "f64add", "f64add (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_384, "f64add", "f64add (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_385, "f64add", "f64add (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_386, "f64add", "f64add (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_387, "f64add", "f64add (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_388, "f64add", "f64add (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_389, "f64add", "f64add (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_390, "f64add", "f64add (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_391, "f64add", "f64add (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_392, "f64add", "f64add (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_393, "f64add", "f64add (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_394, "f64add", "f64add (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_395, "f64add", "f64add (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64add_396, "f64add", "f64add (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64add_397, "f64add", "f64add (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64add_398, "f64add", "f64add (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64add_399, "f64add", "f64add (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64add_400, "f64add", "f64add (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64add_401, "f64add", "f64add (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_402, "f64add", "f64add (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_403, "f64add", "f64add (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_404, "f64add", "f64add (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_405, "f64add", "f64add (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_406, "f64add", "f64add (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_407, "f64add", "f64add (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_408, "f64add", "f64add (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_409, "f64add", "f64add (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_410, "f64add", "f64add (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_411, "f64add", "f64add (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_412, "f64add", "f64add (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_413, "f64add", "f64add (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_414, "f64add", "f64add (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_415, "f64add", "f64add (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_416, "f64add", "f64add (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_417, "f64add", "f64add (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_418, "f64add", "f64add (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_419, "f64add", "f64add (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_420, "f64add", "f64add (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_421, "f64add", "f64add (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_422, "f64add", "f64add (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_423, "f64add", "f64add (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_424, "f64add", "f64add (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_425, "f64add", "f64add (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_426, "f64add", "f64add (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_427, "f64add", "f64add (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_428, "f64add", "f64add (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_429, "f64add", "f64add (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_430, "f64add", "f64add (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_431, "f64add", "f64add (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_432, "f64add", "f64add (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_433, "f64add", "f64add (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_434, "f64add", "f64add (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_435, "f64add", "f64add (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_436, "f64add", "f64add (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_437, "f64add", "f64add (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_438, "f64add", "f64add (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_439, "f64add", "f64add (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_440, "f64add", "f64add (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_441, "f64add", "f64add (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_442, "f64add", "f64add (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_443, "f64add", "f64add (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_444, "f64add", "f64add (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_445, "f64add", "f64add (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_446, "f64add", "f64add (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_447, "f64add", "f64add (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_448, "f64add", "f64add (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_449, "f64add", "f64add (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_450, "f64add", "f64add (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_451, "f64add", "f64add (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_452, "f64add", "f64add (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_453, "f64add", "f64add (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_454, "f64add", "f64add (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_455, "f64add", "f64add (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_456, "f64add", "f64add (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_457, "f64add", "f64add (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_458, "f64add", "f64add (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_459, "f64add", "f64add (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_460, "f64add", "f64add (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_461, "f64add", "f64add (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64add_462, "f64add", "f64add (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64add_463, "f64add", "f64add (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64add_464, "f64add", "f64add (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64add_465, "f64add", "f64add (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64add_466, "f64add", "f64add (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64add_467, "f64add", "f64add (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_468, "f64add", "f64add (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_469, "f64add", "f64add (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_470, "f64add", "f64add (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_471, "f64add", "f64add (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_472, "f64add", "f64add (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_473, "f64add", "f64add (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_474, "f64add", "f64add (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_475, "f64add", "f64add (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_476, "f64add", "f64add (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_477, "f64add", "f64add (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_478, "f64add", "f64add (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_479, "f64add", "f64add (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64add_480, "f64add", "f64add (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_481, "f64add", "f64add (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_482, "f64add", "f64add (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64add_483, "f64add", "f64add (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
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
