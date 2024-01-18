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
float
(scalbf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "scalb";
  return 0;
}
double
(scalb) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "scalb";
  return 0;
}
long double
(scalbl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "scalb";
  return 0;
}
static void
test_scalb_0 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = scalb (vol_var_float, vol_var_float);
}
static void
test_scalb_1 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_double);
}
static void
test_scalb_2 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_float, vol_var_long_double);
}
static void
test_scalb_3 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_char);
}
static void
test_scalb_4 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_signed_char);
}
static void
test_scalb_5 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_unsigned_char);
}
static void
test_scalb_6 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_short_int);
}
static void
test_scalb_7 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_scalb_8 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_int);
}
static void
test_scalb_9 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_unsigned_int);
}
static void
test_scalb_10 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_long_int);
}
static void
test_scalb_11 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_scalb_12 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_long_long_int);
}
static void
test_scalb_13 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_14 (void)
{
  extern typeof (scalb (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_15 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_16 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_enum_e);
}
static void
test_scalb_17 (void)
{
  extern typeof (scalb (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var__Bool);
}
static void
test_scalb_18 (void)
{
  extern typeof (scalb (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_float, vol_var_bit_field);
}
static void
test_scalb_19 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_float);
}
static void
test_scalb_20 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_double);
}
static void
test_scalb_21 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_double, vol_var_long_double);
}
static void
test_scalb_22 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_char);
}
static void
test_scalb_23 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_signed_char);
}
static void
test_scalb_24 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_unsigned_char);
}
static void
test_scalb_25 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_short_int);
}
static void
test_scalb_26 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_scalb_27 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_int);
}
static void
test_scalb_28 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_unsigned_int);
}
static void
test_scalb_29 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_long_int);
}
static void
test_scalb_30 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_scalb_31 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_long_long_int);
}
static void
test_scalb_32 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_33 (void)
{
  extern typeof (scalb (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_34 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_35 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_enum_e);
}
static void
test_scalb_36 (void)
{
  extern typeof (scalb (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var__Bool);
}
static void
test_scalb_37 (void)
{
  extern typeof (scalb (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_double, vol_var_bit_field);
}
static void
test_scalb_38 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_float);
}
static void
test_scalb_39 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_double);
}
static void
test_scalb_40 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_long_double);
}
static void
test_scalb_41 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_char);
}
static void
test_scalb_42 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_signed_char);
}
static void
test_scalb_43 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_scalb_44 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_short_int);
}
static void
test_scalb_45 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_scalb_46 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_int);
}
static void
test_scalb_47 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_scalb_48 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_long_int);
}
static void
test_scalb_49 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_scalb_50 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_long_long_int);
}
static void
test_scalb_51 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_52 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_53 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_54 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_enum_e);
}
static void
test_scalb_55 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var__Bool);
}
static void
test_scalb_56 (void)
{
  extern typeof (scalb (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_double, vol_var_bit_field);
}
static void
test_scalb_57 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_float);
}
static void
test_scalb_58 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_double);
}
static void
test_scalb_59 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_char, vol_var_long_double);
}
static void
test_scalb_60 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_char);
}
static void
test_scalb_61 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_signed_char);
}
static void
test_scalb_62 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_unsigned_char);
}
static void
test_scalb_63 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_short_int);
}
static void
test_scalb_64 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_scalb_65 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_int);
}
static void
test_scalb_66 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_unsigned_int);
}
static void
test_scalb_67 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_long_int);
}
static void
test_scalb_68 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_scalb_69 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_long_long_int);
}
static void
test_scalb_70 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_71 (void)
{
  extern typeof (scalb (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_72 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_73 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_enum_e);
}
static void
test_scalb_74 (void)
{
  extern typeof (scalb (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var__Bool);
}
static void
test_scalb_75 (void)
{
  extern typeof (scalb (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_char, vol_var_bit_field);
}
static void
test_scalb_76 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_float);
}
static void
test_scalb_77 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_double);
}
static void
test_scalb_78 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_signed_char, vol_var_long_double);
}
static void
test_scalb_79 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_char);
}
static void
test_scalb_80 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_signed_char);
}
static void
test_scalb_81 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_scalb_82 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_short_int);
}
static void
test_scalb_83 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_scalb_84 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_int);
}
static void
test_scalb_85 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_scalb_86 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_long_int);
}
static void
test_scalb_87 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_scalb_88 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_scalb_89 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_90 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_91 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_92 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_enum_e);
}
static void
test_scalb_93 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var__Bool);
}
static void
test_scalb_94 (void)
{
  extern typeof (scalb (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_signed_char, vol_var_bit_field);
}
static void
test_scalb_95 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_float);
}
static void
test_scalb_96 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_double);
}
static void
test_scalb_97 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_scalb_98 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_char);
}
static void
test_scalb_99 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_scalb_100 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_scalb_101 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_scalb_102 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_scalb_103 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_int);
}
static void
test_scalb_104 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_scalb_105 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_scalb_106 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_scalb_107 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_scalb_108 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_109 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_110 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_111 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_scalb_112 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_scalb_113 (void)
{
  extern typeof (scalb (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_scalb_114 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_float);
}
static void
test_scalb_115 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_double);
}
static void
test_scalb_116 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_short_int, vol_var_long_double);
}
static void
test_scalb_117 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_char);
}
static void
test_scalb_118 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_signed_char);
}
static void
test_scalb_119 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_scalb_120 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_short_int);
}
static void
test_scalb_121 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_scalb_122 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_int);
}
static void
test_scalb_123 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_scalb_124 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_long_int);
}
static void
test_scalb_125 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_scalb_126 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_long_long_int);
}
static void
test_scalb_127 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_128 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_129 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_130 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_enum_e);
}
static void
test_scalb_131 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var__Bool);
}
static void
test_scalb_132 (void)
{
  extern typeof (scalb (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_short_int, vol_var_bit_field);
}
static void
test_scalb_133 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_scalb_134 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_scalb_135 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_scalb_136 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_scalb_137 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_scalb_138 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_scalb_139 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_scalb_140 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_scalb_141 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_scalb_142 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_scalb_143 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_scalb_144 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_scalb_145 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_scalb_146 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_147 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_148 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_149 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_scalb_150 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_scalb_151 (void)
{
  extern typeof (scalb (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_scalb_152 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_float);
}
static void
test_scalb_153 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_double);
}
static void
test_scalb_154 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_int, vol_var_long_double);
}
static void
test_scalb_155 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_char);
}
static void
test_scalb_156 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_signed_char);
}
static void
test_scalb_157 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_unsigned_char);
}
static void
test_scalb_158 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_short_int);
}
static void
test_scalb_159 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_scalb_160 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_int);
}
static void
test_scalb_161 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_unsigned_int);
}
static void
test_scalb_162 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_long_int);
}
static void
test_scalb_163 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_scalb_164 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_long_long_int);
}
static void
test_scalb_165 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_166 (void)
{
  extern typeof (scalb (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_167 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_168 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_enum_e);
}
static void
test_scalb_169 (void)
{
  extern typeof (scalb (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var__Bool);
}
static void
test_scalb_170 (void)
{
  extern typeof (scalb (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_int, vol_var_bit_field);
}
static void
test_scalb_171 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_float);
}
static void
test_scalb_172 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_double);
}
static void
test_scalb_173 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_scalb_174 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_char);
}
static void
test_scalb_175 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_scalb_176 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_scalb_177 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_scalb_178 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_scalb_179 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_int);
}
static void
test_scalb_180 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_scalb_181 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_scalb_182 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_scalb_183 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_scalb_184 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_185 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_186 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_187 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_scalb_188 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_scalb_189 (void)
{
  extern typeof (scalb (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_scalb_190 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_float);
}
static void
test_scalb_191 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_double);
}
static void
test_scalb_192 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_int, vol_var_long_double);
}
static void
test_scalb_193 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_char);
}
static void
test_scalb_194 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_signed_char);
}
static void
test_scalb_195 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_scalb_196 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_short_int);
}
static void
test_scalb_197 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_scalb_198 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_int);
}
static void
test_scalb_199 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_scalb_200 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_long_int);
}
static void
test_scalb_201 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_scalb_202 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_long_long_int);
}
static void
test_scalb_203 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_204 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_205 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_206 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_enum_e);
}
static void
test_scalb_207 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var__Bool);
}
static void
test_scalb_208 (void)
{
  extern typeof (scalb (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_int, vol_var_bit_field);
}
static void
test_scalb_209 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_scalb_210 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_scalb_211 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_scalb_212 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_scalb_213 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_scalb_214 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_scalb_215 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_scalb_216 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_scalb_217 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_scalb_218 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_scalb_219 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_scalb_220 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_scalb_221 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_scalb_222 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_223 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_224 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_225 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_scalb_226 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_scalb_227 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_scalb_228 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_float);
}
static void
test_scalb_229 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_double);
}
static void
test_scalb_230 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_long_long_int, vol_var_long_double);
}
static void
test_scalb_231 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_char);
}
static void
test_scalb_232 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_scalb_233 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_scalb_234 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_short_int);
}
static void
test_scalb_235 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_scalb_236 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_int);
}
static void
test_scalb_237 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_scalb_238 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_long_int);
}
static void
test_scalb_239 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_scalb_240 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_scalb_241 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_242 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_243 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_244 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_scalb_245 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var__Bool);
}
static void
test_scalb_246 (void)
{
  extern typeof (scalb (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_scalb_247 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_scalb_248 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_scalb_249 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_scalb_250 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_scalb_251 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_scalb_252 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_scalb_253 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_scalb_254 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_scalb_255 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_scalb_256 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_scalb_257 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_scalb_258 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_scalb_259 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_scalb_260 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_261 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_262 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_263 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_scalb_264 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_scalb_265 (void)
{
  extern typeof (scalb (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_266 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_267 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_268 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_269 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_270 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_271 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_272 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_273 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_274 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_275 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_276 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_277 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_278 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_279 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_280 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_281 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_282 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_283 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_284 (void)
{
  extern typeof (scalb (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_285 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_286 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_287 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_288 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_289 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_290 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_291 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_292 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_293 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_294 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_295 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_296 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_297 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_298 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_299 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_300 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_301 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_302 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_303 (void)
{
  extern typeof (scalb (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_scalb_304 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_float);
}
static void
test_scalb_305 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_double);
}
static void
test_scalb_306 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_enum_e, vol_var_long_double);
}
static void
test_scalb_307 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_char);
}
static void
test_scalb_308 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_signed_char);
}
static void
test_scalb_309 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_scalb_310 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_short_int);
}
static void
test_scalb_311 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_scalb_312 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_int);
}
static void
test_scalb_313 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_scalb_314 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_long_int);
}
static void
test_scalb_315 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_scalb_316 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_scalb_317 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_318 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_319 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_320 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_enum_e);
}
static void
test_scalb_321 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var__Bool);
}
static void
test_scalb_322 (void)
{
  extern typeof (scalb (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_enum_e, vol_var_bit_field);
}
static void
test_scalb_323 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_float);
}
static void
test_scalb_324 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_double);
}
static void
test_scalb_325 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var__Bool, vol_var_long_double);
}
static void
test_scalb_326 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_char);
}
static void
test_scalb_327 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_signed_char);
}
static void
test_scalb_328 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_scalb_329 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_short_int);
}
static void
test_scalb_330 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_scalb_331 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_int);
}
static void
test_scalb_332 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_scalb_333 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_long_int);
}
static void
test_scalb_334 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_scalb_335 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_long_long_int);
}
static void
test_scalb_336 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_337 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_338 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_339 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_enum_e);
}
static void
test_scalb_340 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var__Bool);
}
static void
test_scalb_341 (void)
{
  extern typeof (scalb (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var__Bool, vol_var_bit_field);
}
static void
test_scalb_342 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_float);
}
static void
test_scalb_343 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_double);
}
static void
test_scalb_344 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = scalb (vol_var_bit_field, vol_var_long_double);
}
static void
test_scalb_345 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_char);
}
static void
test_scalb_346 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_signed_char);
}
static void
test_scalb_347 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_scalb_348 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_short_int);
}
static void
test_scalb_349 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_scalb_350 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_int);
}
static void
test_scalb_351 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_scalb_352 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_long_int);
}
static void
test_scalb_353 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_scalb_354 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_scalb_355 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_scalb_356 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_scalb_357 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_scalb_358 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_enum_e);
}
static void
test_scalb_359 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var__Bool);
}
static void
test_scalb_360 (void)
{
  extern typeof (scalb (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = scalb (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_scalb_0, "scalb", "scalb (float, float)", FLT_MANT_DIG, 0 },
    { test_scalb_1, "scalb", "scalb (float, double)", DBL_MANT_DIG, 0 },
    { test_scalb_2, "scalb", "scalb (float, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_3, "scalb", "scalb (float, char)", DBL_MANT_DIG, 0 },
    { test_scalb_4, "scalb", "scalb (float, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_5, "scalb", "scalb (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_6, "scalb", "scalb (float, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_7, "scalb", "scalb (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_8, "scalb", "scalb (float, int)", DBL_MANT_DIG, 0 },
    { test_scalb_9, "scalb", "scalb (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_10, "scalb", "scalb (float, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_11, "scalb", "scalb (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_12, "scalb", "scalb (float, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_13, "scalb", "scalb (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_14, "scalb", "scalb (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_15, "scalb", "scalb (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_16, "scalb", "scalb (float, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_17, "scalb", "scalb (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_18, "scalb", "scalb (float, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_19, "scalb", "scalb (double, float)", DBL_MANT_DIG, 0 },
    { test_scalb_20, "scalb", "scalb (double, double)", DBL_MANT_DIG, 0 },
    { test_scalb_21, "scalb", "scalb (double, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_22, "scalb", "scalb (double, char)", DBL_MANT_DIG, 0 },
    { test_scalb_23, "scalb", "scalb (double, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_24, "scalb", "scalb (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_25, "scalb", "scalb (double, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_26, "scalb", "scalb (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_27, "scalb", "scalb (double, int)", DBL_MANT_DIG, 0 },
    { test_scalb_28, "scalb", "scalb (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_29, "scalb", "scalb (double, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_30, "scalb", "scalb (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_31, "scalb", "scalb (double, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_32, "scalb", "scalb (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_33, "scalb", "scalb (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_34, "scalb", "scalb (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_35, "scalb", "scalb (double, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_36, "scalb", "scalb (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_37, "scalb", "scalb (double, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_38, "scalb", "scalb (long double, float)", LDBL_MANT_DIG, 0 },
    { test_scalb_39, "scalb", "scalb (long double, double)", LDBL_MANT_DIG, 0 },
    { test_scalb_40, "scalb", "scalb (long double, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_41, "scalb", "scalb (long double, char)", LDBL_MANT_DIG, 0 },
    { test_scalb_42, "scalb", "scalb (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_scalb_43, "scalb", "scalb (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_scalb_44, "scalb", "scalb (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_scalb_45, "scalb", "scalb (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_scalb_46, "scalb", "scalb (long double, int)", LDBL_MANT_DIG, 0 },
    { test_scalb_47, "scalb", "scalb (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_scalb_48, "scalb", "scalb (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_scalb_49, "scalb", "scalb (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_scalb_50, "scalb", "scalb (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_scalb_51, "scalb", "scalb (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_52, "scalb", "scalb (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_53, "scalb", "scalb (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_scalb_54, "scalb", "scalb (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_scalb_55, "scalb", "scalb (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_scalb_56, "scalb", "scalb (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_scalb_57, "scalb", "scalb (char, float)", DBL_MANT_DIG, 0 },
    { test_scalb_58, "scalb", "scalb (char, double)", DBL_MANT_DIG, 0 },
    { test_scalb_59, "scalb", "scalb (char, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_60, "scalb", "scalb (char, char)", DBL_MANT_DIG, 0 },
    { test_scalb_61, "scalb", "scalb (char, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_62, "scalb", "scalb (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_63, "scalb", "scalb (char, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_64, "scalb", "scalb (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_65, "scalb", "scalb (char, int)", DBL_MANT_DIG, 0 },
    { test_scalb_66, "scalb", "scalb (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_67, "scalb", "scalb (char, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_68, "scalb", "scalb (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_69, "scalb", "scalb (char, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_70, "scalb", "scalb (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_71, "scalb", "scalb (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_72, "scalb", "scalb (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_73, "scalb", "scalb (char, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_74, "scalb", "scalb (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_75, "scalb", "scalb (char, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_76, "scalb", "scalb (signed char, float)", DBL_MANT_DIG, 0 },
    { test_scalb_77, "scalb", "scalb (signed char, double)", DBL_MANT_DIG, 0 },
    { test_scalb_78, "scalb", "scalb (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_79, "scalb", "scalb (signed char, char)", DBL_MANT_DIG, 0 },
    { test_scalb_80, "scalb", "scalb (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_81, "scalb", "scalb (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_82, "scalb", "scalb (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_83, "scalb", "scalb (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_84, "scalb", "scalb (signed char, int)", DBL_MANT_DIG, 0 },
    { test_scalb_85, "scalb", "scalb (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_86, "scalb", "scalb (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_87, "scalb", "scalb (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_88, "scalb", "scalb (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_89, "scalb", "scalb (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_90, "scalb", "scalb (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_91, "scalb", "scalb (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_92, "scalb", "scalb (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_93, "scalb", "scalb (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_94, "scalb", "scalb (signed char, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_95, "scalb", "scalb (unsigned char, float)", DBL_MANT_DIG, 0 },
    { test_scalb_96, "scalb", "scalb (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_scalb_97, "scalb", "scalb (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_98, "scalb", "scalb (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_scalb_99, "scalb", "scalb (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_100, "scalb", "scalb (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_101, "scalb", "scalb (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_102, "scalb", "scalb (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_103, "scalb", "scalb (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_scalb_104, "scalb", "scalb (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_105, "scalb", "scalb (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_106, "scalb", "scalb (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_107, "scalb", "scalb (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_108, "scalb", "scalb (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_109, "scalb", "scalb (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_110, "scalb", "scalb (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_111, "scalb", "scalb (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_112, "scalb", "scalb (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_113, "scalb", "scalb (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_114, "scalb", "scalb (short int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_115, "scalb", "scalb (short int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_116, "scalb", "scalb (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_117, "scalb", "scalb (short int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_118, "scalb", "scalb (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_119, "scalb", "scalb (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_120, "scalb", "scalb (short int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_121, "scalb", "scalb (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_122, "scalb", "scalb (short int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_123, "scalb", "scalb (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_124, "scalb", "scalb (short int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_125, "scalb", "scalb (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_126, "scalb", "scalb (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_127, "scalb", "scalb (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_128, "scalb", "scalb (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_129, "scalb", "scalb (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_130, "scalb", "scalb (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_131, "scalb", "scalb (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_132, "scalb", "scalb (short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_133, "scalb", "scalb (unsigned short int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_134, "scalb", "scalb (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_135, "scalb", "scalb (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_136, "scalb", "scalb (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_137, "scalb", "scalb (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_138, "scalb", "scalb (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_139, "scalb", "scalb (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_140, "scalb", "scalb (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_141, "scalb", "scalb (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_142, "scalb", "scalb (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_143, "scalb", "scalb (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_144, "scalb", "scalb (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_145, "scalb", "scalb (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_146, "scalb", "scalb (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_147, "scalb", "scalb (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_148, "scalb", "scalb (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_149, "scalb", "scalb (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_150, "scalb", "scalb (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_151, "scalb", "scalb (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_152, "scalb", "scalb (int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_153, "scalb", "scalb (int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_154, "scalb", "scalb (int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_155, "scalb", "scalb (int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_156, "scalb", "scalb (int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_157, "scalb", "scalb (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_158, "scalb", "scalb (int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_159, "scalb", "scalb (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_160, "scalb", "scalb (int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_161, "scalb", "scalb (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_162, "scalb", "scalb (int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_163, "scalb", "scalb (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_164, "scalb", "scalb (int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_165, "scalb", "scalb (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_166, "scalb", "scalb (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_167, "scalb", "scalb (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_168, "scalb", "scalb (int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_169, "scalb", "scalb (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_170, "scalb", "scalb (int, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_171, "scalb", "scalb (unsigned int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_172, "scalb", "scalb (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_173, "scalb", "scalb (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_174, "scalb", "scalb (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_175, "scalb", "scalb (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_176, "scalb", "scalb (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_177, "scalb", "scalb (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_178, "scalb", "scalb (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_179, "scalb", "scalb (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_180, "scalb", "scalb (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_181, "scalb", "scalb (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_182, "scalb", "scalb (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_183, "scalb", "scalb (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_184, "scalb", "scalb (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_185, "scalb", "scalb (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_186, "scalb", "scalb (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_187, "scalb", "scalb (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_188, "scalb", "scalb (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_189, "scalb", "scalb (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_190, "scalb", "scalb (long int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_191, "scalb", "scalb (long int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_192, "scalb", "scalb (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_193, "scalb", "scalb (long int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_194, "scalb", "scalb (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_195, "scalb", "scalb (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_196, "scalb", "scalb (long int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_197, "scalb", "scalb (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_198, "scalb", "scalb (long int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_199, "scalb", "scalb (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_200, "scalb", "scalb (long int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_201, "scalb", "scalb (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_202, "scalb", "scalb (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_203, "scalb", "scalb (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_204, "scalb", "scalb (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_205, "scalb", "scalb (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_206, "scalb", "scalb (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_207, "scalb", "scalb (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_208, "scalb", "scalb (long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_209, "scalb", "scalb (unsigned long int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_210, "scalb", "scalb (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_211, "scalb", "scalb (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_212, "scalb", "scalb (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_213, "scalb", "scalb (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_214, "scalb", "scalb (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_215, "scalb", "scalb (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_216, "scalb", "scalb (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_217, "scalb", "scalb (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_218, "scalb", "scalb (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_219, "scalb", "scalb (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_220, "scalb", "scalb (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_221, "scalb", "scalb (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_222, "scalb", "scalb (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_223, "scalb", "scalb (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_224, "scalb", "scalb (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_225, "scalb", "scalb (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_226, "scalb", "scalb (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_227, "scalb", "scalb (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_228, "scalb", "scalb (long long int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_229, "scalb", "scalb (long long int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_230, "scalb", "scalb (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_231, "scalb", "scalb (long long int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_232, "scalb", "scalb (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_233, "scalb", "scalb (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_234, "scalb", "scalb (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_235, "scalb", "scalb (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_236, "scalb", "scalb (long long int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_237, "scalb", "scalb (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_238, "scalb", "scalb (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_239, "scalb", "scalb (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_240, "scalb", "scalb (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_241, "scalb", "scalb (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_242, "scalb", "scalb (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_243, "scalb", "scalb (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_244, "scalb", "scalb (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_245, "scalb", "scalb (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_246, "scalb", "scalb (long long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_247, "scalb", "scalb (unsigned long long int, float)", DBL_MANT_DIG, 0 },
    { test_scalb_248, "scalb", "scalb (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_scalb_249, "scalb", "scalb (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_250, "scalb", "scalb (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_scalb_251, "scalb", "scalb (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_252, "scalb", "scalb (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_253, "scalb", "scalb (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_254, "scalb", "scalb (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_255, "scalb", "scalb (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_scalb_256, "scalb", "scalb (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_257, "scalb", "scalb (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_258, "scalb", "scalb (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_259, "scalb", "scalb (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_260, "scalb", "scalb (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_261, "scalb", "scalb (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_262, "scalb", "scalb (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_263, "scalb", "scalb (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_264, "scalb", "scalb (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_265, "scalb", "scalb (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_266, "scalb", "scalb (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_267, "scalb", "scalb (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_268, "scalb", "scalb (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_269, "scalb", "scalb (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_270, "scalb", "scalb (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_271, "scalb", "scalb (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_272, "scalb", "scalb (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_273, "scalb", "scalb (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_274, "scalb", "scalb (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_275, "scalb", "scalb (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_276, "scalb", "scalb (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_277, "scalb", "scalb (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_278, "scalb", "scalb (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_279, "scalb", "scalb (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_280, "scalb", "scalb (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_281, "scalb", "scalb (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_282, "scalb", "scalb (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_283, "scalb", "scalb (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_284, "scalb", "scalb (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_285, "scalb", "scalb (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_286, "scalb", "scalb (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_287, "scalb", "scalb (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_288, "scalb", "scalb (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_289, "scalb", "scalb (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_290, "scalb", "scalb (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_291, "scalb", "scalb (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_292, "scalb", "scalb (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_293, "scalb", "scalb (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_294, "scalb", "scalb (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_295, "scalb", "scalb (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_296, "scalb", "scalb (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_297, "scalb", "scalb (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_298, "scalb", "scalb (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_299, "scalb", "scalb (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_300, "scalb", "scalb (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_301, "scalb", "scalb (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_302, "scalb", "scalb (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_303, "scalb", "scalb (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_304, "scalb", "scalb (enum e, float)", DBL_MANT_DIG, 0 },
    { test_scalb_305, "scalb", "scalb (enum e, double)", DBL_MANT_DIG, 0 },
    { test_scalb_306, "scalb", "scalb (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_307, "scalb", "scalb (enum e, char)", DBL_MANT_DIG, 0 },
    { test_scalb_308, "scalb", "scalb (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_309, "scalb", "scalb (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_310, "scalb", "scalb (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_311, "scalb", "scalb (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_312, "scalb", "scalb (enum e, int)", DBL_MANT_DIG, 0 },
    { test_scalb_313, "scalb", "scalb (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_314, "scalb", "scalb (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_315, "scalb", "scalb (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_316, "scalb", "scalb (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_317, "scalb", "scalb (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_318, "scalb", "scalb (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_319, "scalb", "scalb (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_320, "scalb", "scalb (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_321, "scalb", "scalb (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_322, "scalb", "scalb (enum e, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_323, "scalb", "scalb (_Bool, float)", DBL_MANT_DIG, 0 },
    { test_scalb_324, "scalb", "scalb (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_scalb_325, "scalb", "scalb (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_326, "scalb", "scalb (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_scalb_327, "scalb", "scalb (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_328, "scalb", "scalb (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_329, "scalb", "scalb (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_330, "scalb", "scalb (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_331, "scalb", "scalb (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_scalb_332, "scalb", "scalb (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_333, "scalb", "scalb (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_334, "scalb", "scalb (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_335, "scalb", "scalb (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_336, "scalb", "scalb (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_337, "scalb", "scalb (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_338, "scalb", "scalb (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_339, "scalb", "scalb (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_340, "scalb", "scalb (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_341, "scalb", "scalb (_Bool, bit_field)", DBL_MANT_DIG, 0 },
    { test_scalb_342, "scalb", "scalb (bit_field, float)", DBL_MANT_DIG, 0 },
    { test_scalb_343, "scalb", "scalb (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_scalb_344, "scalb", "scalb (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_scalb_345, "scalb", "scalb (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_scalb_346, "scalb", "scalb (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_scalb_347, "scalb", "scalb (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_scalb_348, "scalb", "scalb (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_scalb_349, "scalb", "scalb (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_scalb_350, "scalb", "scalb (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_scalb_351, "scalb", "scalb (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_scalb_352, "scalb", "scalb (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_scalb_353, "scalb", "scalb (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_scalb_354, "scalb", "scalb (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_scalb_355, "scalb", "scalb (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_scalb_356, "scalb", "scalb (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_scalb_357, "scalb", "scalb (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_scalb_358, "scalb", "scalb (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_scalb_359, "scalb", "scalb (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_scalb_360, "scalb", "scalb (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
