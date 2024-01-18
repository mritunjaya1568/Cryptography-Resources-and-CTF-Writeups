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
(fdiv) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fdiv";
  return 0;
}
float
(fdivl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fdiv";
  return 0;
}
static void
test_fdiv_0 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_float);
}
static void
test_fdiv_1 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_double);
}
static void
test_fdiv_2 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_long_double);
}
static void
test_fdiv_3 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_char);
}
static void
test_fdiv_4 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_signed_char);
}
static void
test_fdiv_5 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_unsigned_char);
}
static void
test_fdiv_6 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_short_int);
}
static void
test_fdiv_7 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fdiv_8 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_int);
}
static void
test_fdiv_9 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_unsigned_int);
}
static void
test_fdiv_10 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_long_int);
}
static void
test_fdiv_11 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fdiv_12 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_long_long_int);
}
static void
test_fdiv_13 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_14 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_15 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_16 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_enum_e);
}
static void
test_fdiv_17 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var__Bool);
}
static void
test_fdiv_18 (void)
{
  extern typeof (fdiv (vol_var_float, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_float, vol_var_bit_field);
}
static void
test_fdiv_19 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_float);
}
static void
test_fdiv_20 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_double);
}
static void
test_fdiv_21 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_long_double);
}
static void
test_fdiv_22 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_char);
}
static void
test_fdiv_23 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_signed_char);
}
static void
test_fdiv_24 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_unsigned_char);
}
static void
test_fdiv_25 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_short_int);
}
static void
test_fdiv_26 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fdiv_27 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_int);
}
static void
test_fdiv_28 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_unsigned_int);
}
static void
test_fdiv_29 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_long_int);
}
static void
test_fdiv_30 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fdiv_31 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_long_long_int);
}
static void
test_fdiv_32 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_33 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_34 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_35 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_enum_e);
}
static void
test_fdiv_36 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var__Bool);
}
static void
test_fdiv_37 (void)
{
  extern typeof (fdiv (vol_var_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_double, vol_var_bit_field);
}
static void
test_fdiv_38 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_float);
}
static void
test_fdiv_39 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_double);
}
static void
test_fdiv_40 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_long_double);
}
static void
test_fdiv_41 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_char);
}
static void
test_fdiv_42 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_signed_char);
}
static void
test_fdiv_43 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fdiv_44 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_short_int);
}
static void
test_fdiv_45 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fdiv_46 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_int);
}
static void
test_fdiv_47 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fdiv_48 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_long_int);
}
static void
test_fdiv_49 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fdiv_50 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fdiv_51 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_52 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_53 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_54 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_enum_e);
}
static void
test_fdiv_55 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var__Bool);
}
static void
test_fdiv_56 (void)
{
  extern typeof (fdiv (vol_var_long_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_double, vol_var_bit_field);
}
static void
test_fdiv_57 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_float);
}
static void
test_fdiv_58 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_double);
}
static void
test_fdiv_59 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_long_double);
}
static void
test_fdiv_60 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_char);
}
static void
test_fdiv_61 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_signed_char);
}
static void
test_fdiv_62 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_unsigned_char);
}
static void
test_fdiv_63 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_short_int);
}
static void
test_fdiv_64 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fdiv_65 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_int);
}
static void
test_fdiv_66 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_unsigned_int);
}
static void
test_fdiv_67 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_long_int);
}
static void
test_fdiv_68 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fdiv_69 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_long_long_int);
}
static void
test_fdiv_70 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_71 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_72 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_73 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_enum_e);
}
static void
test_fdiv_74 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var__Bool);
}
static void
test_fdiv_75 (void)
{
  extern typeof (fdiv (vol_var_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_char, vol_var_bit_field);
}
static void
test_fdiv_76 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_float);
}
static void
test_fdiv_77 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_double);
}
static void
test_fdiv_78 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_long_double);
}
static void
test_fdiv_79 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_char);
}
static void
test_fdiv_80 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fdiv_81 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fdiv_82 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_short_int);
}
static void
test_fdiv_83 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fdiv_84 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_int);
}
static void
test_fdiv_85 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fdiv_86 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_long_int);
}
static void
test_fdiv_87 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fdiv_88 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fdiv_89 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_90 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_91 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_92 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fdiv_93 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var__Bool);
}
static void
test_fdiv_94 (void)
{
  extern typeof (fdiv (vol_var_signed_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_signed_char, vol_var_bit_field);
}
static void
test_fdiv_95 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_float);
}
static void
test_fdiv_96 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_double);
}
static void
test_fdiv_97 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_fdiv_98 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_char);
}
static void
test_fdiv_99 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fdiv_100 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fdiv_101 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fdiv_102 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fdiv_103 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_int);
}
static void
test_fdiv_104 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fdiv_105 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fdiv_106 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fdiv_107 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fdiv_108 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_109 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_110 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_111 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fdiv_112 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fdiv_113 (void)
{
  extern typeof (fdiv (vol_var_unsigned_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_fdiv_114 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_float);
}
static void
test_fdiv_115 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_double);
}
static void
test_fdiv_116 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_long_double);
}
static void
test_fdiv_117 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_char);
}
static void
test_fdiv_118 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_signed_char);
}
static void
test_fdiv_119 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fdiv_120 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_short_int);
}
static void
test_fdiv_121 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_122 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_int);
}
static void
test_fdiv_123 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fdiv_124 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_long_int);
}
static void
test_fdiv_125 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_126 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fdiv_127 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_128 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_129 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_130 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_enum_e);
}
static void
test_fdiv_131 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var__Bool);
}
static void
test_fdiv_132 (void)
{
  extern typeof (fdiv (vol_var_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_short_int, vol_var_bit_field);
}
static void
test_fdiv_133 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_fdiv_134 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fdiv_135 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_fdiv_136 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fdiv_137 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fdiv_138 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fdiv_139 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fdiv_140 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_141 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fdiv_142 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fdiv_143 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fdiv_144 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_145 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fdiv_146 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_147 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_148 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_149 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fdiv_150 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fdiv_151 (void)
{
  extern typeof (fdiv (vol_var_unsigned_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_fdiv_152 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_float);
}
static void
test_fdiv_153 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_double);
}
static void
test_fdiv_154 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_long_double);
}
static void
test_fdiv_155 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_char);
}
static void
test_fdiv_156 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_signed_char);
}
static void
test_fdiv_157 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_unsigned_char);
}
static void
test_fdiv_158 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_short_int);
}
static void
test_fdiv_159 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_160 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_int);
}
static void
test_fdiv_161 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_unsigned_int);
}
static void
test_fdiv_162 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_long_int);
}
static void
test_fdiv_163 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_164 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_long_long_int);
}
static void
test_fdiv_165 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_166 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_167 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_168 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_enum_e);
}
static void
test_fdiv_169 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var__Bool);
}
static void
test_fdiv_170 (void)
{
  extern typeof (fdiv (vol_var_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_int, vol_var_bit_field);
}
static void
test_fdiv_171 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_float);
}
static void
test_fdiv_172 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_double);
}
static void
test_fdiv_173 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_fdiv_174 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_char);
}
static void
test_fdiv_175 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fdiv_176 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fdiv_177 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fdiv_178 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_179 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_int);
}
static void
test_fdiv_180 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fdiv_181 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fdiv_182 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_183 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fdiv_184 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_185 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_186 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_187 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fdiv_188 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fdiv_189 (void)
{
  extern typeof (fdiv (vol_var_unsigned_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_fdiv_190 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_float);
}
static void
test_fdiv_191 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_double);
}
static void
test_fdiv_192 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_long_double);
}
static void
test_fdiv_193 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_char);
}
static void
test_fdiv_194 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_signed_char);
}
static void
test_fdiv_195 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fdiv_196 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_short_int);
}
static void
test_fdiv_197 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_198 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_int);
}
static void
test_fdiv_199 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fdiv_200 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_long_int);
}
static void
test_fdiv_201 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_202 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fdiv_203 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_204 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_205 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_206 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_enum_e);
}
static void
test_fdiv_207 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var__Bool);
}
static void
test_fdiv_208 (void)
{
  extern typeof (fdiv (vol_var_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_int, vol_var_bit_field);
}
static void
test_fdiv_209 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_fdiv_210 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fdiv_211 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_fdiv_212 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fdiv_213 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fdiv_214 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fdiv_215 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fdiv_216 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_217 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fdiv_218 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fdiv_219 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fdiv_220 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_221 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fdiv_222 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_223 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_224 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_225 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fdiv_226 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fdiv_227 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_fdiv_228 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_float);
}
static void
test_fdiv_229 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_double);
}
static void
test_fdiv_230 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_long_double);
}
static void
test_fdiv_231 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_char);
}
static void
test_fdiv_232 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fdiv_233 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fdiv_234 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fdiv_235 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_236 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_int);
}
static void
test_fdiv_237 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fdiv_238 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fdiv_239 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_240 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fdiv_241 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_242 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_243 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_244 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fdiv_245 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fdiv_246 (void)
{
  extern typeof (fdiv (vol_var_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_fdiv_247 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_fdiv_248 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fdiv_249 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_fdiv_250 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fdiv_251 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fdiv_252 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fdiv_253 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fdiv_254 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fdiv_255 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fdiv_256 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fdiv_257 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fdiv_258 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fdiv_259 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fdiv_260 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_261 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_262 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_263 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fdiv_264 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fdiv_265 (void)
{
  extern typeof (fdiv (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_266 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_267 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_268 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_269 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_270 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_271 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_272 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_273 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_274 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_275 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_276 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_277 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_278 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_279 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_280 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_281 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_282 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_283 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_284 (void)
{
  extern typeof (fdiv (vol_var___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_285 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_286 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_287 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_288 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_289 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_290 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_291 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_292 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_293 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_294 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_295 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_296 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_297 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_298 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_299 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_300 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_301 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_302 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_303 (void)
{
  extern typeof (fdiv (vol_var_unsigned___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_fdiv_304 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_float);
}
static void
test_fdiv_305 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_double);
}
static void
test_fdiv_306 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_long_double);
}
static void
test_fdiv_307 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_char);
}
static void
test_fdiv_308 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fdiv_309 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fdiv_310 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_short_int);
}
static void
test_fdiv_311 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fdiv_312 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_int);
}
static void
test_fdiv_313 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fdiv_314 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_long_int);
}
static void
test_fdiv_315 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fdiv_316 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fdiv_317 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_318 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_319 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_320 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fdiv_321 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var__Bool);
}
static void
test_fdiv_322 (void)
{
  extern typeof (fdiv (vol_var_enum_e, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_enum_e, vol_var_bit_field);
}
static void
test_fdiv_323 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_float);
}
static void
test_fdiv_324 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_double);
}
static void
test_fdiv_325 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_long_double);
}
static void
test_fdiv_326 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_char);
}
static void
test_fdiv_327 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_signed_char);
}
static void
test_fdiv_328 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fdiv_329 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_short_int);
}
static void
test_fdiv_330 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fdiv_331 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_int);
}
static void
test_fdiv_332 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fdiv_333 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_long_int);
}
static void
test_fdiv_334 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fdiv_335 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fdiv_336 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_337 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_338 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_339 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_enum_e);
}
static void
test_fdiv_340 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var__Bool);
}
static void
test_fdiv_341 (void)
{
  extern typeof (fdiv (vol_var__Bool, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var__Bool, vol_var_bit_field);
}
static void
test_fdiv_342 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_float);
}
static void
test_fdiv_343 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_double);
}
static void
test_fdiv_344 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_long_double);
}
static void
test_fdiv_345 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_char);
}
static void
test_fdiv_346 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fdiv_347 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fdiv_348 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_short_int);
}
static void
test_fdiv_349 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fdiv_350 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_int);
}
static void
test_fdiv_351 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fdiv_352 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_long_int);
}
static void
test_fdiv_353 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fdiv_354 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fdiv_355 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdiv_356 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdiv_357 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fdiv_358 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fdiv_359 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var__Bool);
}
static void
test_fdiv_360 (void)
{
  extern typeof (fdiv (vol_var_bit_field, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fdiv (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_fdiv_0, "fdiv", "fdiv (float, float)", DBL_MANT_DIG, FLT_MANT_DIG },
    { test_fdiv_1, "fdiv", "fdiv (float, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fdiv_2, "fdiv", "fdiv (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fdiv_3, "fdiv", "fdiv (float, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_4, "fdiv", "fdiv (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_5, "fdiv", "fdiv (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_6, "fdiv", "fdiv (float, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_7, "fdiv", "fdiv (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_8, "fdiv", "fdiv (float, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_9, "fdiv", "fdiv (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_10, "fdiv", "fdiv (float, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_11, "fdiv", "fdiv (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_12, "fdiv", "fdiv (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_13, "fdiv", "fdiv (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_14, "fdiv", "fdiv (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_15, "fdiv", "fdiv (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_16, "fdiv", "fdiv (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_17, "fdiv", "fdiv (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_18, "fdiv", "fdiv (float, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_19, "fdiv", "fdiv (double, float)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fdiv_20, "fdiv", "fdiv (double, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fdiv_21, "fdiv", "fdiv (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fdiv_22, "fdiv", "fdiv (double, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_23, "fdiv", "fdiv (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_24, "fdiv", "fdiv (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_25, "fdiv", "fdiv (double, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_26, "fdiv", "fdiv (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_27, "fdiv", "fdiv (double, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_28, "fdiv", "fdiv (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_29, "fdiv", "fdiv (double, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_30, "fdiv", "fdiv (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_31, "fdiv", "fdiv (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_32, "fdiv", "fdiv (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_33, "fdiv", "fdiv (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_34, "fdiv", "fdiv (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_35, "fdiv", "fdiv (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_36, "fdiv", "fdiv (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_37, "fdiv", "fdiv (double, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_38, "fdiv", "fdiv (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fdiv_39, "fdiv", "fdiv (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fdiv_40, "fdiv", "fdiv (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fdiv_41, "fdiv", "fdiv (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fdiv_42, "fdiv", "fdiv (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fdiv_43, "fdiv", "fdiv (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fdiv_44, "fdiv", "fdiv (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fdiv_45, "fdiv", "fdiv (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fdiv_46, "fdiv", "fdiv (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fdiv_47, "fdiv", "fdiv (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fdiv_48, "fdiv", "fdiv (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fdiv_49, "fdiv", "fdiv (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fdiv_50, "fdiv", "fdiv (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fdiv_51, "fdiv", "fdiv (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_52, "fdiv", "fdiv (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_53, "fdiv", "fdiv (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fdiv_54, "fdiv", "fdiv (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fdiv_55, "fdiv", "fdiv (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fdiv_56, "fdiv", "fdiv (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_fdiv_57, "fdiv", "fdiv (char, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_58, "fdiv", "fdiv (char, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_59, "fdiv", "fdiv (char, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_60, "fdiv", "fdiv (char, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_61, "fdiv", "fdiv (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_62, "fdiv", "fdiv (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_63, "fdiv", "fdiv (char, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_64, "fdiv", "fdiv (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_65, "fdiv", "fdiv (char, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_66, "fdiv", "fdiv (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_67, "fdiv", "fdiv (char, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_68, "fdiv", "fdiv (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_69, "fdiv", "fdiv (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_70, "fdiv", "fdiv (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_71, "fdiv", "fdiv (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_72, "fdiv", "fdiv (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_73, "fdiv", "fdiv (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_74, "fdiv", "fdiv (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_75, "fdiv", "fdiv (char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_76, "fdiv", "fdiv (signed char, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_77, "fdiv", "fdiv (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_78, "fdiv", "fdiv (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_79, "fdiv", "fdiv (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_80, "fdiv", "fdiv (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_81, "fdiv", "fdiv (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_82, "fdiv", "fdiv (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_83, "fdiv", "fdiv (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_84, "fdiv", "fdiv (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_85, "fdiv", "fdiv (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_86, "fdiv", "fdiv (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_87, "fdiv", "fdiv (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_88, "fdiv", "fdiv (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_89, "fdiv", "fdiv (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_90, "fdiv", "fdiv (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_91, "fdiv", "fdiv (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_92, "fdiv", "fdiv (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_93, "fdiv", "fdiv (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_94, "fdiv", "fdiv (signed char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_95, "fdiv", "fdiv (unsigned char, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_96, "fdiv", "fdiv (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_97, "fdiv", "fdiv (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_98, "fdiv", "fdiv (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_99, "fdiv", "fdiv (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_100, "fdiv", "fdiv (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_101, "fdiv", "fdiv (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_102, "fdiv", "fdiv (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_103, "fdiv", "fdiv (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_104, "fdiv", "fdiv (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_105, "fdiv", "fdiv (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_106, "fdiv", "fdiv (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_107, "fdiv", "fdiv (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_108, "fdiv", "fdiv (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_109, "fdiv", "fdiv (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_110, "fdiv", "fdiv (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_111, "fdiv", "fdiv (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_112, "fdiv", "fdiv (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_113, "fdiv", "fdiv (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_114, "fdiv", "fdiv (short int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_115, "fdiv", "fdiv (short int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_116, "fdiv", "fdiv (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_117, "fdiv", "fdiv (short int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_118, "fdiv", "fdiv (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_119, "fdiv", "fdiv (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_120, "fdiv", "fdiv (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_121, "fdiv", "fdiv (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_122, "fdiv", "fdiv (short int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_123, "fdiv", "fdiv (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_124, "fdiv", "fdiv (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_125, "fdiv", "fdiv (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_126, "fdiv", "fdiv (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_127, "fdiv", "fdiv (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_128, "fdiv", "fdiv (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_129, "fdiv", "fdiv (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_130, "fdiv", "fdiv (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_131, "fdiv", "fdiv (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_132, "fdiv", "fdiv (short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_133, "fdiv", "fdiv (unsigned short int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_134, "fdiv", "fdiv (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_135, "fdiv", "fdiv (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_136, "fdiv", "fdiv (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_137, "fdiv", "fdiv (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_138, "fdiv", "fdiv (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_139, "fdiv", "fdiv (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_140, "fdiv", "fdiv (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_141, "fdiv", "fdiv (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_142, "fdiv", "fdiv (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_143, "fdiv", "fdiv (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_144, "fdiv", "fdiv (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_145, "fdiv", "fdiv (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_146, "fdiv", "fdiv (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_147, "fdiv", "fdiv (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_148, "fdiv", "fdiv (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_149, "fdiv", "fdiv (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_150, "fdiv", "fdiv (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_151, "fdiv", "fdiv (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_152, "fdiv", "fdiv (int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_153, "fdiv", "fdiv (int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_154, "fdiv", "fdiv (int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_155, "fdiv", "fdiv (int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_156, "fdiv", "fdiv (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_157, "fdiv", "fdiv (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_158, "fdiv", "fdiv (int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_159, "fdiv", "fdiv (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_160, "fdiv", "fdiv (int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_161, "fdiv", "fdiv (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_162, "fdiv", "fdiv (int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_163, "fdiv", "fdiv (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_164, "fdiv", "fdiv (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_165, "fdiv", "fdiv (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_166, "fdiv", "fdiv (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_167, "fdiv", "fdiv (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_168, "fdiv", "fdiv (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_169, "fdiv", "fdiv (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_170, "fdiv", "fdiv (int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_171, "fdiv", "fdiv (unsigned int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_172, "fdiv", "fdiv (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_173, "fdiv", "fdiv (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_174, "fdiv", "fdiv (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_175, "fdiv", "fdiv (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_176, "fdiv", "fdiv (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_177, "fdiv", "fdiv (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_178, "fdiv", "fdiv (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_179, "fdiv", "fdiv (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_180, "fdiv", "fdiv (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_181, "fdiv", "fdiv (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_182, "fdiv", "fdiv (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_183, "fdiv", "fdiv (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_184, "fdiv", "fdiv (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_185, "fdiv", "fdiv (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_186, "fdiv", "fdiv (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_187, "fdiv", "fdiv (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_188, "fdiv", "fdiv (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_189, "fdiv", "fdiv (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_190, "fdiv", "fdiv (long int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_191, "fdiv", "fdiv (long int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_192, "fdiv", "fdiv (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_193, "fdiv", "fdiv (long int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_194, "fdiv", "fdiv (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_195, "fdiv", "fdiv (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_196, "fdiv", "fdiv (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_197, "fdiv", "fdiv (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_198, "fdiv", "fdiv (long int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_199, "fdiv", "fdiv (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_200, "fdiv", "fdiv (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_201, "fdiv", "fdiv (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_202, "fdiv", "fdiv (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_203, "fdiv", "fdiv (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_204, "fdiv", "fdiv (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_205, "fdiv", "fdiv (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_206, "fdiv", "fdiv (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_207, "fdiv", "fdiv (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_208, "fdiv", "fdiv (long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_209, "fdiv", "fdiv (unsigned long int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_210, "fdiv", "fdiv (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_211, "fdiv", "fdiv (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_212, "fdiv", "fdiv (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_213, "fdiv", "fdiv (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_214, "fdiv", "fdiv (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_215, "fdiv", "fdiv (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_216, "fdiv", "fdiv (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_217, "fdiv", "fdiv (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_218, "fdiv", "fdiv (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_219, "fdiv", "fdiv (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_220, "fdiv", "fdiv (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_221, "fdiv", "fdiv (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_222, "fdiv", "fdiv (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_223, "fdiv", "fdiv (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_224, "fdiv", "fdiv (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_225, "fdiv", "fdiv (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_226, "fdiv", "fdiv (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_227, "fdiv", "fdiv (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_228, "fdiv", "fdiv (long long int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_229, "fdiv", "fdiv (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_230, "fdiv", "fdiv (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_231, "fdiv", "fdiv (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_232, "fdiv", "fdiv (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_233, "fdiv", "fdiv (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_234, "fdiv", "fdiv (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_235, "fdiv", "fdiv (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_236, "fdiv", "fdiv (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_237, "fdiv", "fdiv (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_238, "fdiv", "fdiv (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_239, "fdiv", "fdiv (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_240, "fdiv", "fdiv (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_241, "fdiv", "fdiv (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_242, "fdiv", "fdiv (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_243, "fdiv", "fdiv (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_244, "fdiv", "fdiv (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_245, "fdiv", "fdiv (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_246, "fdiv", "fdiv (long long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_247, "fdiv", "fdiv (unsigned long long int, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_248, "fdiv", "fdiv (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_249, "fdiv", "fdiv (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_250, "fdiv", "fdiv (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_251, "fdiv", "fdiv (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_252, "fdiv", "fdiv (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_253, "fdiv", "fdiv (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_254, "fdiv", "fdiv (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_255, "fdiv", "fdiv (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_256, "fdiv", "fdiv (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_257, "fdiv", "fdiv (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_258, "fdiv", "fdiv (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_259, "fdiv", "fdiv (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_260, "fdiv", "fdiv (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_261, "fdiv", "fdiv (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_262, "fdiv", "fdiv (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_263, "fdiv", "fdiv (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_264, "fdiv", "fdiv (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_265, "fdiv", "fdiv (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_266, "fdiv", "fdiv (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_267, "fdiv", "fdiv (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_268, "fdiv", "fdiv (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_269, "fdiv", "fdiv (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_270, "fdiv", "fdiv (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_271, "fdiv", "fdiv (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_272, "fdiv", "fdiv (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_273, "fdiv", "fdiv (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_274, "fdiv", "fdiv (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_275, "fdiv", "fdiv (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_276, "fdiv", "fdiv (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_277, "fdiv", "fdiv (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_278, "fdiv", "fdiv (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_279, "fdiv", "fdiv (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_280, "fdiv", "fdiv (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_281, "fdiv", "fdiv (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_282, "fdiv", "fdiv (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_283, "fdiv", "fdiv (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_284, "fdiv", "fdiv (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_285, "fdiv", "fdiv (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_286, "fdiv", "fdiv (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_287, "fdiv", "fdiv (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_288, "fdiv", "fdiv (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_289, "fdiv", "fdiv (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_290, "fdiv", "fdiv (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_291, "fdiv", "fdiv (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_292, "fdiv", "fdiv (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_293, "fdiv", "fdiv (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_294, "fdiv", "fdiv (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_295, "fdiv", "fdiv (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_296, "fdiv", "fdiv (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_297, "fdiv", "fdiv (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_298, "fdiv", "fdiv (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_299, "fdiv", "fdiv (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_300, "fdiv", "fdiv (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_301, "fdiv", "fdiv (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_302, "fdiv", "fdiv (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_303, "fdiv", "fdiv (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_304, "fdiv", "fdiv (enum e, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_305, "fdiv", "fdiv (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_306, "fdiv", "fdiv (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_307, "fdiv", "fdiv (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_308, "fdiv", "fdiv (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_309, "fdiv", "fdiv (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_310, "fdiv", "fdiv (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_311, "fdiv", "fdiv (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_312, "fdiv", "fdiv (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_313, "fdiv", "fdiv (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_314, "fdiv", "fdiv (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_315, "fdiv", "fdiv (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_316, "fdiv", "fdiv (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_317, "fdiv", "fdiv (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_318, "fdiv", "fdiv (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_319, "fdiv", "fdiv (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_320, "fdiv", "fdiv (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_321, "fdiv", "fdiv (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_322, "fdiv", "fdiv (enum e, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_323, "fdiv", "fdiv (_Bool, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_324, "fdiv", "fdiv (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_325, "fdiv", "fdiv (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_326, "fdiv", "fdiv (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_327, "fdiv", "fdiv (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_328, "fdiv", "fdiv (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_329, "fdiv", "fdiv (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_330, "fdiv", "fdiv (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_331, "fdiv", "fdiv (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_332, "fdiv", "fdiv (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_333, "fdiv", "fdiv (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_334, "fdiv", "fdiv (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_335, "fdiv", "fdiv (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_336, "fdiv", "fdiv (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_337, "fdiv", "fdiv (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_338, "fdiv", "fdiv (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_339, "fdiv", "fdiv (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_340, "fdiv", "fdiv (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_341, "fdiv", "fdiv (_Bool, bit_field)", DBL_MANT_DIG, 0 },
    { test_fdiv_342, "fdiv", "fdiv (bit_field, float)", DBL_MANT_DIG, 0 },
    { test_fdiv_343, "fdiv", "fdiv (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fdiv_344, "fdiv", "fdiv (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_fdiv_345, "fdiv", "fdiv (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fdiv_346, "fdiv", "fdiv (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fdiv_347, "fdiv", "fdiv (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdiv_348, "fdiv", "fdiv (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_349, "fdiv", "fdiv (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdiv_350, "fdiv", "fdiv (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fdiv_351, "fdiv", "fdiv (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdiv_352, "fdiv", "fdiv (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_353, "fdiv", "fdiv (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_354, "fdiv", "fdiv (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fdiv_355, "fdiv", "fdiv (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdiv_356, "fdiv", "fdiv (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdiv_357, "fdiv", "fdiv (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdiv_358, "fdiv", "fdiv (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fdiv_359, "fdiv", "fdiv (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdiv_360, "fdiv", "fdiv (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
