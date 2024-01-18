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
(ddivl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "ddiv";
  return 0;
}
static void
test_ddiv_0 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_float);
}
static void
test_ddiv_1 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_double);
}
static void
test_ddiv_2 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_long_double);
}
static void
test_ddiv_3 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_char);
}
static void
test_ddiv_4 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_signed_char);
}
static void
test_ddiv_5 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_unsigned_char);
}
static void
test_ddiv_6 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_short_int);
}
static void
test_ddiv_7 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_ddiv_8 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_int);
}
static void
test_ddiv_9 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_unsigned_int);
}
static void
test_ddiv_10 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_long_int);
}
static void
test_ddiv_11 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_ddiv_12 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_long_long_int);
}
static void
test_ddiv_13 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_14 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_15 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_16 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_enum_e);
}
static void
test_ddiv_17 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var__Bool);
}
static void
test_ddiv_18 (void)
{
  extern typeof (ddiv (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_float, vol_var_bit_field);
}
static void
test_ddiv_19 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_float);
}
static void
test_ddiv_20 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_double);
}
static void
test_ddiv_21 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_long_double);
}
static void
test_ddiv_22 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_char);
}
static void
test_ddiv_23 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_signed_char);
}
static void
test_ddiv_24 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_unsigned_char);
}
static void
test_ddiv_25 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_short_int);
}
static void
test_ddiv_26 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_ddiv_27 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_int);
}
static void
test_ddiv_28 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_unsigned_int);
}
static void
test_ddiv_29 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_long_int);
}
static void
test_ddiv_30 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_ddiv_31 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_long_long_int);
}
static void
test_ddiv_32 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_33 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_34 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_35 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_enum_e);
}
static void
test_ddiv_36 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var__Bool);
}
static void
test_ddiv_37 (void)
{
  extern typeof (ddiv (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_double, vol_var_bit_field);
}
static void
test_ddiv_38 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_float);
}
static void
test_ddiv_39 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_double);
}
static void
test_ddiv_40 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_long_double);
}
static void
test_ddiv_41 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_char);
}
static void
test_ddiv_42 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_signed_char);
}
static void
test_ddiv_43 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_ddiv_44 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_short_int);
}
static void
test_ddiv_45 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_ddiv_46 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_int);
}
static void
test_ddiv_47 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_ddiv_48 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_long_int);
}
static void
test_ddiv_49 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_ddiv_50 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_long_long_int);
}
static void
test_ddiv_51 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_52 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_53 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_54 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_enum_e);
}
static void
test_ddiv_55 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var__Bool);
}
static void
test_ddiv_56 (void)
{
  extern typeof (ddiv (vol_var_long_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_double, vol_var_bit_field);
}
static void
test_ddiv_57 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_float);
}
static void
test_ddiv_58 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_double);
}
static void
test_ddiv_59 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_long_double);
}
static void
test_ddiv_60 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_char);
}
static void
test_ddiv_61 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_signed_char);
}
static void
test_ddiv_62 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_unsigned_char);
}
static void
test_ddiv_63 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_short_int);
}
static void
test_ddiv_64 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_ddiv_65 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_int);
}
static void
test_ddiv_66 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_unsigned_int);
}
static void
test_ddiv_67 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_long_int);
}
static void
test_ddiv_68 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_ddiv_69 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_long_long_int);
}
static void
test_ddiv_70 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_71 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_72 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_73 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_enum_e);
}
static void
test_ddiv_74 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var__Bool);
}
static void
test_ddiv_75 (void)
{
  extern typeof (ddiv (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_char, vol_var_bit_field);
}
static void
test_ddiv_76 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_float);
}
static void
test_ddiv_77 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_double);
}
static void
test_ddiv_78 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_long_double);
}
static void
test_ddiv_79 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_char);
}
static void
test_ddiv_80 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_signed_char);
}
static void
test_ddiv_81 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_ddiv_82 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_short_int);
}
static void
test_ddiv_83 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_ddiv_84 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_int);
}
static void
test_ddiv_85 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_ddiv_86 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_long_int);
}
static void
test_ddiv_87 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_ddiv_88 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_ddiv_89 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_90 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_91 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_92 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_enum_e);
}
static void
test_ddiv_93 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var__Bool);
}
static void
test_ddiv_94 (void)
{
  extern typeof (ddiv (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_signed_char, vol_var_bit_field);
}
static void
test_ddiv_95 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_float);
}
static void
test_ddiv_96 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_double);
}
static void
test_ddiv_97 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_ddiv_98 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_char);
}
static void
test_ddiv_99 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_ddiv_100 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_ddiv_101 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_ddiv_102 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_ddiv_103 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_int);
}
static void
test_ddiv_104 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_ddiv_105 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_ddiv_106 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_ddiv_107 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_ddiv_108 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_109 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_110 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_111 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_ddiv_112 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_ddiv_113 (void)
{
  extern typeof (ddiv (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_ddiv_114 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_float);
}
static void
test_ddiv_115 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_double);
}
static void
test_ddiv_116 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_long_double);
}
static void
test_ddiv_117 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_char);
}
static void
test_ddiv_118 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_signed_char);
}
static void
test_ddiv_119 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_ddiv_120 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_short_int);
}
static void
test_ddiv_121 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_122 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_int);
}
static void
test_ddiv_123 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_ddiv_124 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_long_int);
}
static void
test_ddiv_125 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_126 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_long_long_int);
}
static void
test_ddiv_127 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_128 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_129 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_130 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_enum_e);
}
static void
test_ddiv_131 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var__Bool);
}
static void
test_ddiv_132 (void)
{
  extern typeof (ddiv (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_short_int, vol_var_bit_field);
}
static void
test_ddiv_133 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_ddiv_134 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_ddiv_135 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_ddiv_136 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_ddiv_137 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_ddiv_138 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_ddiv_139 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_ddiv_140 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_141 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_ddiv_142 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_ddiv_143 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_ddiv_144 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_145 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_ddiv_146 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_147 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_148 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_149 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_ddiv_150 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_ddiv_151 (void)
{
  extern typeof (ddiv (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_ddiv_152 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_float);
}
static void
test_ddiv_153 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_double);
}
static void
test_ddiv_154 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_long_double);
}
static void
test_ddiv_155 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_char);
}
static void
test_ddiv_156 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_signed_char);
}
static void
test_ddiv_157 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_unsigned_char);
}
static void
test_ddiv_158 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_short_int);
}
static void
test_ddiv_159 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_160 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_int);
}
static void
test_ddiv_161 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_unsigned_int);
}
static void
test_ddiv_162 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_long_int);
}
static void
test_ddiv_163 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_164 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_long_long_int);
}
static void
test_ddiv_165 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_166 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_167 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_168 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_enum_e);
}
static void
test_ddiv_169 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var__Bool);
}
static void
test_ddiv_170 (void)
{
  extern typeof (ddiv (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_int, vol_var_bit_field);
}
static void
test_ddiv_171 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_float);
}
static void
test_ddiv_172 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_double);
}
static void
test_ddiv_173 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_ddiv_174 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_char);
}
static void
test_ddiv_175 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_ddiv_176 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_ddiv_177 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_ddiv_178 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_179 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_int);
}
static void
test_ddiv_180 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_ddiv_181 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_ddiv_182 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_183 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_ddiv_184 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_185 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_186 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_187 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_ddiv_188 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_ddiv_189 (void)
{
  extern typeof (ddiv (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_ddiv_190 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_float);
}
static void
test_ddiv_191 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_double);
}
static void
test_ddiv_192 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_long_double);
}
static void
test_ddiv_193 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_char);
}
static void
test_ddiv_194 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_signed_char);
}
static void
test_ddiv_195 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_ddiv_196 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_short_int);
}
static void
test_ddiv_197 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_198 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_int);
}
static void
test_ddiv_199 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_ddiv_200 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_long_int);
}
static void
test_ddiv_201 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_202 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_long_long_int);
}
static void
test_ddiv_203 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_204 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_205 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_206 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_enum_e);
}
static void
test_ddiv_207 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var__Bool);
}
static void
test_ddiv_208 (void)
{
  extern typeof (ddiv (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_int, vol_var_bit_field);
}
static void
test_ddiv_209 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_ddiv_210 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_ddiv_211 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_ddiv_212 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_ddiv_213 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_ddiv_214 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_ddiv_215 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_ddiv_216 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_217 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_ddiv_218 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_ddiv_219 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_ddiv_220 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_221 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_ddiv_222 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_223 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_224 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_225 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_ddiv_226 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_ddiv_227 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_ddiv_228 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_float);
}
static void
test_ddiv_229 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_double);
}
static void
test_ddiv_230 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_long_double);
}
static void
test_ddiv_231 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_char);
}
static void
test_ddiv_232 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_ddiv_233 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_ddiv_234 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_short_int);
}
static void
test_ddiv_235 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_236 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_int);
}
static void
test_ddiv_237 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_ddiv_238 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_long_int);
}
static void
test_ddiv_239 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_240 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_ddiv_241 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_242 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_243 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_244 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_ddiv_245 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var__Bool);
}
static void
test_ddiv_246 (void)
{
  extern typeof (ddiv (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_ddiv_247 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_ddiv_248 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_ddiv_249 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_ddiv_250 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_ddiv_251 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_ddiv_252 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_ddiv_253 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_ddiv_254 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_ddiv_255 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_ddiv_256 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_ddiv_257 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_ddiv_258 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_ddiv_259 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_ddiv_260 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_261 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_262 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_263 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_ddiv_264 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_ddiv_265 (void)
{
  extern typeof (ddiv (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_266 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_267 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_268 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_269 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_270 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_271 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_272 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_273 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_274 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_275 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_276 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_277 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_278 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_279 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_280 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_281 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_282 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_283 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_284 (void)
{
  extern typeof (ddiv (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_285 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_286 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_287 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_288 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_289 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_290 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_291 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_292 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_293 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_294 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_295 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_296 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_297 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_298 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_299 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_300 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_301 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_302 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_303 (void)
{
  extern typeof (ddiv (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_ddiv_304 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_float);
}
static void
test_ddiv_305 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_double);
}
static void
test_ddiv_306 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_long_double);
}
static void
test_ddiv_307 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_char);
}
static void
test_ddiv_308 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_signed_char);
}
static void
test_ddiv_309 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_ddiv_310 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_short_int);
}
static void
test_ddiv_311 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_ddiv_312 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_int);
}
static void
test_ddiv_313 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_ddiv_314 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_long_int);
}
static void
test_ddiv_315 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_ddiv_316 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_ddiv_317 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_318 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_319 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_320 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_enum_e);
}
static void
test_ddiv_321 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var__Bool);
}
static void
test_ddiv_322 (void)
{
  extern typeof (ddiv (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_enum_e, vol_var_bit_field);
}
static void
test_ddiv_323 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_float);
}
static void
test_ddiv_324 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_double);
}
static void
test_ddiv_325 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_long_double);
}
static void
test_ddiv_326 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_char);
}
static void
test_ddiv_327 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_signed_char);
}
static void
test_ddiv_328 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_ddiv_329 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_short_int);
}
static void
test_ddiv_330 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_ddiv_331 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_int);
}
static void
test_ddiv_332 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_ddiv_333 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_long_int);
}
static void
test_ddiv_334 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_ddiv_335 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_long_long_int);
}
static void
test_ddiv_336 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_337 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_338 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_339 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_enum_e);
}
static void
test_ddiv_340 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var__Bool);
}
static void
test_ddiv_341 (void)
{
  extern typeof (ddiv (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var__Bool, vol_var_bit_field);
}
static void
test_ddiv_342 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_float);
}
static void
test_ddiv_343 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_double);
}
static void
test_ddiv_344 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_long_double);
}
static void
test_ddiv_345 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_char);
}
static void
test_ddiv_346 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_signed_char);
}
static void
test_ddiv_347 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_ddiv_348 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_short_int);
}
static void
test_ddiv_349 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_ddiv_350 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_int);
}
static void
test_ddiv_351 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_ddiv_352 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_long_int);
}
static void
test_ddiv_353 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_ddiv_354 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_ddiv_355 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_ddiv_356 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_ddiv_357 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_ddiv_358 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_enum_e);
}
static void
test_ddiv_359 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var__Bool);
}
static void
test_ddiv_360 (void)
{
  extern typeof (ddiv (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = ddiv (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_ddiv_0, "ddiv", "ddiv (float, float)", LDBL_MANT_DIG, FLT_MANT_DIG },
    { test_ddiv_1, "ddiv", "ddiv (float, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_ddiv_2, "ddiv", "ddiv (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_ddiv_3, "ddiv", "ddiv (float, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_4, "ddiv", "ddiv (float, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_5, "ddiv", "ddiv (float, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_6, "ddiv", "ddiv (float, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_7, "ddiv", "ddiv (float, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_8, "ddiv", "ddiv (float, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_9, "ddiv", "ddiv (float, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_10, "ddiv", "ddiv (float, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_11, "ddiv", "ddiv (float, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_12, "ddiv", "ddiv (float, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_13, "ddiv", "ddiv (float, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_14, "ddiv", "ddiv (float, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_15, "ddiv", "ddiv (float, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_16, "ddiv", "ddiv (float, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_17, "ddiv", "ddiv (float, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_18, "ddiv", "ddiv (float, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_19, "ddiv", "ddiv (double, float)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_ddiv_20, "ddiv", "ddiv (double, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_ddiv_21, "ddiv", "ddiv (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_ddiv_22, "ddiv", "ddiv (double, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_23, "ddiv", "ddiv (double, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_24, "ddiv", "ddiv (double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_25, "ddiv", "ddiv (double, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_26, "ddiv", "ddiv (double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_27, "ddiv", "ddiv (double, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_28, "ddiv", "ddiv (double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_29, "ddiv", "ddiv (double, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_30, "ddiv", "ddiv (double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_31, "ddiv", "ddiv (double, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_32, "ddiv", "ddiv (double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_33, "ddiv", "ddiv (double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_34, "ddiv", "ddiv (double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_35, "ddiv", "ddiv (double, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_36, "ddiv", "ddiv (double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_37, "ddiv", "ddiv (double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_38, "ddiv", "ddiv (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_ddiv_39, "ddiv", "ddiv (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_ddiv_40, "ddiv", "ddiv (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_ddiv_41, "ddiv", "ddiv (long double, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_42, "ddiv", "ddiv (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_43, "ddiv", "ddiv (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_44, "ddiv", "ddiv (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_45, "ddiv", "ddiv (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_46, "ddiv", "ddiv (long double, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_47, "ddiv", "ddiv (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_48, "ddiv", "ddiv (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_49, "ddiv", "ddiv (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_50, "ddiv", "ddiv (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_51, "ddiv", "ddiv (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_52, "ddiv", "ddiv (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_53, "ddiv", "ddiv (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_54, "ddiv", "ddiv (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_55, "ddiv", "ddiv (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_56, "ddiv", "ddiv (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_57, "ddiv", "ddiv (char, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_58, "ddiv", "ddiv (char, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_59, "ddiv", "ddiv (char, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_60, "ddiv", "ddiv (char, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_61, "ddiv", "ddiv (char, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_62, "ddiv", "ddiv (char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_63, "ddiv", "ddiv (char, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_64, "ddiv", "ddiv (char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_65, "ddiv", "ddiv (char, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_66, "ddiv", "ddiv (char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_67, "ddiv", "ddiv (char, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_68, "ddiv", "ddiv (char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_69, "ddiv", "ddiv (char, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_70, "ddiv", "ddiv (char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_71, "ddiv", "ddiv (char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_72, "ddiv", "ddiv (char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_73, "ddiv", "ddiv (char, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_74, "ddiv", "ddiv (char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_75, "ddiv", "ddiv (char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_76, "ddiv", "ddiv (signed char, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_77, "ddiv", "ddiv (signed char, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_78, "ddiv", "ddiv (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_79, "ddiv", "ddiv (signed char, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_80, "ddiv", "ddiv (signed char, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_81, "ddiv", "ddiv (signed char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_82, "ddiv", "ddiv (signed char, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_83, "ddiv", "ddiv (signed char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_84, "ddiv", "ddiv (signed char, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_85, "ddiv", "ddiv (signed char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_86, "ddiv", "ddiv (signed char, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_87, "ddiv", "ddiv (signed char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_88, "ddiv", "ddiv (signed char, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_89, "ddiv", "ddiv (signed char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_90, "ddiv", "ddiv (signed char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_91, "ddiv", "ddiv (signed char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_92, "ddiv", "ddiv (signed char, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_93, "ddiv", "ddiv (signed char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_94, "ddiv", "ddiv (signed char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_95, "ddiv", "ddiv (unsigned char, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_96, "ddiv", "ddiv (unsigned char, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_97, "ddiv", "ddiv (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_98, "ddiv", "ddiv (unsigned char, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_99, "ddiv", "ddiv (unsigned char, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_100, "ddiv", "ddiv (unsigned char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_101, "ddiv", "ddiv (unsigned char, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_102, "ddiv", "ddiv (unsigned char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_103, "ddiv", "ddiv (unsigned char, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_104, "ddiv", "ddiv (unsigned char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_105, "ddiv", "ddiv (unsigned char, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_106, "ddiv", "ddiv (unsigned char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_107, "ddiv", "ddiv (unsigned char, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_108, "ddiv", "ddiv (unsigned char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_109, "ddiv", "ddiv (unsigned char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_110, "ddiv", "ddiv (unsigned char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_111, "ddiv", "ddiv (unsigned char, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_112, "ddiv", "ddiv (unsigned char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_113, "ddiv", "ddiv (unsigned char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_114, "ddiv", "ddiv (short int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_115, "ddiv", "ddiv (short int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_116, "ddiv", "ddiv (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_117, "ddiv", "ddiv (short int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_118, "ddiv", "ddiv (short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_119, "ddiv", "ddiv (short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_120, "ddiv", "ddiv (short int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_121, "ddiv", "ddiv (short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_122, "ddiv", "ddiv (short int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_123, "ddiv", "ddiv (short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_124, "ddiv", "ddiv (short int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_125, "ddiv", "ddiv (short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_126, "ddiv", "ddiv (short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_127, "ddiv", "ddiv (short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_128, "ddiv", "ddiv (short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_129, "ddiv", "ddiv (short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_130, "ddiv", "ddiv (short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_131, "ddiv", "ddiv (short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_132, "ddiv", "ddiv (short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_133, "ddiv", "ddiv (unsigned short int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_134, "ddiv", "ddiv (unsigned short int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_135, "ddiv", "ddiv (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_136, "ddiv", "ddiv (unsigned short int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_137, "ddiv", "ddiv (unsigned short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_138, "ddiv", "ddiv (unsigned short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_139, "ddiv", "ddiv (unsigned short int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_140, "ddiv", "ddiv (unsigned short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_141, "ddiv", "ddiv (unsigned short int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_142, "ddiv", "ddiv (unsigned short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_143, "ddiv", "ddiv (unsigned short int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_144, "ddiv", "ddiv (unsigned short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_145, "ddiv", "ddiv (unsigned short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_146, "ddiv", "ddiv (unsigned short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_147, "ddiv", "ddiv (unsigned short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_148, "ddiv", "ddiv (unsigned short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_149, "ddiv", "ddiv (unsigned short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_150, "ddiv", "ddiv (unsigned short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_151, "ddiv", "ddiv (unsigned short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_152, "ddiv", "ddiv (int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_153, "ddiv", "ddiv (int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_154, "ddiv", "ddiv (int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_155, "ddiv", "ddiv (int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_156, "ddiv", "ddiv (int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_157, "ddiv", "ddiv (int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_158, "ddiv", "ddiv (int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_159, "ddiv", "ddiv (int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_160, "ddiv", "ddiv (int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_161, "ddiv", "ddiv (int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_162, "ddiv", "ddiv (int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_163, "ddiv", "ddiv (int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_164, "ddiv", "ddiv (int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_165, "ddiv", "ddiv (int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_166, "ddiv", "ddiv (int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_167, "ddiv", "ddiv (int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_168, "ddiv", "ddiv (int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_169, "ddiv", "ddiv (int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_170, "ddiv", "ddiv (int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_171, "ddiv", "ddiv (unsigned int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_172, "ddiv", "ddiv (unsigned int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_173, "ddiv", "ddiv (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_174, "ddiv", "ddiv (unsigned int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_175, "ddiv", "ddiv (unsigned int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_176, "ddiv", "ddiv (unsigned int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_177, "ddiv", "ddiv (unsigned int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_178, "ddiv", "ddiv (unsigned int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_179, "ddiv", "ddiv (unsigned int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_180, "ddiv", "ddiv (unsigned int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_181, "ddiv", "ddiv (unsigned int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_182, "ddiv", "ddiv (unsigned int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_183, "ddiv", "ddiv (unsigned int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_184, "ddiv", "ddiv (unsigned int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_185, "ddiv", "ddiv (unsigned int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_186, "ddiv", "ddiv (unsigned int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_187, "ddiv", "ddiv (unsigned int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_188, "ddiv", "ddiv (unsigned int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_189, "ddiv", "ddiv (unsigned int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_190, "ddiv", "ddiv (long int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_191, "ddiv", "ddiv (long int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_192, "ddiv", "ddiv (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_193, "ddiv", "ddiv (long int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_194, "ddiv", "ddiv (long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_195, "ddiv", "ddiv (long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_196, "ddiv", "ddiv (long int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_197, "ddiv", "ddiv (long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_198, "ddiv", "ddiv (long int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_199, "ddiv", "ddiv (long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_200, "ddiv", "ddiv (long int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_201, "ddiv", "ddiv (long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_202, "ddiv", "ddiv (long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_203, "ddiv", "ddiv (long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_204, "ddiv", "ddiv (long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_205, "ddiv", "ddiv (long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_206, "ddiv", "ddiv (long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_207, "ddiv", "ddiv (long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_208, "ddiv", "ddiv (long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_209, "ddiv", "ddiv (unsigned long int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_210, "ddiv", "ddiv (unsigned long int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_211, "ddiv", "ddiv (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_212, "ddiv", "ddiv (unsigned long int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_213, "ddiv", "ddiv (unsigned long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_214, "ddiv", "ddiv (unsigned long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_215, "ddiv", "ddiv (unsigned long int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_216, "ddiv", "ddiv (unsigned long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_217, "ddiv", "ddiv (unsigned long int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_218, "ddiv", "ddiv (unsigned long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_219, "ddiv", "ddiv (unsigned long int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_220, "ddiv", "ddiv (unsigned long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_221, "ddiv", "ddiv (unsigned long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_222, "ddiv", "ddiv (unsigned long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_223, "ddiv", "ddiv (unsigned long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_224, "ddiv", "ddiv (unsigned long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_225, "ddiv", "ddiv (unsigned long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_226, "ddiv", "ddiv (unsigned long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_227, "ddiv", "ddiv (unsigned long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_228, "ddiv", "ddiv (long long int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_229, "ddiv", "ddiv (long long int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_230, "ddiv", "ddiv (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_231, "ddiv", "ddiv (long long int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_232, "ddiv", "ddiv (long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_233, "ddiv", "ddiv (long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_234, "ddiv", "ddiv (long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_235, "ddiv", "ddiv (long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_236, "ddiv", "ddiv (long long int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_237, "ddiv", "ddiv (long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_238, "ddiv", "ddiv (long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_239, "ddiv", "ddiv (long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_240, "ddiv", "ddiv (long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_241, "ddiv", "ddiv (long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_242, "ddiv", "ddiv (long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_243, "ddiv", "ddiv (long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_244, "ddiv", "ddiv (long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_245, "ddiv", "ddiv (long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_246, "ddiv", "ddiv (long long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_247, "ddiv", "ddiv (unsigned long long int, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_248, "ddiv", "ddiv (unsigned long long int, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_249, "ddiv", "ddiv (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_250, "ddiv", "ddiv (unsigned long long int, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_251, "ddiv", "ddiv (unsigned long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_252, "ddiv", "ddiv (unsigned long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_253, "ddiv", "ddiv (unsigned long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_254, "ddiv", "ddiv (unsigned long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_255, "ddiv", "ddiv (unsigned long long int, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_256, "ddiv", "ddiv (unsigned long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_257, "ddiv", "ddiv (unsigned long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_258, "ddiv", "ddiv (unsigned long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_259, "ddiv", "ddiv (unsigned long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_260, "ddiv", "ddiv (unsigned long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_261, "ddiv", "ddiv (unsigned long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_262, "ddiv", "ddiv (unsigned long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_263, "ddiv", "ddiv (unsigned long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_264, "ddiv", "ddiv (unsigned long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_265, "ddiv", "ddiv (unsigned long long int, bit_field)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_266, "ddiv", "ddiv (__int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_267, "ddiv", "ddiv (__int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_268, "ddiv", "ddiv (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_269, "ddiv", "ddiv (__int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_270, "ddiv", "ddiv (__int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_271, "ddiv", "ddiv (__int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_272, "ddiv", "ddiv (__int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_273, "ddiv", "ddiv (__int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_274, "ddiv", "ddiv (__int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_275, "ddiv", "ddiv (__int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_276, "ddiv", "ddiv (__int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_277, "ddiv", "ddiv (__int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_278, "ddiv", "ddiv (__int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_279, "ddiv", "ddiv (__int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_280, "ddiv", "ddiv (__int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_281, "ddiv", "ddiv (__int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_282, "ddiv", "ddiv (__int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_283, "ddiv", "ddiv (__int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_284, "ddiv", "ddiv (__int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_285, "ddiv", "ddiv (unsigned __int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_286, "ddiv", "ddiv (unsigned __int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_287, "ddiv", "ddiv (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_288, "ddiv", "ddiv (unsigned __int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_289, "ddiv", "ddiv (unsigned __int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_290, "ddiv", "ddiv (unsigned __int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_291, "ddiv", "ddiv (unsigned __int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_292, "ddiv", "ddiv (unsigned __int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_293, "ddiv", "ddiv (unsigned __int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_294, "ddiv", "ddiv (unsigned __int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_295, "ddiv", "ddiv (unsigned __int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_296, "ddiv", "ddiv (unsigned __int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_297, "ddiv", "ddiv (unsigned __int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_298, "ddiv", "ddiv (unsigned __int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_299, "ddiv", "ddiv (unsigned __int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_300, "ddiv", "ddiv (unsigned __int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_301, "ddiv", "ddiv (unsigned __int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_302, "ddiv", "ddiv (unsigned __int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_303, "ddiv", "ddiv (unsigned __int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_304, "ddiv", "ddiv (enum e, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_305, "ddiv", "ddiv (enum e, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_306, "ddiv", "ddiv (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_307, "ddiv", "ddiv (enum e, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_308, "ddiv", "ddiv (enum e, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_309, "ddiv", "ddiv (enum e, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_310, "ddiv", "ddiv (enum e, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_311, "ddiv", "ddiv (enum e, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_312, "ddiv", "ddiv (enum e, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_313, "ddiv", "ddiv (enum e, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_314, "ddiv", "ddiv (enum e, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_315, "ddiv", "ddiv (enum e, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_316, "ddiv", "ddiv (enum e, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_317, "ddiv", "ddiv (enum e, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_318, "ddiv", "ddiv (enum e, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_319, "ddiv", "ddiv (enum e, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_320, "ddiv", "ddiv (enum e, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_321, "ddiv", "ddiv (enum e, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_322, "ddiv", "ddiv (enum e, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_323, "ddiv", "ddiv (_Bool, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_324, "ddiv", "ddiv (_Bool, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_325, "ddiv", "ddiv (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_326, "ddiv", "ddiv (_Bool, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_327, "ddiv", "ddiv (_Bool, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_328, "ddiv", "ddiv (_Bool, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_329, "ddiv", "ddiv (_Bool, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_330, "ddiv", "ddiv (_Bool, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_331, "ddiv", "ddiv (_Bool, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_332, "ddiv", "ddiv (_Bool, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_333, "ddiv", "ddiv (_Bool, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_334, "ddiv", "ddiv (_Bool, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_335, "ddiv", "ddiv (_Bool, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_336, "ddiv", "ddiv (_Bool, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_337, "ddiv", "ddiv (_Bool, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_338, "ddiv", "ddiv (_Bool, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_339, "ddiv", "ddiv (_Bool, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_340, "ddiv", "ddiv (_Bool, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_341, "ddiv", "ddiv (_Bool, bit_field)", LDBL_MANT_DIG, 0 },
    { test_ddiv_342, "ddiv", "ddiv (bit_field, float)", LDBL_MANT_DIG, 0 },
    { test_ddiv_343, "ddiv", "ddiv (bit_field, double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_344, "ddiv", "ddiv (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_ddiv_345, "ddiv", "ddiv (bit_field, char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_346, "ddiv", "ddiv (bit_field, signed char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_347, "ddiv", "ddiv (bit_field, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_ddiv_348, "ddiv", "ddiv (bit_field, short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_349, "ddiv", "ddiv (bit_field, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_350, "ddiv", "ddiv (bit_field, int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_351, "ddiv", "ddiv (bit_field, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_352, "ddiv", "ddiv (bit_field, long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_353, "ddiv", "ddiv (bit_field, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_354, "ddiv", "ddiv (bit_field, long long int)", LDBL_MANT_DIG, 0 },
    { test_ddiv_355, "ddiv", "ddiv (bit_field, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_ddiv_356, "ddiv", "ddiv (bit_field, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_ddiv_357, "ddiv", "ddiv (bit_field, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_ddiv_358, "ddiv", "ddiv (bit_field, enum e)", LDBL_MANT_DIG, 0 },
    { test_ddiv_359, "ddiv", "ddiv (bit_field, _Bool)", LDBL_MANT_DIG, 0 },
    { test_ddiv_360, "ddiv", "ddiv (bit_field, bit_field)", LDBL_MANT_DIG, 0 },
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
