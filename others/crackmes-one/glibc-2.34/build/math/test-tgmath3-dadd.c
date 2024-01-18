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
double
(daddl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "dadd";
  return 0;
}
static void
test_dadd_0 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_float);
}
static void
test_dadd_1 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_double);
}
static void
test_dadd_2 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_long_double);
}
static void
test_dadd_3 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_char);
}
static void
test_dadd_4 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_signed_char);
}
static void
test_dadd_5 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_unsigned_char);
}
static void
test_dadd_6 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_short_int);
}
static void
test_dadd_7 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_dadd_8 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_int);
}
static void
test_dadd_9 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_unsigned_int);
}
static void
test_dadd_10 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_long_int);
}
static void
test_dadd_11 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_dadd_12 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_long_long_int);
}
static void
test_dadd_13 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_14 (void)
{
  extern typeof (dadd (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_15 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_16 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_enum_e);
}
static void
test_dadd_17 (void)
{
  extern typeof (dadd (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var__Bool);
}
static void
test_dadd_18 (void)
{
  extern typeof (dadd (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_float, vol_var_bit_field);
}
static void
test_dadd_19 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_float);
}
static void
test_dadd_20 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_double);
}
static void
test_dadd_21 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_long_double);
}
static void
test_dadd_22 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_char);
}
static void
test_dadd_23 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_signed_char);
}
static void
test_dadd_24 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_unsigned_char);
}
static void
test_dadd_25 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_short_int);
}
static void
test_dadd_26 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_dadd_27 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_int);
}
static void
test_dadd_28 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_unsigned_int);
}
static void
test_dadd_29 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_long_int);
}
static void
test_dadd_30 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_dadd_31 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_long_long_int);
}
static void
test_dadd_32 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_33 (void)
{
  extern typeof (dadd (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_34 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_35 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_enum_e);
}
static void
test_dadd_36 (void)
{
  extern typeof (dadd (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var__Bool);
}
static void
test_dadd_37 (void)
{
  extern typeof (dadd (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_double, vol_var_bit_field);
}
static void
test_dadd_38 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_float);
}
static void
test_dadd_39 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_double);
}
static void
test_dadd_40 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_long_double);
}
static void
test_dadd_41 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_char);
}
static void
test_dadd_42 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_signed_char);
}
static void
test_dadd_43 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_dadd_44 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_short_int);
}
static void
test_dadd_45 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_dadd_46 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_int);
}
static void
test_dadd_47 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_dadd_48 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_long_int);
}
static void
test_dadd_49 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_dadd_50 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_long_long_int);
}
static void
test_dadd_51 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_52 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_53 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_54 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_enum_e);
}
static void
test_dadd_55 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var__Bool);
}
static void
test_dadd_56 (void)
{
  extern typeof (dadd (vol_var_long_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_double, vol_var_bit_field);
}
static void
test_dadd_57 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_float);
}
static void
test_dadd_58 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_double);
}
static void
test_dadd_59 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_long_double);
}
static void
test_dadd_60 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_char);
}
static void
test_dadd_61 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_signed_char);
}
static void
test_dadd_62 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_unsigned_char);
}
static void
test_dadd_63 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_short_int);
}
static void
test_dadd_64 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_dadd_65 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_int);
}
static void
test_dadd_66 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_unsigned_int);
}
static void
test_dadd_67 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_long_int);
}
static void
test_dadd_68 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_dadd_69 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_long_long_int);
}
static void
test_dadd_70 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_71 (void)
{
  extern typeof (dadd (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_72 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_73 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_enum_e);
}
static void
test_dadd_74 (void)
{
  extern typeof (dadd (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var__Bool);
}
static void
test_dadd_75 (void)
{
  extern typeof (dadd (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_char, vol_var_bit_field);
}
static void
test_dadd_76 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_float);
}
static void
test_dadd_77 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_double);
}
static void
test_dadd_78 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_long_double);
}
static void
test_dadd_79 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_char);
}
static void
test_dadd_80 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_signed_char);
}
static void
test_dadd_81 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_dadd_82 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_short_int);
}
static void
test_dadd_83 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_dadd_84 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_int);
}
static void
test_dadd_85 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_dadd_86 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_long_int);
}
static void
test_dadd_87 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_dadd_88 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_dadd_89 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_90 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_91 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_92 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_enum_e);
}
static void
test_dadd_93 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var__Bool);
}
static void
test_dadd_94 (void)
{
  extern typeof (dadd (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_signed_char, vol_var_bit_field);
}
static void
test_dadd_95 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_float);
}
static void
test_dadd_96 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_double);
}
static void
test_dadd_97 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_dadd_98 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_char);
}
static void
test_dadd_99 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_dadd_100 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_dadd_101 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_dadd_102 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_dadd_103 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_int);
}
static void
test_dadd_104 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_dadd_105 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_dadd_106 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_dadd_107 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_dadd_108 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_109 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_110 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_111 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_dadd_112 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_dadd_113 (void)
{
  extern typeof (dadd (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_dadd_114 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_float);
}
static void
test_dadd_115 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_double);
}
static void
test_dadd_116 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_long_double);
}
static void
test_dadd_117 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_char);
}
static void
test_dadd_118 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_signed_char);
}
static void
test_dadd_119 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_dadd_120 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_short_int);
}
static void
test_dadd_121 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_dadd_122 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_int);
}
static void
test_dadd_123 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_dadd_124 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_long_int);
}
static void
test_dadd_125 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_dadd_126 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_long_long_int);
}
static void
test_dadd_127 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_128 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_129 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_130 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_enum_e);
}
static void
test_dadd_131 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var__Bool);
}
static void
test_dadd_132 (void)
{
  extern typeof (dadd (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_short_int, vol_var_bit_field);
}
static void
test_dadd_133 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_dadd_134 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_dadd_135 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_dadd_136 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_dadd_137 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_dadd_138 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_dadd_139 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_dadd_140 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_dadd_141 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_dadd_142 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_dadd_143 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_dadd_144 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_dadd_145 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_dadd_146 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_147 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_148 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_149 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_dadd_150 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_dadd_151 (void)
{
  extern typeof (dadd (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_dadd_152 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_float);
}
static void
test_dadd_153 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_double);
}
static void
test_dadd_154 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_long_double);
}
static void
test_dadd_155 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_char);
}
static void
test_dadd_156 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_signed_char);
}
static void
test_dadd_157 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_unsigned_char);
}
static void
test_dadd_158 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_short_int);
}
static void
test_dadd_159 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_dadd_160 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_int);
}
static void
test_dadd_161 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_unsigned_int);
}
static void
test_dadd_162 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_long_int);
}
static void
test_dadd_163 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_dadd_164 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_long_long_int);
}
static void
test_dadd_165 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_166 (void)
{
  extern typeof (dadd (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_167 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_168 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_enum_e);
}
static void
test_dadd_169 (void)
{
  extern typeof (dadd (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var__Bool);
}
static void
test_dadd_170 (void)
{
  extern typeof (dadd (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_int, vol_var_bit_field);
}
static void
test_dadd_171 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_float);
}
static void
test_dadd_172 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_double);
}
static void
test_dadd_173 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_dadd_174 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_char);
}
static void
test_dadd_175 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_dadd_176 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_dadd_177 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_dadd_178 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_dadd_179 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_int);
}
static void
test_dadd_180 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_dadd_181 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_dadd_182 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_dadd_183 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_dadd_184 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_185 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_186 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_187 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_dadd_188 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_dadd_189 (void)
{
  extern typeof (dadd (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_dadd_190 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_float);
}
static void
test_dadd_191 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_double);
}
static void
test_dadd_192 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_long_double);
}
static void
test_dadd_193 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_char);
}
static void
test_dadd_194 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_signed_char);
}
static void
test_dadd_195 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_dadd_196 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_short_int);
}
static void
test_dadd_197 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_dadd_198 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_int);
}
static void
test_dadd_199 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_dadd_200 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_long_int);
}
static void
test_dadd_201 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_dadd_202 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_long_long_int);
}
static void
test_dadd_203 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_204 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_205 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_206 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_enum_e);
}
static void
test_dadd_207 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var__Bool);
}
static void
test_dadd_208 (void)
{
  extern typeof (dadd (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_int, vol_var_bit_field);
}
static void
test_dadd_209 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_dadd_210 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_dadd_211 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_dadd_212 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_dadd_213 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_dadd_214 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_dadd_215 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_dadd_216 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_dadd_217 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_dadd_218 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_dadd_219 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_dadd_220 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_dadd_221 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_dadd_222 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_223 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_224 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_225 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_dadd_226 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_dadd_227 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_dadd_228 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_float);
}
static void
test_dadd_229 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_double);
}
static void
test_dadd_230 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_long_double);
}
static void
test_dadd_231 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_char);
}
static void
test_dadd_232 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_dadd_233 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_dadd_234 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_short_int);
}
static void
test_dadd_235 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_dadd_236 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_int);
}
static void
test_dadd_237 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_dadd_238 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_long_int);
}
static void
test_dadd_239 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_dadd_240 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_dadd_241 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_242 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_243 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_244 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_dadd_245 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var__Bool);
}
static void
test_dadd_246 (void)
{
  extern typeof (dadd (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_dadd_247 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_dadd_248 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_dadd_249 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_dadd_250 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_dadd_251 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_dadd_252 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_dadd_253 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_dadd_254 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_dadd_255 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_dadd_256 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_dadd_257 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_dadd_258 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_dadd_259 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_dadd_260 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_261 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_262 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_263 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_dadd_264 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_dadd_265 (void)
{
  extern typeof (dadd (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_266 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_267 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_268 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_269 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_270 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_271 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_272 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_273 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_274 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_275 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_276 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_277 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_278 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_279 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_280 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_281 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_282 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_283 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_284 (void)
{
  extern typeof (dadd (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_285 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_286 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_287 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_288 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_289 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_290 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_291 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_292 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_293 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_294 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_295 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_296 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_297 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_298 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_299 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_300 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_301 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_302 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_303 (void)
{
  extern typeof (dadd (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_dadd_304 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_float);
}
static void
test_dadd_305 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_double);
}
static void
test_dadd_306 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_long_double);
}
static void
test_dadd_307 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_char);
}
static void
test_dadd_308 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_signed_char);
}
static void
test_dadd_309 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_dadd_310 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_short_int);
}
static void
test_dadd_311 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_dadd_312 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_int);
}
static void
test_dadd_313 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_dadd_314 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_long_int);
}
static void
test_dadd_315 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_dadd_316 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_dadd_317 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_318 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_319 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_320 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_enum_e);
}
static void
test_dadd_321 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var__Bool);
}
static void
test_dadd_322 (void)
{
  extern typeof (dadd (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_enum_e, vol_var_bit_field);
}
static void
test_dadd_323 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_float);
}
static void
test_dadd_324 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_double);
}
static void
test_dadd_325 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_long_double);
}
static void
test_dadd_326 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_char);
}
static void
test_dadd_327 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_signed_char);
}
static void
test_dadd_328 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_dadd_329 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_short_int);
}
static void
test_dadd_330 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_dadd_331 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_int);
}
static void
test_dadd_332 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_dadd_333 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_long_int);
}
static void
test_dadd_334 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_dadd_335 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_long_long_int);
}
static void
test_dadd_336 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_337 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_338 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_339 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_enum_e);
}
static void
test_dadd_340 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var__Bool);
}
static void
test_dadd_341 (void)
{
  extern typeof (dadd (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var__Bool, vol_var_bit_field);
}
static void
test_dadd_342 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_float);
}
static void
test_dadd_343 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_double);
}
static void
test_dadd_344 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_long_double);
}
static void
test_dadd_345 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_char);
}
static void
test_dadd_346 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_signed_char);
}
static void
test_dadd_347 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_dadd_348 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_short_int);
}
static void
test_dadd_349 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_dadd_350 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_int);
}
static void
test_dadd_351 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_dadd_352 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_long_int);
}
static void
test_dadd_353 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_dadd_354 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_dadd_355 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dadd_356 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dadd_357 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_dadd_358 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_enum_e);
}
static void
test_dadd_359 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var__Bool);
}
static void
test_dadd_360 (void)
{
  extern typeof (dadd (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dadd (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_dadd_0, "dadd", "dadd (float, float)", LDBL_MANT_DIG, FLT_MANT_DIG },
    { test_dadd_1, "dadd", "dadd (float, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dadd_2, "dadd", "dadd (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dadd_3, "dadd", "dadd (float, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_4, "dadd", "dadd (float, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_5, "dadd", "dadd (float, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_6, "dadd", "dadd (float, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_7, "dadd", "dadd (float, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_8, "dadd", "dadd (float, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_9, "dadd", "dadd (float, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_10, "dadd", "dadd (float, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_11, "dadd", "dadd (float, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_12, "dadd", "dadd (float, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_13, "dadd", "dadd (float, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_14, "dadd", "dadd (float, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_15, "dadd", "dadd (float, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_16, "dadd", "dadd (float, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_17, "dadd", "dadd (float, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_18, "dadd", "dadd (float, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_19, "dadd", "dadd (double, float)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dadd_20, "dadd", "dadd (double, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dadd_21, "dadd", "dadd (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dadd_22, "dadd", "dadd (double, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_23, "dadd", "dadd (double, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_24, "dadd", "dadd (double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_25, "dadd", "dadd (double, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_26, "dadd", "dadd (double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_27, "dadd", "dadd (double, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_28, "dadd", "dadd (double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_29, "dadd", "dadd (double, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_30, "dadd", "dadd (double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_31, "dadd", "dadd (double, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_32, "dadd", "dadd (double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_33, "dadd", "dadd (double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_34, "dadd", "dadd (double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_35, "dadd", "dadd (double, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_36, "dadd", "dadd (double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_37, "dadd", "dadd (double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_38, "dadd", "dadd (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dadd_39, "dadd", "dadd (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dadd_40, "dadd", "dadd (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dadd_41, "dadd", "dadd (long double, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_42, "dadd", "dadd (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_43, "dadd", "dadd (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_44, "dadd", "dadd (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_45, "dadd", "dadd (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_46, "dadd", "dadd (long double, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_47, "dadd", "dadd (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_48, "dadd", "dadd (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_49, "dadd", "dadd (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_50, "dadd", "dadd (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_51, "dadd", "dadd (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_52, "dadd", "dadd (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_53, "dadd", "dadd (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_54, "dadd", "dadd (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_55, "dadd", "dadd (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_56, "dadd", "dadd (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_57, "dadd", "dadd (char, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_58, "dadd", "dadd (char, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_59, "dadd", "dadd (char, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_60, "dadd", "dadd (char, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_61, "dadd", "dadd (char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_62, "dadd", "dadd (char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_63, "dadd", "dadd (char, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_64, "dadd", "dadd (char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_65, "dadd", "dadd (char, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_66, "dadd", "dadd (char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_67, "dadd", "dadd (char, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_68, "dadd", "dadd (char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_69, "dadd", "dadd (char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_70, "dadd", "dadd (char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_71, "dadd", "dadd (char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_72, "dadd", "dadd (char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_73, "dadd", "dadd (char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_74, "dadd", "dadd (char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_75, "dadd", "dadd (char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_76, "dadd", "dadd (signed char, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_77, "dadd", "dadd (signed char, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_78, "dadd", "dadd (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_79, "dadd", "dadd (signed char, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_80, "dadd", "dadd (signed char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_81, "dadd", "dadd (signed char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_82, "dadd", "dadd (signed char, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_83, "dadd", "dadd (signed char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_84, "dadd", "dadd (signed char, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_85, "dadd", "dadd (signed char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_86, "dadd", "dadd (signed char, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_87, "dadd", "dadd (signed char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_88, "dadd", "dadd (signed char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_89, "dadd", "dadd (signed char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_90, "dadd", "dadd (signed char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_91, "dadd", "dadd (signed char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_92, "dadd", "dadd (signed char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_93, "dadd", "dadd (signed char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_94, "dadd", "dadd (signed char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_95, "dadd", "dadd (unsigned char, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_96, "dadd", "dadd (unsigned char, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_97, "dadd", "dadd (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_98, "dadd", "dadd (unsigned char, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_99, "dadd", "dadd (unsigned char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_100, "dadd", "dadd (unsigned char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_101, "dadd", "dadd (unsigned char, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_102, "dadd", "dadd (unsigned char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_103, "dadd", "dadd (unsigned char, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_104, "dadd", "dadd (unsigned char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_105, "dadd", "dadd (unsigned char, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_106, "dadd", "dadd (unsigned char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_107, "dadd", "dadd (unsigned char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_108, "dadd", "dadd (unsigned char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_109, "dadd", "dadd (unsigned char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_110, "dadd", "dadd (unsigned char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_111, "dadd", "dadd (unsigned char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_112, "dadd", "dadd (unsigned char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_113, "dadd", "dadd (unsigned char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_114, "dadd", "dadd (short int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_115, "dadd", "dadd (short int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_116, "dadd", "dadd (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_117, "dadd", "dadd (short int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_118, "dadd", "dadd (short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_119, "dadd", "dadd (short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_120, "dadd", "dadd (short int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_121, "dadd", "dadd (short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_122, "dadd", "dadd (short int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_123, "dadd", "dadd (short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_124, "dadd", "dadd (short int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_125, "dadd", "dadd (short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_126, "dadd", "dadd (short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_127, "dadd", "dadd (short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_128, "dadd", "dadd (short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_129, "dadd", "dadd (short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_130, "dadd", "dadd (short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_131, "dadd", "dadd (short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_132, "dadd", "dadd (short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_133, "dadd", "dadd (unsigned short int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_134, "dadd", "dadd (unsigned short int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_135, "dadd", "dadd (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_136, "dadd", "dadd (unsigned short int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_137, "dadd", "dadd (unsigned short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_138, "dadd", "dadd (unsigned short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_139, "dadd", "dadd (unsigned short int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_140, "dadd", "dadd (unsigned short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_141, "dadd", "dadd (unsigned short int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_142, "dadd", "dadd (unsigned short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_143, "dadd", "dadd (unsigned short int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_144, "dadd", "dadd (unsigned short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_145, "dadd", "dadd (unsigned short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_146, "dadd", "dadd (unsigned short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_147, "dadd", "dadd (unsigned short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_148, "dadd", "dadd (unsigned short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_149, "dadd", "dadd (unsigned short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_150, "dadd", "dadd (unsigned short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_151, "dadd", "dadd (unsigned short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_152, "dadd", "dadd (int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_153, "dadd", "dadd (int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_154, "dadd", "dadd (int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_155, "dadd", "dadd (int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_156, "dadd", "dadd (int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_157, "dadd", "dadd (int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_158, "dadd", "dadd (int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_159, "dadd", "dadd (int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_160, "dadd", "dadd (int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_161, "dadd", "dadd (int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_162, "dadd", "dadd (int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_163, "dadd", "dadd (int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_164, "dadd", "dadd (int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_165, "dadd", "dadd (int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_166, "dadd", "dadd (int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_167, "dadd", "dadd (int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_168, "dadd", "dadd (int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_169, "dadd", "dadd (int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_170, "dadd", "dadd (int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_171, "dadd", "dadd (unsigned int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_172, "dadd", "dadd (unsigned int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_173, "dadd", "dadd (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_174, "dadd", "dadd (unsigned int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_175, "dadd", "dadd (unsigned int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_176, "dadd", "dadd (unsigned int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_177, "dadd", "dadd (unsigned int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_178, "dadd", "dadd (unsigned int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_179, "dadd", "dadd (unsigned int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_180, "dadd", "dadd (unsigned int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_181, "dadd", "dadd (unsigned int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_182, "dadd", "dadd (unsigned int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_183, "dadd", "dadd (unsigned int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_184, "dadd", "dadd (unsigned int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_185, "dadd", "dadd (unsigned int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_186, "dadd", "dadd (unsigned int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_187, "dadd", "dadd (unsigned int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_188, "dadd", "dadd (unsigned int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_189, "dadd", "dadd (unsigned int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_190, "dadd", "dadd (long int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_191, "dadd", "dadd (long int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_192, "dadd", "dadd (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_193, "dadd", "dadd (long int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_194, "dadd", "dadd (long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_195, "dadd", "dadd (long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_196, "dadd", "dadd (long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_197, "dadd", "dadd (long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_198, "dadd", "dadd (long int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_199, "dadd", "dadd (long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_200, "dadd", "dadd (long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_201, "dadd", "dadd (long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_202, "dadd", "dadd (long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_203, "dadd", "dadd (long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_204, "dadd", "dadd (long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_205, "dadd", "dadd (long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_206, "dadd", "dadd (long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_207, "dadd", "dadd (long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_208, "dadd", "dadd (long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_209, "dadd", "dadd (unsigned long int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_210, "dadd", "dadd (unsigned long int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_211, "dadd", "dadd (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_212, "dadd", "dadd (unsigned long int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_213, "dadd", "dadd (unsigned long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_214, "dadd", "dadd (unsigned long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_215, "dadd", "dadd (unsigned long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_216, "dadd", "dadd (unsigned long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_217, "dadd", "dadd (unsigned long int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_218, "dadd", "dadd (unsigned long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_219, "dadd", "dadd (unsigned long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_220, "dadd", "dadd (unsigned long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_221, "dadd", "dadd (unsigned long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_222, "dadd", "dadd (unsigned long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_223, "dadd", "dadd (unsigned long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_224, "dadd", "dadd (unsigned long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_225, "dadd", "dadd (unsigned long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_226, "dadd", "dadd (unsigned long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_227, "dadd", "dadd (unsigned long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_228, "dadd", "dadd (long long int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_229, "dadd", "dadd (long long int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_230, "dadd", "dadd (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_231, "dadd", "dadd (long long int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_232, "dadd", "dadd (long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_233, "dadd", "dadd (long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_234, "dadd", "dadd (long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_235, "dadd", "dadd (long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_236, "dadd", "dadd (long long int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_237, "dadd", "dadd (long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_238, "dadd", "dadd (long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_239, "dadd", "dadd (long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_240, "dadd", "dadd (long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_241, "dadd", "dadd (long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_242, "dadd", "dadd (long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_243, "dadd", "dadd (long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_244, "dadd", "dadd (long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_245, "dadd", "dadd (long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_246, "dadd", "dadd (long long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_247, "dadd", "dadd (unsigned long long int, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_248, "dadd", "dadd (unsigned long long int, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_249, "dadd", "dadd (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_250, "dadd", "dadd (unsigned long long int, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_251, "dadd", "dadd (unsigned long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_252, "dadd", "dadd (unsigned long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_253, "dadd", "dadd (unsigned long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_254, "dadd", "dadd (unsigned long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_255, "dadd", "dadd (unsigned long long int, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_256, "dadd", "dadd (unsigned long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_257, "dadd", "dadd (unsigned long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_258, "dadd", "dadd (unsigned long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_259, "dadd", "dadd (unsigned long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_260, "dadd", "dadd (unsigned long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_261, "dadd", "dadd (unsigned long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_262, "dadd", "dadd (unsigned long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_263, "dadd", "dadd (unsigned long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_264, "dadd", "dadd (unsigned long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_265, "dadd", "dadd (unsigned long long int, bit_field)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_266, "dadd", "dadd (__int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_267, "dadd", "dadd (__int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_268, "dadd", "dadd (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_269, "dadd", "dadd (__int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_270, "dadd", "dadd (__int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_271, "dadd", "dadd (__int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_272, "dadd", "dadd (__int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_273, "dadd", "dadd (__int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_274, "dadd", "dadd (__int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_275, "dadd", "dadd (__int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_276, "dadd", "dadd (__int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_277, "dadd", "dadd (__int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_278, "dadd", "dadd (__int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_279, "dadd", "dadd (__int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_280, "dadd", "dadd (__int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_281, "dadd", "dadd (__int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_282, "dadd", "dadd (__int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_283, "dadd", "dadd (__int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_284, "dadd", "dadd (__int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_285, "dadd", "dadd (unsigned __int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_286, "dadd", "dadd (unsigned __int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_287, "dadd", "dadd (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_288, "dadd", "dadd (unsigned __int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_289, "dadd", "dadd (unsigned __int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_290, "dadd", "dadd (unsigned __int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_291, "dadd", "dadd (unsigned __int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_292, "dadd", "dadd (unsigned __int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_293, "dadd", "dadd (unsigned __int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_294, "dadd", "dadd (unsigned __int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_295, "dadd", "dadd (unsigned __int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_296, "dadd", "dadd (unsigned __int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_297, "dadd", "dadd (unsigned __int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_298, "dadd", "dadd (unsigned __int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_299, "dadd", "dadd (unsigned __int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_300, "dadd", "dadd (unsigned __int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_301, "dadd", "dadd (unsigned __int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_302, "dadd", "dadd (unsigned __int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_303, "dadd", "dadd (unsigned __int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_304, "dadd", "dadd (enum e, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_305, "dadd", "dadd (enum e, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_306, "dadd", "dadd (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_307, "dadd", "dadd (enum e, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_308, "dadd", "dadd (enum e, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_309, "dadd", "dadd (enum e, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_310, "dadd", "dadd (enum e, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_311, "dadd", "dadd (enum e, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_312, "dadd", "dadd (enum e, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_313, "dadd", "dadd (enum e, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_314, "dadd", "dadd (enum e, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_315, "dadd", "dadd (enum e, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_316, "dadd", "dadd (enum e, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_317, "dadd", "dadd (enum e, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_318, "dadd", "dadd (enum e, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_319, "dadd", "dadd (enum e, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_320, "dadd", "dadd (enum e, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_321, "dadd", "dadd (enum e, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_322, "dadd", "dadd (enum e, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_323, "dadd", "dadd (_Bool, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_324, "dadd", "dadd (_Bool, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_325, "dadd", "dadd (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_326, "dadd", "dadd (_Bool, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_327, "dadd", "dadd (_Bool, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_328, "dadd", "dadd (_Bool, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_329, "dadd", "dadd (_Bool, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_330, "dadd", "dadd (_Bool, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_331, "dadd", "dadd (_Bool, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_332, "dadd", "dadd (_Bool, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_333, "dadd", "dadd (_Bool, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_334, "dadd", "dadd (_Bool, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_335, "dadd", "dadd (_Bool, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_336, "dadd", "dadd (_Bool, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_337, "dadd", "dadd (_Bool, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_338, "dadd", "dadd (_Bool, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_339, "dadd", "dadd (_Bool, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_340, "dadd", "dadd (_Bool, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_341, "dadd", "dadd (_Bool, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dadd_342, "dadd", "dadd (bit_field, float)", LDBL_MANT_DIG, 0 },
    { test_dadd_343, "dadd", "dadd (bit_field, double)", LDBL_MANT_DIG, 0 },
    { test_dadd_344, "dadd", "dadd (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_dadd_345, "dadd", "dadd (bit_field, char)", LDBL_MANT_DIG, 0 },
    { test_dadd_346, "dadd", "dadd (bit_field, signed char)", LDBL_MANT_DIG, 0 },
    { test_dadd_347, "dadd", "dadd (bit_field, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dadd_348, "dadd", "dadd (bit_field, short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_349, "dadd", "dadd (bit_field, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dadd_350, "dadd", "dadd (bit_field, int)", LDBL_MANT_DIG, 0 },
    { test_dadd_351, "dadd", "dadd (bit_field, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dadd_352, "dadd", "dadd (bit_field, long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_353, "dadd", "dadd (bit_field, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_354, "dadd", "dadd (bit_field, long long int)", LDBL_MANT_DIG, 0 },
    { test_dadd_355, "dadd", "dadd (bit_field, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dadd_356, "dadd", "dadd (bit_field, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dadd_357, "dadd", "dadd (bit_field, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dadd_358, "dadd", "dadd (bit_field, enum e)", LDBL_MANT_DIG, 0 },
    { test_dadd_359, "dadd", "dadd (bit_field, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dadd_360, "dadd", "dadd (bit_field, bit_field)", LDBL_MANT_DIG, 0 },
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
