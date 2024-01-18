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
(f64subf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f64sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float64
(f64subf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_0 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64sub_1 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64sub_2 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64sub_3 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64sub_4 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64sub_5 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_6 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_7 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_8 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_9 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_10 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_11 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_12 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_13 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_14 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_15 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_16 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64sub_17 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64sub_18 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_19 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_20 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_21 (void)
{
  extern typeof (f64sub (vol_var__Float16, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64sub_22 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_23 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64sub_24 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64sub_25 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64sub_26 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64sub_27 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_28 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_29 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_30 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_31 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_32 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_33 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_34 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_35 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_36 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_37 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_38 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64sub_39 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64sub_40 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_41 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_42 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_43 (void)
{
  extern typeof (f64sub (vol_var__Float32, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64sub_44 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64sub_45 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_46 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64sub_47 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64sub_48 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64sub_49 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_50 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_51 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_52 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_53 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_54 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_55 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_56 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_57 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_58 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_59 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_60 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64sub_61 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64sub_62 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_63 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_64 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_65 (void)
{
  extern typeof (f64sub (vol_var__Float32x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64sub_66 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64sub_67 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64sub_68 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_69 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64sub_70 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64sub_71 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_72 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_73 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_74 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_75 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_76 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_77 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_78 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_79 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_80 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_81 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_82 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64sub_83 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64sub_84 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_85 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_86 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_87 (void)
{
  extern typeof (f64sub (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64sub_88 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64sub_89 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64sub_90 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64sub_91 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_92 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64sub_93 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_94 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_95 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_96 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_97 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_98 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_99 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_100 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_101 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_102 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_103 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_104 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64sub_105 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64sub_106 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_107 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_108 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_109 (void)
{
  extern typeof (f64sub (vol_var__Float64x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64sub_110 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64sub_111 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64sub_112 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64sub_113 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64sub_114 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_115 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_116 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_117 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_118 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_119 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_120 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_121 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_122 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_123 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_124 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_125 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_126 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64sub_127 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64sub_128 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_129 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_130 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_131 (void)
{
  extern typeof (f64sub (vol_var__Float128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_132 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_133 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_134 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_135 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_136 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_137 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_138 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_139 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_140 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_141 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_142 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_143 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_144 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_145 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_146 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_147 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_148 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_149 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_150 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_151 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_152 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_153 (void)
{
  extern typeof (f64sub (vol_var_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_154 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_155 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_156 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_157 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_158 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_159 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_160 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_161 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_162 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_163 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_164 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_165 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_166 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_167 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_168 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_169 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_170 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_171 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_172 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_173 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_174 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_175 (void)
{
  extern typeof (f64sub (vol_var_signed_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_176 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_177 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_178 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_179 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_180 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_181 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_182 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_183 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_184 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_185 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_186 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_187 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_188 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_189 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_190 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_191 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_192 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_193 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_194 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_195 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_196 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_197 (void)
{
  extern typeof (f64sub (vol_var_unsigned_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_198 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_199 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_200 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_201 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_202 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_203 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_204 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_205 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_206 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_207 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_208 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_209 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_210 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_211 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_212 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_213 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_214 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_215 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_216 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_217 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_218 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_219 (void)
{
  extern typeof (f64sub (vol_var_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_220 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_221 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_222 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_223 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_224 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_225 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_226 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_227 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_228 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_229 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_230 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_231 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_232 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_233 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_234 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_235 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_236 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_237 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_238 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_239 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_240 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_241 (void)
{
  extern typeof (f64sub (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_242 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_243 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_244 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_245 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_246 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_247 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_248 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_249 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_250 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_251 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_252 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_253 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_254 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_255 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_256 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_257 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_258 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_259 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_260 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_261 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_262 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_263 (void)
{
  extern typeof (f64sub (vol_var_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_264 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_265 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_266 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_267 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_268 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_269 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_270 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_271 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_272 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_273 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_274 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_275 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_276 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_277 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_278 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_279 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_280 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_281 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_282 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_283 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_284 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_285 (void)
{
  extern typeof (f64sub (vol_var_unsigned_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_286 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_287 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_288 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_289 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_290 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_291 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_292 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_293 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_294 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_295 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_296 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_297 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_298 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_299 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_300 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_301 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_302 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_303 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_304 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_305 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_306 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_307 (void)
{
  extern typeof (f64sub (vol_var_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_308 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_309 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_310 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_311 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_312 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_313 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_314 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_315 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_316 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_317 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_318 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_319 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_320 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_321 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_322 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_323 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_324 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_325 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_326 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_327 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_328 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_329 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_330 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_331 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_332 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_333 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_334 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_335 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_336 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_337 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_338 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_339 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_340 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_341 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_342 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_343 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_344 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_345 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_346 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_347 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_348 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_349 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_350 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_351 (void)
{
  extern typeof (f64sub (vol_var_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_352 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_353 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_354 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_355 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_356 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_357 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_358 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_359 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_360 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_361 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_362 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_363 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_364 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_365 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_366 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_367 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_368 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_369 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_370 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_371 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_372 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_373 (void)
{
  extern typeof (f64sub (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64sub_374 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64sub_375 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64sub_376 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64sub_377 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64sub_378 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64sub_379 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_380 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_381 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_382 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_383 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_384 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_385 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_386 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_387 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_388 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_389 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_390 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_391 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_392 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_393 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_394 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_395 (void)
{
  extern typeof (f64sub (vol_var___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64sub_396 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64sub_397 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64sub_398 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64sub_399 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64sub_400 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64sub_401 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_402 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_403 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_404 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_405 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_406 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_407 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_408 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_409 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_410 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_411 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_412 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_413 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_414 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_415 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_416 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_417 (void)
{
  extern typeof (f64sub (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_418 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_419 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_420 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_421 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_422 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_423 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_424 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_425 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_426 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_427 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_428 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_429 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_430 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_431 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_432 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_433 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_434 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_435 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_436 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_437 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_438 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_439 (void)
{
  extern typeof (f64sub (vol_var_enum_e, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_440 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_441 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_442 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_443 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_444 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_445 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_446 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_447 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_448 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_449 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_450 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_451 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_452 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_453 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_454 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_455 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_456 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_457 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_458 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_459 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_460 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_461 (void)
{
  extern typeof (f64sub (vol_var__Bool, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64sub_462 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64sub_463 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64sub_464 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64sub_465 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64sub_466 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64sub_467 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_468 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_469 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_470 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_471 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_472 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_473 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_474 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_475 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_476 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_477 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_478 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_479 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64sub_480 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_481 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_482 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64sub_483 (void)
{
  extern typeof (f64sub (vol_var_bit_field, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64sub (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_0, "f64sub", "f64sub (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64sub_1, "f64sub", "f64sub (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64sub_2, "f64sub", "f64sub (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64sub_3, "f64sub", "f64sub (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64sub_4, "f64sub", "f64sub (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64sub_5, "f64sub", "f64sub (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_6, "f64sub", "f64sub (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_7, "f64sub", "f64sub (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_8, "f64sub", "f64sub (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_9, "f64sub", "f64sub (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_10, "f64sub", "f64sub (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_11, "f64sub", "f64sub (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_12, "f64sub", "f64sub (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_13, "f64sub", "f64sub (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_14, "f64sub", "f64sub (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_15, "f64sub", "f64sub (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_16, "f64sub", "f64sub (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64sub_17, "f64sub", "f64sub (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64sub_18, "f64sub", "f64sub (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_19, "f64sub", "f64sub (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_20, "f64sub", "f64sub (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_21, "f64sub", "f64sub (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64sub_22, "f64sub", "f64sub (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_23, "f64sub", "f64sub (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64sub_24, "f64sub", "f64sub (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64sub_25, "f64sub", "f64sub (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64sub_26, "f64sub", "f64sub (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64sub_27, "f64sub", "f64sub (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_28, "f64sub", "f64sub (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_29, "f64sub", "f64sub (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_30, "f64sub", "f64sub (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_31, "f64sub", "f64sub (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_32, "f64sub", "f64sub (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_33, "f64sub", "f64sub (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_34, "f64sub", "f64sub (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_35, "f64sub", "f64sub (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_36, "f64sub", "f64sub (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_37, "f64sub", "f64sub (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_38, "f64sub", "f64sub (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64sub_39, "f64sub", "f64sub (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64sub_40, "f64sub", "f64sub (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_41, "f64sub", "f64sub (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_42, "f64sub", "f64sub (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_43, "f64sub", "f64sub (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64sub_44, "f64sub", "f64sub (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64sub_45, "f64sub", "f64sub (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_46, "f64sub", "f64sub (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64sub_47, "f64sub", "f64sub (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64sub_48, "f64sub", "f64sub (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64sub_49, "f64sub", "f64sub (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_50, "f64sub", "f64sub (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_51, "f64sub", "f64sub (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_52, "f64sub", "f64sub (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_53, "f64sub", "f64sub (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_54, "f64sub", "f64sub (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_55, "f64sub", "f64sub (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_56, "f64sub", "f64sub (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_57, "f64sub", "f64sub (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_58, "f64sub", "f64sub (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_59, "f64sub", "f64sub (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_60, "f64sub", "f64sub (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64sub_61, "f64sub", "f64sub (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64sub_62, "f64sub", "f64sub (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_63, "f64sub", "f64sub (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_64, "f64sub", "f64sub (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_65, "f64sub", "f64sub (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64sub_66, "f64sub", "f64sub (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64sub_67, "f64sub", "f64sub (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64sub_68, "f64sub", "f64sub (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_69, "f64sub", "f64sub (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64sub_70, "f64sub", "f64sub (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64sub_71, "f64sub", "f64sub (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_72, "f64sub", "f64sub (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_73, "f64sub", "f64sub (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_74, "f64sub", "f64sub (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_75, "f64sub", "f64sub (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_76, "f64sub", "f64sub (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_77, "f64sub", "f64sub (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_78, "f64sub", "f64sub (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_79, "f64sub", "f64sub (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_80, "f64sub", "f64sub (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_81, "f64sub", "f64sub (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_82, "f64sub", "f64sub (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64sub_83, "f64sub", "f64sub (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64sub_84, "f64sub", "f64sub (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_85, "f64sub", "f64sub (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_86, "f64sub", "f64sub (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_87, "f64sub", "f64sub (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64sub_88, "f64sub", "f64sub (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64sub_89, "f64sub", "f64sub (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64sub_90, "f64sub", "f64sub (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64sub_91, "f64sub", "f64sub (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_92, "f64sub", "f64sub (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64sub_93, "f64sub", "f64sub (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_94, "f64sub", "f64sub (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_95, "f64sub", "f64sub (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_96, "f64sub", "f64sub (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_97, "f64sub", "f64sub (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_98, "f64sub", "f64sub (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_99, "f64sub", "f64sub (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_100, "f64sub", "f64sub (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_101, "f64sub", "f64sub (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_102, "f64sub", "f64sub (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_103, "f64sub", "f64sub (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_104, "f64sub", "f64sub (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64sub_105, "f64sub", "f64sub (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64sub_106, "f64sub", "f64sub (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_107, "f64sub", "f64sub (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_108, "f64sub", "f64sub (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_109, "f64sub", "f64sub (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64sub_110, "f64sub", "f64sub (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64sub_111, "f64sub", "f64sub (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64sub_112, "f64sub", "f64sub (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64sub_113, "f64sub", "f64sub (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64sub_114, "f64sub", "f64sub (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_115, "f64sub", "f64sub (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_116, "f64sub", "f64sub (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_117, "f64sub", "f64sub (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_118, "f64sub", "f64sub (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_119, "f64sub", "f64sub (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_120, "f64sub", "f64sub (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_121, "f64sub", "f64sub (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_122, "f64sub", "f64sub (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_123, "f64sub", "f64sub (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_124, "f64sub", "f64sub (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_125, "f64sub", "f64sub (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_126, "f64sub", "f64sub (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64sub_127, "f64sub", "f64sub (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64sub_128, "f64sub", "f64sub (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_129, "f64sub", "f64sub (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_130, "f64sub", "f64sub (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_131, "f64sub", "f64sub (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_132, "f64sub", "f64sub (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_133, "f64sub", "f64sub (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_134, "f64sub", "f64sub (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_135, "f64sub", "f64sub (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_136, "f64sub", "f64sub (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_137, "f64sub", "f64sub (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_138, "f64sub", "f64sub (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_139, "f64sub", "f64sub (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_140, "f64sub", "f64sub (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_141, "f64sub", "f64sub (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_142, "f64sub", "f64sub (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_143, "f64sub", "f64sub (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_144, "f64sub", "f64sub (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_145, "f64sub", "f64sub (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_146, "f64sub", "f64sub (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_147, "f64sub", "f64sub (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_148, "f64sub", "f64sub (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_149, "f64sub", "f64sub (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_150, "f64sub", "f64sub (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_151, "f64sub", "f64sub (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_152, "f64sub", "f64sub (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_153, "f64sub", "f64sub (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_154, "f64sub", "f64sub (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_155, "f64sub", "f64sub (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_156, "f64sub", "f64sub (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_157, "f64sub", "f64sub (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_158, "f64sub", "f64sub (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_159, "f64sub", "f64sub (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_160, "f64sub", "f64sub (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_161, "f64sub", "f64sub (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_162, "f64sub", "f64sub (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_163, "f64sub", "f64sub (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_164, "f64sub", "f64sub (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_165, "f64sub", "f64sub (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_166, "f64sub", "f64sub (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_167, "f64sub", "f64sub (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_168, "f64sub", "f64sub (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_169, "f64sub", "f64sub (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_170, "f64sub", "f64sub (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_171, "f64sub", "f64sub (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_172, "f64sub", "f64sub (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_173, "f64sub", "f64sub (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_174, "f64sub", "f64sub (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_175, "f64sub", "f64sub (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_176, "f64sub", "f64sub (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_177, "f64sub", "f64sub (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_178, "f64sub", "f64sub (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_179, "f64sub", "f64sub (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_180, "f64sub", "f64sub (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_181, "f64sub", "f64sub (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_182, "f64sub", "f64sub (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_183, "f64sub", "f64sub (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_184, "f64sub", "f64sub (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_185, "f64sub", "f64sub (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_186, "f64sub", "f64sub (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_187, "f64sub", "f64sub (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_188, "f64sub", "f64sub (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_189, "f64sub", "f64sub (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_190, "f64sub", "f64sub (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_191, "f64sub", "f64sub (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_192, "f64sub", "f64sub (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_193, "f64sub", "f64sub (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_194, "f64sub", "f64sub (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_195, "f64sub", "f64sub (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_196, "f64sub", "f64sub (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_197, "f64sub", "f64sub (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_198, "f64sub", "f64sub (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_199, "f64sub", "f64sub (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_200, "f64sub", "f64sub (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_201, "f64sub", "f64sub (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_202, "f64sub", "f64sub (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_203, "f64sub", "f64sub (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_204, "f64sub", "f64sub (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_205, "f64sub", "f64sub (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_206, "f64sub", "f64sub (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_207, "f64sub", "f64sub (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_208, "f64sub", "f64sub (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_209, "f64sub", "f64sub (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_210, "f64sub", "f64sub (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_211, "f64sub", "f64sub (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_212, "f64sub", "f64sub (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_213, "f64sub", "f64sub (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_214, "f64sub", "f64sub (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_215, "f64sub", "f64sub (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_216, "f64sub", "f64sub (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_217, "f64sub", "f64sub (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_218, "f64sub", "f64sub (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_219, "f64sub", "f64sub (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_220, "f64sub", "f64sub (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_221, "f64sub", "f64sub (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_222, "f64sub", "f64sub (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_223, "f64sub", "f64sub (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_224, "f64sub", "f64sub (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_225, "f64sub", "f64sub (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_226, "f64sub", "f64sub (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_227, "f64sub", "f64sub (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_228, "f64sub", "f64sub (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_229, "f64sub", "f64sub (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_230, "f64sub", "f64sub (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_231, "f64sub", "f64sub (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_232, "f64sub", "f64sub (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_233, "f64sub", "f64sub (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_234, "f64sub", "f64sub (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_235, "f64sub", "f64sub (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_236, "f64sub", "f64sub (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_237, "f64sub", "f64sub (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_238, "f64sub", "f64sub (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_239, "f64sub", "f64sub (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_240, "f64sub", "f64sub (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_241, "f64sub", "f64sub (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_242, "f64sub", "f64sub (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_243, "f64sub", "f64sub (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_244, "f64sub", "f64sub (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_245, "f64sub", "f64sub (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_246, "f64sub", "f64sub (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_247, "f64sub", "f64sub (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_248, "f64sub", "f64sub (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_249, "f64sub", "f64sub (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_250, "f64sub", "f64sub (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_251, "f64sub", "f64sub (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_252, "f64sub", "f64sub (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_253, "f64sub", "f64sub (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_254, "f64sub", "f64sub (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_255, "f64sub", "f64sub (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_256, "f64sub", "f64sub (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_257, "f64sub", "f64sub (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_258, "f64sub", "f64sub (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_259, "f64sub", "f64sub (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_260, "f64sub", "f64sub (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_261, "f64sub", "f64sub (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_262, "f64sub", "f64sub (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_263, "f64sub", "f64sub (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_264, "f64sub", "f64sub (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_265, "f64sub", "f64sub (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_266, "f64sub", "f64sub (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_267, "f64sub", "f64sub (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_268, "f64sub", "f64sub (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_269, "f64sub", "f64sub (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_270, "f64sub", "f64sub (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_271, "f64sub", "f64sub (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_272, "f64sub", "f64sub (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_273, "f64sub", "f64sub (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_274, "f64sub", "f64sub (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_275, "f64sub", "f64sub (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_276, "f64sub", "f64sub (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_277, "f64sub", "f64sub (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_278, "f64sub", "f64sub (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_279, "f64sub", "f64sub (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_280, "f64sub", "f64sub (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_281, "f64sub", "f64sub (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_282, "f64sub", "f64sub (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_283, "f64sub", "f64sub (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_284, "f64sub", "f64sub (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_285, "f64sub", "f64sub (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_286, "f64sub", "f64sub (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_287, "f64sub", "f64sub (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_288, "f64sub", "f64sub (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_289, "f64sub", "f64sub (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_290, "f64sub", "f64sub (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_291, "f64sub", "f64sub (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_292, "f64sub", "f64sub (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_293, "f64sub", "f64sub (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_294, "f64sub", "f64sub (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_295, "f64sub", "f64sub (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_296, "f64sub", "f64sub (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_297, "f64sub", "f64sub (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_298, "f64sub", "f64sub (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_299, "f64sub", "f64sub (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_300, "f64sub", "f64sub (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_301, "f64sub", "f64sub (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_302, "f64sub", "f64sub (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_303, "f64sub", "f64sub (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_304, "f64sub", "f64sub (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_305, "f64sub", "f64sub (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_306, "f64sub", "f64sub (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_307, "f64sub", "f64sub (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_308, "f64sub", "f64sub (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_309, "f64sub", "f64sub (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_310, "f64sub", "f64sub (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_311, "f64sub", "f64sub (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_312, "f64sub", "f64sub (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_313, "f64sub", "f64sub (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_314, "f64sub", "f64sub (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_315, "f64sub", "f64sub (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_316, "f64sub", "f64sub (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_317, "f64sub", "f64sub (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_318, "f64sub", "f64sub (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_319, "f64sub", "f64sub (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_320, "f64sub", "f64sub (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_321, "f64sub", "f64sub (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_322, "f64sub", "f64sub (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_323, "f64sub", "f64sub (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_324, "f64sub", "f64sub (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_325, "f64sub", "f64sub (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_326, "f64sub", "f64sub (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_327, "f64sub", "f64sub (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_328, "f64sub", "f64sub (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_329, "f64sub", "f64sub (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_330, "f64sub", "f64sub (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_331, "f64sub", "f64sub (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_332, "f64sub", "f64sub (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_333, "f64sub", "f64sub (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_334, "f64sub", "f64sub (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_335, "f64sub", "f64sub (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_336, "f64sub", "f64sub (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_337, "f64sub", "f64sub (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_338, "f64sub", "f64sub (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_339, "f64sub", "f64sub (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_340, "f64sub", "f64sub (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_341, "f64sub", "f64sub (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_342, "f64sub", "f64sub (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_343, "f64sub", "f64sub (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_344, "f64sub", "f64sub (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_345, "f64sub", "f64sub (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_346, "f64sub", "f64sub (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_347, "f64sub", "f64sub (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_348, "f64sub", "f64sub (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_349, "f64sub", "f64sub (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_350, "f64sub", "f64sub (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_351, "f64sub", "f64sub (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_352, "f64sub", "f64sub (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_353, "f64sub", "f64sub (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_354, "f64sub", "f64sub (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_355, "f64sub", "f64sub (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_356, "f64sub", "f64sub (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_357, "f64sub", "f64sub (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_358, "f64sub", "f64sub (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_359, "f64sub", "f64sub (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_360, "f64sub", "f64sub (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_361, "f64sub", "f64sub (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_362, "f64sub", "f64sub (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_363, "f64sub", "f64sub (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_364, "f64sub", "f64sub (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_365, "f64sub", "f64sub (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_366, "f64sub", "f64sub (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_367, "f64sub", "f64sub (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_368, "f64sub", "f64sub (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_369, "f64sub", "f64sub (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_370, "f64sub", "f64sub (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_371, "f64sub", "f64sub (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_372, "f64sub", "f64sub (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_373, "f64sub", "f64sub (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64sub_374, "f64sub", "f64sub (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64sub_375, "f64sub", "f64sub (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64sub_376, "f64sub", "f64sub (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64sub_377, "f64sub", "f64sub (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64sub_378, "f64sub", "f64sub (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64sub_379, "f64sub", "f64sub (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_380, "f64sub", "f64sub (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_381, "f64sub", "f64sub (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_382, "f64sub", "f64sub (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_383, "f64sub", "f64sub (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_384, "f64sub", "f64sub (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_385, "f64sub", "f64sub (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_386, "f64sub", "f64sub (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_387, "f64sub", "f64sub (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_388, "f64sub", "f64sub (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_389, "f64sub", "f64sub (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_390, "f64sub", "f64sub (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_391, "f64sub", "f64sub (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_392, "f64sub", "f64sub (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_393, "f64sub", "f64sub (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_394, "f64sub", "f64sub (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_395, "f64sub", "f64sub (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64sub_396, "f64sub", "f64sub (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64sub_397, "f64sub", "f64sub (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64sub_398, "f64sub", "f64sub (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64sub_399, "f64sub", "f64sub (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64sub_400, "f64sub", "f64sub (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64sub_401, "f64sub", "f64sub (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_402, "f64sub", "f64sub (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_403, "f64sub", "f64sub (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_404, "f64sub", "f64sub (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_405, "f64sub", "f64sub (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_406, "f64sub", "f64sub (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_407, "f64sub", "f64sub (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_408, "f64sub", "f64sub (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_409, "f64sub", "f64sub (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_410, "f64sub", "f64sub (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_411, "f64sub", "f64sub (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_412, "f64sub", "f64sub (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_413, "f64sub", "f64sub (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_414, "f64sub", "f64sub (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_415, "f64sub", "f64sub (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_416, "f64sub", "f64sub (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_417, "f64sub", "f64sub (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_418, "f64sub", "f64sub (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_419, "f64sub", "f64sub (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_420, "f64sub", "f64sub (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_421, "f64sub", "f64sub (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_422, "f64sub", "f64sub (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_423, "f64sub", "f64sub (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_424, "f64sub", "f64sub (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_425, "f64sub", "f64sub (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_426, "f64sub", "f64sub (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_427, "f64sub", "f64sub (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_428, "f64sub", "f64sub (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_429, "f64sub", "f64sub (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_430, "f64sub", "f64sub (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_431, "f64sub", "f64sub (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_432, "f64sub", "f64sub (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_433, "f64sub", "f64sub (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_434, "f64sub", "f64sub (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_435, "f64sub", "f64sub (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_436, "f64sub", "f64sub (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_437, "f64sub", "f64sub (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_438, "f64sub", "f64sub (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_439, "f64sub", "f64sub (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_440, "f64sub", "f64sub (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_441, "f64sub", "f64sub (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_442, "f64sub", "f64sub (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_443, "f64sub", "f64sub (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_444, "f64sub", "f64sub (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_445, "f64sub", "f64sub (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_446, "f64sub", "f64sub (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_447, "f64sub", "f64sub (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_448, "f64sub", "f64sub (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_449, "f64sub", "f64sub (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_450, "f64sub", "f64sub (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_451, "f64sub", "f64sub (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_452, "f64sub", "f64sub (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_453, "f64sub", "f64sub (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_454, "f64sub", "f64sub (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_455, "f64sub", "f64sub (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_456, "f64sub", "f64sub (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_457, "f64sub", "f64sub (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_458, "f64sub", "f64sub (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_459, "f64sub", "f64sub (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_460, "f64sub", "f64sub (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_461, "f64sub", "f64sub (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64sub_462, "f64sub", "f64sub (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64sub_463, "f64sub", "f64sub (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64sub_464, "f64sub", "f64sub (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64sub_465, "f64sub", "f64sub (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64sub_466, "f64sub", "f64sub (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64sub_467, "f64sub", "f64sub (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_468, "f64sub", "f64sub (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_469, "f64sub", "f64sub (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_470, "f64sub", "f64sub (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_471, "f64sub", "f64sub (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_472, "f64sub", "f64sub (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_473, "f64sub", "f64sub (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_474, "f64sub", "f64sub (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_475, "f64sub", "f64sub (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_476, "f64sub", "f64sub (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_477, "f64sub", "f64sub (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_478, "f64sub", "f64sub (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_479, "f64sub", "f64sub (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64sub_480, "f64sub", "f64sub (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_481, "f64sub", "f64sub (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_482, "f64sub", "f64sub (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64sub_483, "f64sub", "f64sub (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
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
