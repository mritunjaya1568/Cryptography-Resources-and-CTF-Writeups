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
#if defined HUGE_VAL_F16
_Float16
(hypotf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#endif
float
(hypotf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(hypotf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(hypotf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#endif
double
(hypot) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
long double
(hypotl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(hypotf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(hypotf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(hypotf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "hypot";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_0 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = hypot (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_1 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = hypot (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_hypot_2 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = hypot (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_hypot_3 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = hypot (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_4 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_5 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_hypot_6 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_hypot_7 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_hypot_8 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_9 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_10 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_11 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_12 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_13 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_14 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_15 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_16 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_17 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_18 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_19 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_hypot_20 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_hypot_21 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_22 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_23 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_24 (void)
{
  extern typeof (hypot (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_25 (void)
{
  extern typeof (hypot (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = hypot (vol_var_float, vol_var__Float16);
}
#endif
static void
test_hypot_26 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = hypot (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_27 (void)
{
  extern typeof (hypot (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = hypot (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_28 (void)
{
  extern typeof (hypot (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = hypot (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_hypot_29 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_double);
}
static void
test_hypot_30 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_31 (void)
{
  extern typeof (hypot (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_32 (void)
{
  extern typeof (hypot (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_33 (void)
{
  extern typeof (hypot (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_float, vol_var__Float128);
}
#endif
static void
test_hypot_34 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_char);
}
static void
test_hypot_35 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_signed_char);
}
static void
test_hypot_36 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_unsigned_char);
}
static void
test_hypot_37 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_short_int);
}
static void
test_hypot_38 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_hypot_39 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_int);
}
static void
test_hypot_40 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_unsigned_int);
}
static void
test_hypot_41 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_long_int);
}
static void
test_hypot_42 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_hypot_43 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_long_long_int);
}
static void
test_hypot_44 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_45 (void)
{
  extern typeof (hypot (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_46 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_47 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_enum_e);
}
static void
test_hypot_48 (void)
{
  extern typeof (hypot (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var__Bool);
}
static void
test_hypot_49 (void)
{
  extern typeof (hypot (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_hypot_50 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = hypot (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_51 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = hypot (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_52 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = hypot (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_hypot_53 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = hypot (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_54 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_55 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_hypot_56 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_hypot_57 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_hypot_58 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_59 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_60 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_61 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_62 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_63 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_64 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_65 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_66 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_67 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_68 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_69 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_hypot_70 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_hypot_71 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_72 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_73 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_hypot_74 (void)
{
  extern typeof (hypot (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_hypot_75 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = hypot (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_76 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = hypot (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_hypot_77 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = hypot (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_78 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = hypot (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_79 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_80 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_hypot_81 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_hypot_82 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_hypot_83 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_84 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_85 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_86 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_87 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_88 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_89 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_90 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_91 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_92 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_93 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_94 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_hypot_95 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_hypot_96 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_97 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_98 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_99 (void)
{
  extern typeof (hypot (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_100 (void)
{
  extern typeof (hypot (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var__Float16);
}
#endif
static void
test_hypot_101 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_102 (void)
{
  extern typeof (hypot (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_103 (void)
{
  extern typeof (hypot (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_hypot_104 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_double);
}
static void
test_hypot_105 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_106 (void)
{
  extern typeof (hypot (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_107 (void)
{
  extern typeof (hypot (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_108 (void)
{
  extern typeof (hypot (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_double, vol_var__Float128);
}
#endif
static void
test_hypot_109 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_char);
}
static void
test_hypot_110 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_signed_char);
}
static void
test_hypot_111 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_unsigned_char);
}
static void
test_hypot_112 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_short_int);
}
static void
test_hypot_113 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_hypot_114 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_int);
}
static void
test_hypot_115 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_unsigned_int);
}
static void
test_hypot_116 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_long_int);
}
static void
test_hypot_117 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_hypot_118 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_long_long_int);
}
static void
test_hypot_119 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_120 (void)
{
  extern typeof (hypot (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_121 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_122 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_enum_e);
}
static void
test_hypot_123 (void)
{
  extern typeof (hypot (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var__Bool);
}
static void
test_hypot_124 (void)
{
  extern typeof (hypot (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_125 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_hypot_126 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_127 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_128 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_hypot_129 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_double);
}
static void
test_hypot_130 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_131 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = hypot (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_hypot_132 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = hypot (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_hypot_133 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_hypot_134 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_char);
}
static void
test_hypot_135 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_signed_char);
}
static void
test_hypot_136 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_hypot_137 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_short_int);
}
static void
test_hypot_138 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_hypot_139 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_int);
}
static void
test_hypot_140 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_hypot_141 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_long_int);
}
static void
test_hypot_142 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_hypot_143 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_long_long_int);
}
static void
test_hypot_144 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_145 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_146 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_147 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_enum_e);
}
static void
test_hypot_148 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var__Bool);
}
static void
test_hypot_149 (void)
{
  extern typeof (hypot (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_hypot_150 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_151 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_hypot_152 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_hypot_153 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_154 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_155 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = hypot (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_156 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_hypot_157 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_hypot_158 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_159 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_160 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_161 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_162 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_163 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_164 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_165 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_166 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_167 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_168 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_169 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_hypot_170 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_hypot_171 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_172 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_173 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_hypot_174 (void)
{
  extern typeof (hypot (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_hypot_175 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_176 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_hypot_177 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_hypot_178 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_179 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_hypot_180 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = hypot (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_hypot_181 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_182 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_hypot_183 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_184 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_185 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_186 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_187 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_188 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_189 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_190 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_191 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_192 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_193 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_194 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_hypot_195 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_hypot_196 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_197 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_198 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_199 (void)
{
  extern typeof (hypot (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_hypot_200 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_201 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_hypot_202 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_hypot_203 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_204 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_hypot_205 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_hypot_206 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_hypot_207 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_208 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_209 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_210 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_211 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_212 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_213 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_214 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_215 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_216 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_217 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_218 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_219 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_hypot_220 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_hypot_221 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_222 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_223 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_224 (void)
{
  extern typeof (hypot (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_225 (void)
{
  extern typeof (hypot (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var__Float16);
}
#endif
static void
test_hypot_226 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_227 (void)
{
  extern typeof (hypot (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_228 (void)
{
  extern typeof (hypot (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_hypot_229 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_double);
}
static void
test_hypot_230 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_231 (void)
{
  extern typeof (hypot (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_232 (void)
{
  extern typeof (hypot (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_233 (void)
{
  extern typeof (hypot (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_char, vol_var__Float128);
}
#endif
static void
test_hypot_234 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_char);
}
static void
test_hypot_235 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_signed_char);
}
static void
test_hypot_236 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_unsigned_char);
}
static void
test_hypot_237 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_short_int);
}
static void
test_hypot_238 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_hypot_239 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_int);
}
static void
test_hypot_240 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_unsigned_int);
}
static void
test_hypot_241 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_long_int);
}
static void
test_hypot_242 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_hypot_243 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_long_long_int);
}
static void
test_hypot_244 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_245 (void)
{
  extern typeof (hypot (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_246 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_247 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_enum_e);
}
static void
test_hypot_248 (void)
{
  extern typeof (hypot (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var__Bool);
}
static void
test_hypot_249 (void)
{
  extern typeof (hypot (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_250 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_hypot_251 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_252 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_253 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_hypot_254 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_double);
}
static void
test_hypot_255 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_256 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_257 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_258 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_hypot_259 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_char);
}
static void
test_hypot_260 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_signed_char);
}
static void
test_hypot_261 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_hypot_262 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_short_int);
}
static void
test_hypot_263 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_hypot_264 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_int);
}
static void
test_hypot_265 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_hypot_266 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_long_int);
}
static void
test_hypot_267 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_hypot_268 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_hypot_269 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_270 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_271 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_272 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_enum_e);
}
static void
test_hypot_273 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var__Bool);
}
static void
test_hypot_274 (void)
{
  extern typeof (hypot (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_275 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_hypot_276 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_277 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_278 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_hypot_279 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_double);
}
static void
test_hypot_280 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_281 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_282 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_283 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_hypot_284 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_char);
}
static void
test_hypot_285 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_hypot_286 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_hypot_287 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_hypot_288 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_hypot_289 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_int);
}
static void
test_hypot_290 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_hypot_291 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_hypot_292 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_hypot_293 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_hypot_294 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_295 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_296 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_297 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_hypot_298 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_hypot_299 (void)
{
  extern typeof (hypot (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_300 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_hypot_301 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_302 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_303 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_hypot_304 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_double);
}
static void
test_hypot_305 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_306 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_307 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_308 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_hypot_309 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_char);
}
static void
test_hypot_310 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_signed_char);
}
static void
test_hypot_311 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_hypot_312 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_short_int);
}
static void
test_hypot_313 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_hypot_314 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_int);
}
static void
test_hypot_315 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_hypot_316 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_long_int);
}
static void
test_hypot_317 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_hypot_318 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_long_long_int);
}
static void
test_hypot_319 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_320 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_321 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_322 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_enum_e);
}
static void
test_hypot_323 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var__Bool);
}
static void
test_hypot_324 (void)
{
  extern typeof (hypot (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_325 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_hypot_326 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_327 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_328 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_hypot_329 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_hypot_330 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_331 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_332 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_333 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_hypot_334 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_hypot_335 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_hypot_336 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_hypot_337 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_hypot_338 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_hypot_339 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_hypot_340 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_hypot_341 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_hypot_342 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_hypot_343 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_hypot_344 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_345 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_346 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_347 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_hypot_348 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_hypot_349 (void)
{
  extern typeof (hypot (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_350 (void)
{
  extern typeof (hypot (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var__Float16);
}
#endif
static void
test_hypot_351 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_352 (void)
{
  extern typeof (hypot (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_353 (void)
{
  extern typeof (hypot (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_hypot_354 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_double);
}
static void
test_hypot_355 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_356 (void)
{
  extern typeof (hypot (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_357 (void)
{
  extern typeof (hypot (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_358 (void)
{
  extern typeof (hypot (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_int, vol_var__Float128);
}
#endif
static void
test_hypot_359 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_char);
}
static void
test_hypot_360 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_signed_char);
}
static void
test_hypot_361 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_unsigned_char);
}
static void
test_hypot_362 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_short_int);
}
static void
test_hypot_363 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_hypot_364 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_int);
}
static void
test_hypot_365 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_unsigned_int);
}
static void
test_hypot_366 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_long_int);
}
static void
test_hypot_367 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_hypot_368 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_long_long_int);
}
static void
test_hypot_369 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_370 (void)
{
  extern typeof (hypot (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_371 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_372 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_enum_e);
}
static void
test_hypot_373 (void)
{
  extern typeof (hypot (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var__Bool);
}
static void
test_hypot_374 (void)
{
  extern typeof (hypot (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_375 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_hypot_376 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_377 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_378 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_hypot_379 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_double);
}
static void
test_hypot_380 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_381 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_382 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_383 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_hypot_384 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_char);
}
static void
test_hypot_385 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_hypot_386 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_hypot_387 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_hypot_388 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_hypot_389 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_int);
}
static void
test_hypot_390 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_hypot_391 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_hypot_392 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_hypot_393 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_hypot_394 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_395 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_396 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_397 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_hypot_398 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_hypot_399 (void)
{
  extern typeof (hypot (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_400 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_hypot_401 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_402 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_403 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_hypot_404 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_double);
}
static void
test_hypot_405 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_406 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_407 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_408 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_hypot_409 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_char);
}
static void
test_hypot_410 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_signed_char);
}
static void
test_hypot_411 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_hypot_412 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_short_int);
}
static void
test_hypot_413 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_hypot_414 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_int);
}
static void
test_hypot_415 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_hypot_416 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_long_int);
}
static void
test_hypot_417 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_hypot_418 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_long_long_int);
}
static void
test_hypot_419 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_420 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_421 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_422 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_enum_e);
}
static void
test_hypot_423 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var__Bool);
}
static void
test_hypot_424 (void)
{
  extern typeof (hypot (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_425 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_hypot_426 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_427 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_428 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_hypot_429 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_hypot_430 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_431 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_432 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_433 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_hypot_434 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_hypot_435 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_hypot_436 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_hypot_437 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_hypot_438 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_hypot_439 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_hypot_440 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_hypot_441 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_hypot_442 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_hypot_443 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_hypot_444 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_445 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_446 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_447 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_hypot_448 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_hypot_449 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_450 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_hypot_451 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_452 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_453 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_hypot_454 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_double);
}
static void
test_hypot_455 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_456 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_457 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_458 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_hypot_459 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_char);
}
static void
test_hypot_460 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_hypot_461 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_hypot_462 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_short_int);
}
static void
test_hypot_463 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_hypot_464 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_int);
}
static void
test_hypot_465 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_hypot_466 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_long_int);
}
static void
test_hypot_467 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_hypot_468 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_hypot_469 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_470 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_471 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_472 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_hypot_473 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var__Bool);
}
static void
test_hypot_474 (void)
{
  extern typeof (hypot (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_475 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_hypot_476 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_477 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_478 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_hypot_479 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_hypot_480 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_481 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_482 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_483 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_hypot_484 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_hypot_485 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_hypot_486 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_hypot_487 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_hypot_488 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_hypot_489 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_hypot_490 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_hypot_491 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_hypot_492 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_hypot_493 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_hypot_494 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_495 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_496 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_497 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_hypot_498 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_hypot_499 (void)
{
  extern typeof (hypot (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_hypot_500 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_501 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_hypot_502 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_hypot_503 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_504 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_505 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_hypot_506 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_hypot_507 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_hypot_508 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_509 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_510 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_511 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_512 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_513 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_514 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_515 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_516 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_517 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_518 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_519 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_520 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_521 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_522 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_523 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_524 (void)
{
  extern typeof (hypot (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_hypot_525 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_526 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_hypot_527 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_hypot_528 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_529 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_530 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_hypot_531 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_hypot_532 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_hypot_533 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_534 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_535 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_536 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_537 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_538 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_539 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_540 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_541 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_542 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_543 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_544 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_545 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_546 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_547 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_548 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_549 (void)
{
  extern typeof (hypot (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_hypot_550 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_hypot_551 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_552 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_553 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_hypot_554 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_double);
}
static void
test_hypot_555 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_556 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_557 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_558 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_hypot_559 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_char);
}
static void
test_hypot_560 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_signed_char);
}
static void
test_hypot_561 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_hypot_562 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_short_int);
}
static void
test_hypot_563 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_hypot_564 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_int);
}
static void
test_hypot_565 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_hypot_566 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_long_int);
}
static void
test_hypot_567 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_hypot_568 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_hypot_569 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_570 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_571 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_572 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_enum_e);
}
static void
test_hypot_573 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var__Bool);
}
static void
test_hypot_574 (void)
{
  extern typeof (hypot (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_575 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_hypot_576 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_577 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_578 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_hypot_579 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_double);
}
static void
test_hypot_580 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_581 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_582 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_583 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_hypot_584 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_char);
}
static void
test_hypot_585 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_signed_char);
}
static void
test_hypot_586 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_hypot_587 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_short_int);
}
static void
test_hypot_588 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_hypot_589 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_int);
}
static void
test_hypot_590 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_hypot_591 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_long_int);
}
static void
test_hypot_592 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_hypot_593 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_long_long_int);
}
static void
test_hypot_594 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_595 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_596 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_597 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_enum_e);
}
static void
test_hypot_598 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var__Bool);
}
static void
test_hypot_599 (void)
{
  extern typeof (hypot (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_hypot_600 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_hypot_601 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_hypot_602 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_hypot_603 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_hypot_604 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_double);
}
static void
test_hypot_605 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = hypot (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_hypot_606 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = hypot (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_hypot_607 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = hypot (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_hypot_608 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = hypot (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_hypot_609 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_char);
}
static void
test_hypot_610 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_signed_char);
}
static void
test_hypot_611 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_hypot_612 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_short_int);
}
static void
test_hypot_613 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_hypot_614 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_int);
}
static void
test_hypot_615 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_hypot_616 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_long_int);
}
static void
test_hypot_617 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_hypot_618 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_hypot_619 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_hypot_620 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_hypot_621 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_hypot_622 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_enum_e);
}
static void
test_hypot_623 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var__Bool);
}
static void
test_hypot_624 (void)
{
  extern typeof (hypot (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = hypot (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_hypot_0, "hypot", "hypot (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_1, "hypot", "hypot (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_hypot_2, "hypot", "hypot (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_hypot_3, "hypot", "hypot (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_4, "hypot", "hypot (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_5, "hypot", "hypot (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_hypot_6, "hypot", "hypot (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_hypot_7, "hypot", "hypot (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_hypot_8, "hypot", "hypot (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_9, "hypot", "hypot (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_10, "hypot", "hypot (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_11, "hypot", "hypot (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_12, "hypot", "hypot (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_13, "hypot", "hypot (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_14, "hypot", "hypot (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_15, "hypot", "hypot (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_16, "hypot", "hypot (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_17, "hypot", "hypot (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_18, "hypot", "hypot (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_19, "hypot", "hypot (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_hypot_20, "hypot", "hypot (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_hypot_21, "hypot", "hypot (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_22, "hypot", "hypot (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_23, "hypot", "hypot (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_24, "hypot", "hypot (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_25, "hypot", "hypot (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_hypot_26, "hypot", "hypot (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_27, "hypot", "hypot (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_28, "hypot", "hypot (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_hypot_29, "hypot", "hypot (float, double)", DBL_MANT_DIG, 0 },
    { test_hypot_30, "hypot", "hypot (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_31, "hypot", "hypot (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_32, "hypot", "hypot (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_33, "hypot", "hypot (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_34, "hypot", "hypot (float, char)", DBL_MANT_DIG, 0 },
    { test_hypot_35, "hypot", "hypot (float, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_36, "hypot", "hypot (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_37, "hypot", "hypot (float, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_38, "hypot", "hypot (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_39, "hypot", "hypot (float, int)", DBL_MANT_DIG, 0 },
    { test_hypot_40, "hypot", "hypot (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_41, "hypot", "hypot (float, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_42, "hypot", "hypot (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_43, "hypot", "hypot (float, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_44, "hypot", "hypot (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_45, "hypot", "hypot (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_46, "hypot", "hypot (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_47, "hypot", "hypot (float, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_48, "hypot", "hypot (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_49, "hypot", "hypot (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_hypot_50, "hypot", "hypot (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_51, "hypot", "hypot (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_52, "hypot", "hypot (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_hypot_53, "hypot", "hypot (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_54, "hypot", "hypot (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_55, "hypot", "hypot (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_hypot_56, "hypot", "hypot (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_hypot_57, "hypot", "hypot (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_hypot_58, "hypot", "hypot (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_59, "hypot", "hypot (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_60, "hypot", "hypot (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_61, "hypot", "hypot (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_62, "hypot", "hypot (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_63, "hypot", "hypot (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_64, "hypot", "hypot (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_65, "hypot", "hypot (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_66, "hypot", "hypot (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_67, "hypot", "hypot (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_68, "hypot", "hypot (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_69, "hypot", "hypot (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_hypot_70, "hypot", "hypot (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_hypot_71, "hypot", "hypot (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_72, "hypot", "hypot (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_73, "hypot", "hypot (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_hypot_74, "hypot", "hypot (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_hypot_75, "hypot", "hypot (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_76, "hypot", "hypot (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_hypot_77, "hypot", "hypot (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_78, "hypot", "hypot (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_79, "hypot", "hypot (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_80, "hypot", "hypot (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_hypot_81, "hypot", "hypot (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_hypot_82, "hypot", "hypot (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_hypot_83, "hypot", "hypot (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_84, "hypot", "hypot (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_85, "hypot", "hypot (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_86, "hypot", "hypot (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_87, "hypot", "hypot (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_88, "hypot", "hypot (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_89, "hypot", "hypot (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_90, "hypot", "hypot (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_91, "hypot", "hypot (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_92, "hypot", "hypot (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_93, "hypot", "hypot (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_94, "hypot", "hypot (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_hypot_95, "hypot", "hypot (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_hypot_96, "hypot", "hypot (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_97, "hypot", "hypot (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_98, "hypot", "hypot (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_99, "hypot", "hypot (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_100, "hypot", "hypot (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_101, "hypot", "hypot (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_102, "hypot", "hypot (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_103, "hypot", "hypot (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_104, "hypot", "hypot (double, double)", DBL_MANT_DIG, 0 },
    { test_hypot_105, "hypot", "hypot (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_106, "hypot", "hypot (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_107, "hypot", "hypot (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_108, "hypot", "hypot (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_109, "hypot", "hypot (double, char)", DBL_MANT_DIG, 0 },
    { test_hypot_110, "hypot", "hypot (double, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_111, "hypot", "hypot (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_112, "hypot", "hypot (double, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_113, "hypot", "hypot (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_114, "hypot", "hypot (double, int)", DBL_MANT_DIG, 0 },
    { test_hypot_115, "hypot", "hypot (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_116, "hypot", "hypot (double, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_117, "hypot", "hypot (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_118, "hypot", "hypot (double, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_119, "hypot", "hypot (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_120, "hypot", "hypot (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_121, "hypot", "hypot (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_122, "hypot", "hypot (double, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_123, "hypot", "hypot (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_124, "hypot", "hypot (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_125, "hypot", "hypot (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_hypot_126, "hypot", "hypot (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_127, "hypot", "hypot (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_128, "hypot", "hypot (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_hypot_129, "hypot", "hypot (long double, double)", LDBL_MANT_DIG, 0 },
    { test_hypot_130, "hypot", "hypot (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_131, "hypot", "hypot (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_hypot_132, "hypot", "hypot (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_hypot_133, "hypot", "hypot (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_134, "hypot", "hypot (long double, char)", LDBL_MANT_DIG, 0 },
    { test_hypot_135, "hypot", "hypot (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_hypot_136, "hypot", "hypot (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_hypot_137, "hypot", "hypot (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_hypot_138, "hypot", "hypot (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_hypot_139, "hypot", "hypot (long double, int)", LDBL_MANT_DIG, 0 },
    { test_hypot_140, "hypot", "hypot (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_hypot_141, "hypot", "hypot (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_hypot_142, "hypot", "hypot (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_hypot_143, "hypot", "hypot (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_hypot_144, "hypot", "hypot (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_145, "hypot", "hypot (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_146, "hypot", "hypot (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_hypot_147, "hypot", "hypot (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_hypot_148, "hypot", "hypot (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_hypot_149, "hypot", "hypot (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_hypot_150, "hypot", "hypot (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_151, "hypot", "hypot (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_hypot_152, "hypot", "hypot (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_hypot_153, "hypot", "hypot (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_154, "hypot", "hypot (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_155, "hypot", "hypot (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_156, "hypot", "hypot (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_hypot_157, "hypot", "hypot (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_hypot_158, "hypot", "hypot (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_159, "hypot", "hypot (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_160, "hypot", "hypot (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_161, "hypot", "hypot (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_162, "hypot", "hypot (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_163, "hypot", "hypot (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_164, "hypot", "hypot (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_165, "hypot", "hypot (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_166, "hypot", "hypot (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_167, "hypot", "hypot (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_168, "hypot", "hypot (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_169, "hypot", "hypot (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_hypot_170, "hypot", "hypot (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_hypot_171, "hypot", "hypot (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_172, "hypot", "hypot (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_173, "hypot", "hypot (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_hypot_174, "hypot", "hypot (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_hypot_175, "hypot", "hypot (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_176, "hypot", "hypot (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_hypot_177, "hypot", "hypot (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_hypot_178, "hypot", "hypot (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_179, "hypot", "hypot (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_hypot_180, "hypot", "hypot (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_hypot_181, "hypot", "hypot (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_182, "hypot", "hypot (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_hypot_183, "hypot", "hypot (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_184, "hypot", "hypot (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_185, "hypot", "hypot (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_186, "hypot", "hypot (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_187, "hypot", "hypot (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_188, "hypot", "hypot (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_189, "hypot", "hypot (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_190, "hypot", "hypot (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_191, "hypot", "hypot (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_192, "hypot", "hypot (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_193, "hypot", "hypot (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_194, "hypot", "hypot (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_hypot_195, "hypot", "hypot (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_hypot_196, "hypot", "hypot (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_197, "hypot", "hypot (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_198, "hypot", "hypot (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_199, "hypot", "hypot (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_hypot_200, "hypot", "hypot (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_201, "hypot", "hypot (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_hypot_202, "hypot", "hypot (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_hypot_203, "hypot", "hypot (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_204, "hypot", "hypot (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_hypot_205, "hypot", "hypot (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_hypot_206, "hypot", "hypot (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_hypot_207, "hypot", "hypot (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_208, "hypot", "hypot (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_209, "hypot", "hypot (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_210, "hypot", "hypot (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_211, "hypot", "hypot (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_212, "hypot", "hypot (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_213, "hypot", "hypot (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_214, "hypot", "hypot (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_215, "hypot", "hypot (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_216, "hypot", "hypot (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_217, "hypot", "hypot (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_218, "hypot", "hypot (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_219, "hypot", "hypot (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_hypot_220, "hypot", "hypot (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_hypot_221, "hypot", "hypot (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_222, "hypot", "hypot (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_223, "hypot", "hypot (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_224, "hypot", "hypot (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_225, "hypot", "hypot (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_226, "hypot", "hypot (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_227, "hypot", "hypot (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_228, "hypot", "hypot (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_229, "hypot", "hypot (char, double)", DBL_MANT_DIG, 0 },
    { test_hypot_230, "hypot", "hypot (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_231, "hypot", "hypot (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_232, "hypot", "hypot (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_233, "hypot", "hypot (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_234, "hypot", "hypot (char, char)", DBL_MANT_DIG, 0 },
    { test_hypot_235, "hypot", "hypot (char, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_236, "hypot", "hypot (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_237, "hypot", "hypot (char, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_238, "hypot", "hypot (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_239, "hypot", "hypot (char, int)", DBL_MANT_DIG, 0 },
    { test_hypot_240, "hypot", "hypot (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_241, "hypot", "hypot (char, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_242, "hypot", "hypot (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_243, "hypot", "hypot (char, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_244, "hypot", "hypot (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_245, "hypot", "hypot (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_246, "hypot", "hypot (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_247, "hypot", "hypot (char, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_248, "hypot", "hypot (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_249, "hypot", "hypot (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_250, "hypot", "hypot (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_251, "hypot", "hypot (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_252, "hypot", "hypot (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_253, "hypot", "hypot (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_254, "hypot", "hypot (signed char, double)", DBL_MANT_DIG, 0 },
    { test_hypot_255, "hypot", "hypot (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_256, "hypot", "hypot (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_257, "hypot", "hypot (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_258, "hypot", "hypot (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_259, "hypot", "hypot (signed char, char)", DBL_MANT_DIG, 0 },
    { test_hypot_260, "hypot", "hypot (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_261, "hypot", "hypot (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_262, "hypot", "hypot (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_263, "hypot", "hypot (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_264, "hypot", "hypot (signed char, int)", DBL_MANT_DIG, 0 },
    { test_hypot_265, "hypot", "hypot (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_266, "hypot", "hypot (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_267, "hypot", "hypot (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_268, "hypot", "hypot (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_269, "hypot", "hypot (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_270, "hypot", "hypot (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_271, "hypot", "hypot (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_272, "hypot", "hypot (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_273, "hypot", "hypot (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_274, "hypot", "hypot (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_275, "hypot", "hypot (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_276, "hypot", "hypot (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_277, "hypot", "hypot (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_278, "hypot", "hypot (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_279, "hypot", "hypot (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_hypot_280, "hypot", "hypot (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_281, "hypot", "hypot (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_282, "hypot", "hypot (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_283, "hypot", "hypot (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_284, "hypot", "hypot (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_hypot_285, "hypot", "hypot (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_286, "hypot", "hypot (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_287, "hypot", "hypot (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_288, "hypot", "hypot (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_289, "hypot", "hypot (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_hypot_290, "hypot", "hypot (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_291, "hypot", "hypot (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_292, "hypot", "hypot (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_293, "hypot", "hypot (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_294, "hypot", "hypot (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_295, "hypot", "hypot (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_296, "hypot", "hypot (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_297, "hypot", "hypot (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_298, "hypot", "hypot (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_299, "hypot", "hypot (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_300, "hypot", "hypot (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_301, "hypot", "hypot (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_302, "hypot", "hypot (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_303, "hypot", "hypot (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_304, "hypot", "hypot (short int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_305, "hypot", "hypot (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_306, "hypot", "hypot (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_307, "hypot", "hypot (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_308, "hypot", "hypot (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_309, "hypot", "hypot (short int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_310, "hypot", "hypot (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_311, "hypot", "hypot (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_312, "hypot", "hypot (short int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_313, "hypot", "hypot (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_314, "hypot", "hypot (short int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_315, "hypot", "hypot (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_316, "hypot", "hypot (short int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_317, "hypot", "hypot (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_318, "hypot", "hypot (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_319, "hypot", "hypot (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_320, "hypot", "hypot (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_321, "hypot", "hypot (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_322, "hypot", "hypot (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_323, "hypot", "hypot (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_324, "hypot", "hypot (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_325, "hypot", "hypot (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_326, "hypot", "hypot (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_327, "hypot", "hypot (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_328, "hypot", "hypot (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_329, "hypot", "hypot (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_330, "hypot", "hypot (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_331, "hypot", "hypot (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_332, "hypot", "hypot (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_333, "hypot", "hypot (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_334, "hypot", "hypot (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_335, "hypot", "hypot (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_336, "hypot", "hypot (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_337, "hypot", "hypot (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_338, "hypot", "hypot (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_339, "hypot", "hypot (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_340, "hypot", "hypot (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_341, "hypot", "hypot (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_342, "hypot", "hypot (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_343, "hypot", "hypot (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_344, "hypot", "hypot (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_345, "hypot", "hypot (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_346, "hypot", "hypot (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_347, "hypot", "hypot (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_348, "hypot", "hypot (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_349, "hypot", "hypot (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_350, "hypot", "hypot (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_351, "hypot", "hypot (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_352, "hypot", "hypot (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_353, "hypot", "hypot (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_354, "hypot", "hypot (int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_355, "hypot", "hypot (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_356, "hypot", "hypot (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_357, "hypot", "hypot (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_358, "hypot", "hypot (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_359, "hypot", "hypot (int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_360, "hypot", "hypot (int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_361, "hypot", "hypot (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_362, "hypot", "hypot (int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_363, "hypot", "hypot (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_364, "hypot", "hypot (int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_365, "hypot", "hypot (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_366, "hypot", "hypot (int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_367, "hypot", "hypot (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_368, "hypot", "hypot (int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_369, "hypot", "hypot (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_370, "hypot", "hypot (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_371, "hypot", "hypot (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_372, "hypot", "hypot (int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_373, "hypot", "hypot (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_374, "hypot", "hypot (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_375, "hypot", "hypot (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_376, "hypot", "hypot (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_377, "hypot", "hypot (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_378, "hypot", "hypot (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_379, "hypot", "hypot (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_380, "hypot", "hypot (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_381, "hypot", "hypot (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_382, "hypot", "hypot (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_383, "hypot", "hypot (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_384, "hypot", "hypot (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_385, "hypot", "hypot (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_386, "hypot", "hypot (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_387, "hypot", "hypot (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_388, "hypot", "hypot (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_389, "hypot", "hypot (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_390, "hypot", "hypot (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_391, "hypot", "hypot (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_392, "hypot", "hypot (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_393, "hypot", "hypot (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_394, "hypot", "hypot (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_395, "hypot", "hypot (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_396, "hypot", "hypot (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_397, "hypot", "hypot (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_398, "hypot", "hypot (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_399, "hypot", "hypot (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_400, "hypot", "hypot (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_401, "hypot", "hypot (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_402, "hypot", "hypot (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_403, "hypot", "hypot (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_404, "hypot", "hypot (long int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_405, "hypot", "hypot (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_406, "hypot", "hypot (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_407, "hypot", "hypot (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_408, "hypot", "hypot (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_409, "hypot", "hypot (long int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_410, "hypot", "hypot (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_411, "hypot", "hypot (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_412, "hypot", "hypot (long int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_413, "hypot", "hypot (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_414, "hypot", "hypot (long int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_415, "hypot", "hypot (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_416, "hypot", "hypot (long int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_417, "hypot", "hypot (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_418, "hypot", "hypot (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_419, "hypot", "hypot (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_420, "hypot", "hypot (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_421, "hypot", "hypot (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_422, "hypot", "hypot (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_423, "hypot", "hypot (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_424, "hypot", "hypot (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_425, "hypot", "hypot (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_426, "hypot", "hypot (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_427, "hypot", "hypot (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_428, "hypot", "hypot (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_429, "hypot", "hypot (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_430, "hypot", "hypot (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_431, "hypot", "hypot (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_432, "hypot", "hypot (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_433, "hypot", "hypot (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_434, "hypot", "hypot (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_435, "hypot", "hypot (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_436, "hypot", "hypot (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_437, "hypot", "hypot (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_438, "hypot", "hypot (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_439, "hypot", "hypot (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_440, "hypot", "hypot (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_441, "hypot", "hypot (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_442, "hypot", "hypot (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_443, "hypot", "hypot (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_444, "hypot", "hypot (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_445, "hypot", "hypot (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_446, "hypot", "hypot (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_447, "hypot", "hypot (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_448, "hypot", "hypot (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_449, "hypot", "hypot (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_450, "hypot", "hypot (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_451, "hypot", "hypot (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_452, "hypot", "hypot (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_453, "hypot", "hypot (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_454, "hypot", "hypot (long long int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_455, "hypot", "hypot (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_456, "hypot", "hypot (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_457, "hypot", "hypot (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_458, "hypot", "hypot (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_459, "hypot", "hypot (long long int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_460, "hypot", "hypot (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_461, "hypot", "hypot (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_462, "hypot", "hypot (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_463, "hypot", "hypot (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_464, "hypot", "hypot (long long int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_465, "hypot", "hypot (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_466, "hypot", "hypot (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_467, "hypot", "hypot (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_468, "hypot", "hypot (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_469, "hypot", "hypot (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_470, "hypot", "hypot (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_471, "hypot", "hypot (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_472, "hypot", "hypot (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_473, "hypot", "hypot (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_474, "hypot", "hypot (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_475, "hypot", "hypot (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_476, "hypot", "hypot (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_477, "hypot", "hypot (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_478, "hypot", "hypot (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_479, "hypot", "hypot (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_hypot_480, "hypot", "hypot (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_481, "hypot", "hypot (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_482, "hypot", "hypot (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_483, "hypot", "hypot (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_484, "hypot", "hypot (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_hypot_485, "hypot", "hypot (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_486, "hypot", "hypot (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_487, "hypot", "hypot (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_488, "hypot", "hypot (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_489, "hypot", "hypot (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_hypot_490, "hypot", "hypot (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_491, "hypot", "hypot (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_492, "hypot", "hypot (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_493, "hypot", "hypot (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_494, "hypot", "hypot (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_495, "hypot", "hypot (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_496, "hypot", "hypot (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_497, "hypot", "hypot (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_498, "hypot", "hypot (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_499, "hypot", "hypot (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_hypot_500, "hypot", "hypot (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_501, "hypot", "hypot (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_hypot_502, "hypot", "hypot (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_hypot_503, "hypot", "hypot (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_504, "hypot", "hypot (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_505, "hypot", "hypot (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_hypot_506, "hypot", "hypot (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_hypot_507, "hypot", "hypot (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_hypot_508, "hypot", "hypot (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_509, "hypot", "hypot (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_510, "hypot", "hypot (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_511, "hypot", "hypot (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_512, "hypot", "hypot (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_513, "hypot", "hypot (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_514, "hypot", "hypot (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_515, "hypot", "hypot (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_516, "hypot", "hypot (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_517, "hypot", "hypot (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_518, "hypot", "hypot (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_519, "hypot", "hypot (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_520, "hypot", "hypot (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_521, "hypot", "hypot (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_522, "hypot", "hypot (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_523, "hypot", "hypot (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_524, "hypot", "hypot (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_hypot_525, "hypot", "hypot (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_526, "hypot", "hypot (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_hypot_527, "hypot", "hypot (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_hypot_528, "hypot", "hypot (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_529, "hypot", "hypot (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_530, "hypot", "hypot (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_hypot_531, "hypot", "hypot (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_hypot_532, "hypot", "hypot (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_hypot_533, "hypot", "hypot (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_534, "hypot", "hypot (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_535, "hypot", "hypot (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_536, "hypot", "hypot (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_537, "hypot", "hypot (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_538, "hypot", "hypot (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_539, "hypot", "hypot (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_540, "hypot", "hypot (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_541, "hypot", "hypot (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_542, "hypot", "hypot (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_543, "hypot", "hypot (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_544, "hypot", "hypot (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_545, "hypot", "hypot (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_546, "hypot", "hypot (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_547, "hypot", "hypot (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_548, "hypot", "hypot (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_549, "hypot", "hypot (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_hypot_550, "hypot", "hypot (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_551, "hypot", "hypot (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_552, "hypot", "hypot (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_553, "hypot", "hypot (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_554, "hypot", "hypot (enum e, double)", DBL_MANT_DIG, 0 },
    { test_hypot_555, "hypot", "hypot (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_556, "hypot", "hypot (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_557, "hypot", "hypot (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_558, "hypot", "hypot (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_559, "hypot", "hypot (enum e, char)", DBL_MANT_DIG, 0 },
    { test_hypot_560, "hypot", "hypot (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_561, "hypot", "hypot (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_562, "hypot", "hypot (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_563, "hypot", "hypot (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_564, "hypot", "hypot (enum e, int)", DBL_MANT_DIG, 0 },
    { test_hypot_565, "hypot", "hypot (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_566, "hypot", "hypot (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_567, "hypot", "hypot (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_568, "hypot", "hypot (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_569, "hypot", "hypot (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_570, "hypot", "hypot (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_571, "hypot", "hypot (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_572, "hypot", "hypot (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_573, "hypot", "hypot (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_574, "hypot", "hypot (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_575, "hypot", "hypot (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_576, "hypot", "hypot (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_577, "hypot", "hypot (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_578, "hypot", "hypot (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_579, "hypot", "hypot (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_hypot_580, "hypot", "hypot (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_581, "hypot", "hypot (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_582, "hypot", "hypot (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_583, "hypot", "hypot (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_584, "hypot", "hypot (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_hypot_585, "hypot", "hypot (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_586, "hypot", "hypot (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_587, "hypot", "hypot (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_588, "hypot", "hypot (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_589, "hypot", "hypot (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_hypot_590, "hypot", "hypot (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_591, "hypot", "hypot (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_592, "hypot", "hypot (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_593, "hypot", "hypot (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_594, "hypot", "hypot (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_595, "hypot", "hypot (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_596, "hypot", "hypot (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_597, "hypot", "hypot (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_598, "hypot", "hypot (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_599, "hypot", "hypot (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_hypot_600, "hypot", "hypot (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_601, "hypot", "hypot (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_hypot_602, "hypot", "hypot (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_hypot_603, "hypot", "hypot (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_604, "hypot", "hypot (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_hypot_605, "hypot", "hypot (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_hypot_606, "hypot", "hypot (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_hypot_607, "hypot", "hypot (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_hypot_608, "hypot", "hypot (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_hypot_609, "hypot", "hypot (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_hypot_610, "hypot", "hypot (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_hypot_611, "hypot", "hypot (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_hypot_612, "hypot", "hypot (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_hypot_613, "hypot", "hypot (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_hypot_614, "hypot", "hypot (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_hypot_615, "hypot", "hypot (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_hypot_616, "hypot", "hypot (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_hypot_617, "hypot", "hypot (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_hypot_618, "hypot", "hypot (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_hypot_619, "hypot", "hypot (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_hypot_620, "hypot", "hypot (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_hypot_621, "hypot", "hypot (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_hypot_622, "hypot", "hypot (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_hypot_623, "hypot", "hypot (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_hypot_624, "hypot", "hypot (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
