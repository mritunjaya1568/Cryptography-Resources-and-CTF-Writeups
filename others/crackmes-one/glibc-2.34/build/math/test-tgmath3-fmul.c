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
(fmul) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fmul";
  return 0;
}
float
(fmull) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fmul";
  return 0;
}
static void
test_fmul_0 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_float);
}
static void
test_fmul_1 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_double);
}
static void
test_fmul_2 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_long_double);
}
static void
test_fmul_3 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_char);
}
static void
test_fmul_4 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_signed_char);
}
static void
test_fmul_5 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_unsigned_char);
}
static void
test_fmul_6 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_short_int);
}
static void
test_fmul_7 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fmul_8 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_int);
}
static void
test_fmul_9 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_unsigned_int);
}
static void
test_fmul_10 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_long_int);
}
static void
test_fmul_11 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fmul_12 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_long_long_int);
}
static void
test_fmul_13 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_14 (void)
{
  extern typeof (fmul (vol_var_float, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_15 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_16 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_enum_e);
}
static void
test_fmul_17 (void)
{
  extern typeof (fmul (vol_var_float, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var__Bool);
}
static void
test_fmul_18 (void)
{
  extern typeof (fmul (vol_var_float, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_float, vol_var_bit_field);
}
static void
test_fmul_19 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_float);
}
static void
test_fmul_20 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_double);
}
static void
test_fmul_21 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_long_double);
}
static void
test_fmul_22 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_char);
}
static void
test_fmul_23 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_signed_char);
}
static void
test_fmul_24 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_unsigned_char);
}
static void
test_fmul_25 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_short_int);
}
static void
test_fmul_26 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fmul_27 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_int);
}
static void
test_fmul_28 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_unsigned_int);
}
static void
test_fmul_29 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_long_int);
}
static void
test_fmul_30 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fmul_31 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_long_long_int);
}
static void
test_fmul_32 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_33 (void)
{
  extern typeof (fmul (vol_var_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_34 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_35 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_enum_e);
}
static void
test_fmul_36 (void)
{
  extern typeof (fmul (vol_var_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var__Bool);
}
static void
test_fmul_37 (void)
{
  extern typeof (fmul (vol_var_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_double, vol_var_bit_field);
}
static void
test_fmul_38 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_float);
}
static void
test_fmul_39 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_double);
}
static void
test_fmul_40 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_long_double);
}
static void
test_fmul_41 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_char);
}
static void
test_fmul_42 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_signed_char);
}
static void
test_fmul_43 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fmul_44 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_short_int);
}
static void
test_fmul_45 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fmul_46 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_int);
}
static void
test_fmul_47 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fmul_48 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_long_int);
}
static void
test_fmul_49 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fmul_50 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fmul_51 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_52 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_53 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_54 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_enum_e);
}
static void
test_fmul_55 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var__Bool);
}
static void
test_fmul_56 (void)
{
  extern typeof (fmul (vol_var_long_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_double, vol_var_bit_field);
}
static void
test_fmul_57 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_float);
}
static void
test_fmul_58 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_double);
}
static void
test_fmul_59 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_long_double);
}
static void
test_fmul_60 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_char);
}
static void
test_fmul_61 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_signed_char);
}
static void
test_fmul_62 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_unsigned_char);
}
static void
test_fmul_63 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_short_int);
}
static void
test_fmul_64 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fmul_65 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_int);
}
static void
test_fmul_66 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_unsigned_int);
}
static void
test_fmul_67 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_long_int);
}
static void
test_fmul_68 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fmul_69 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_long_long_int);
}
static void
test_fmul_70 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_71 (void)
{
  extern typeof (fmul (vol_var_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_72 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_73 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_enum_e);
}
static void
test_fmul_74 (void)
{
  extern typeof (fmul (vol_var_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var__Bool);
}
static void
test_fmul_75 (void)
{
  extern typeof (fmul (vol_var_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_char, vol_var_bit_field);
}
static void
test_fmul_76 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_float);
}
static void
test_fmul_77 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_double);
}
static void
test_fmul_78 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_long_double);
}
static void
test_fmul_79 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_char);
}
static void
test_fmul_80 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fmul_81 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fmul_82 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_short_int);
}
static void
test_fmul_83 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fmul_84 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_int);
}
static void
test_fmul_85 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fmul_86 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_long_int);
}
static void
test_fmul_87 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fmul_88 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fmul_89 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_90 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_91 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_92 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fmul_93 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var__Bool);
}
static void
test_fmul_94 (void)
{
  extern typeof (fmul (vol_var_signed_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_signed_char, vol_var_bit_field);
}
static void
test_fmul_95 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_float);
}
static void
test_fmul_96 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_double);
}
static void
test_fmul_97 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_fmul_98 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_char);
}
static void
test_fmul_99 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fmul_100 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fmul_101 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fmul_102 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fmul_103 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_int);
}
static void
test_fmul_104 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fmul_105 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fmul_106 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fmul_107 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fmul_108 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_109 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_110 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_111 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fmul_112 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fmul_113 (void)
{
  extern typeof (fmul (vol_var_unsigned_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_fmul_114 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_float);
}
static void
test_fmul_115 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_double);
}
static void
test_fmul_116 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_long_double);
}
static void
test_fmul_117 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_char);
}
static void
test_fmul_118 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_signed_char);
}
static void
test_fmul_119 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fmul_120 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_short_int);
}
static void
test_fmul_121 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fmul_122 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_int);
}
static void
test_fmul_123 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fmul_124 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_long_int);
}
static void
test_fmul_125 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fmul_126 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fmul_127 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_128 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_129 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_130 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_enum_e);
}
static void
test_fmul_131 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var__Bool);
}
static void
test_fmul_132 (void)
{
  extern typeof (fmul (vol_var_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_short_int, vol_var_bit_field);
}
static void
test_fmul_133 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_fmul_134 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fmul_135 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_fmul_136 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fmul_137 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fmul_138 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fmul_139 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fmul_140 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fmul_141 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fmul_142 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fmul_143 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fmul_144 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fmul_145 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fmul_146 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_147 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_148 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_149 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fmul_150 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fmul_151 (void)
{
  extern typeof (fmul (vol_var_unsigned_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_fmul_152 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_float);
}
static void
test_fmul_153 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_double);
}
static void
test_fmul_154 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_long_double);
}
static void
test_fmul_155 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_char);
}
static void
test_fmul_156 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_signed_char);
}
static void
test_fmul_157 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_unsigned_char);
}
static void
test_fmul_158 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_short_int);
}
static void
test_fmul_159 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fmul_160 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_int);
}
static void
test_fmul_161 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_unsigned_int);
}
static void
test_fmul_162 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_long_int);
}
static void
test_fmul_163 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fmul_164 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_long_long_int);
}
static void
test_fmul_165 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_166 (void)
{
  extern typeof (fmul (vol_var_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_167 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_168 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_enum_e);
}
static void
test_fmul_169 (void)
{
  extern typeof (fmul (vol_var_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var__Bool);
}
static void
test_fmul_170 (void)
{
  extern typeof (fmul (vol_var_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_int, vol_var_bit_field);
}
static void
test_fmul_171 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_float);
}
static void
test_fmul_172 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_double);
}
static void
test_fmul_173 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_fmul_174 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_char);
}
static void
test_fmul_175 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fmul_176 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fmul_177 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fmul_178 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fmul_179 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_int);
}
static void
test_fmul_180 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fmul_181 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fmul_182 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fmul_183 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fmul_184 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_185 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_186 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_187 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fmul_188 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fmul_189 (void)
{
  extern typeof (fmul (vol_var_unsigned_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_fmul_190 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_float);
}
static void
test_fmul_191 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_double);
}
static void
test_fmul_192 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_long_double);
}
static void
test_fmul_193 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_char);
}
static void
test_fmul_194 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_signed_char);
}
static void
test_fmul_195 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fmul_196 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_short_int);
}
static void
test_fmul_197 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fmul_198 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_int);
}
static void
test_fmul_199 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fmul_200 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_long_int);
}
static void
test_fmul_201 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fmul_202 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fmul_203 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_204 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_205 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_206 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_enum_e);
}
static void
test_fmul_207 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var__Bool);
}
static void
test_fmul_208 (void)
{
  extern typeof (fmul (vol_var_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_int, vol_var_bit_field);
}
static void
test_fmul_209 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_fmul_210 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fmul_211 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_fmul_212 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fmul_213 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fmul_214 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fmul_215 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fmul_216 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fmul_217 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fmul_218 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fmul_219 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fmul_220 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fmul_221 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fmul_222 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_223 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_224 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_225 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fmul_226 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fmul_227 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_fmul_228 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_float);
}
static void
test_fmul_229 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_double);
}
static void
test_fmul_230 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_long_double);
}
static void
test_fmul_231 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_char);
}
static void
test_fmul_232 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fmul_233 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fmul_234 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fmul_235 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmul_236 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_int);
}
static void
test_fmul_237 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fmul_238 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fmul_239 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmul_240 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fmul_241 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_242 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_243 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_244 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fmul_245 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fmul_246 (void)
{
  extern typeof (fmul (vol_var_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_fmul_247 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_fmul_248 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fmul_249 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_fmul_250 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fmul_251 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fmul_252 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fmul_253 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fmul_254 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmul_255 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fmul_256 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fmul_257 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fmul_258 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmul_259 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fmul_260 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_261 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_262 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_263 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fmul_264 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fmul_265 (void)
{
  extern typeof (fmul (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_266 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_267 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_268 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_269 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_270 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_271 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_272 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_273 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_274 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_275 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_276 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_277 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_278 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_279 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_280 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_281 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_282 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_283 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_284 (void)
{
  extern typeof (fmul (vol_var___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_285 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_286 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_287 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_288 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_289 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_290 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_291 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_292 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_293 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_294 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_295 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_296 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_297 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_298 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_299 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_300 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_301 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_302 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_303 (void)
{
  extern typeof (fmul (vol_var_unsigned___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_fmul_304 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_float);
}
static void
test_fmul_305 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_double);
}
static void
test_fmul_306 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_long_double);
}
static void
test_fmul_307 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_char);
}
static void
test_fmul_308 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fmul_309 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fmul_310 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_short_int);
}
static void
test_fmul_311 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fmul_312 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_int);
}
static void
test_fmul_313 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fmul_314 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_long_int);
}
static void
test_fmul_315 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fmul_316 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fmul_317 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_318 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_319 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_320 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fmul_321 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var__Bool);
}
static void
test_fmul_322 (void)
{
  extern typeof (fmul (vol_var_enum_e, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_enum_e, vol_var_bit_field);
}
static void
test_fmul_323 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_float);
}
static void
test_fmul_324 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_double);
}
static void
test_fmul_325 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_long_double);
}
static void
test_fmul_326 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_char);
}
static void
test_fmul_327 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_signed_char);
}
static void
test_fmul_328 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fmul_329 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_short_int);
}
static void
test_fmul_330 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fmul_331 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_int);
}
static void
test_fmul_332 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fmul_333 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_long_int);
}
static void
test_fmul_334 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fmul_335 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fmul_336 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_337 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_338 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_339 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_enum_e);
}
static void
test_fmul_340 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var__Bool);
}
static void
test_fmul_341 (void)
{
  extern typeof (fmul (vol_var__Bool, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var__Bool, vol_var_bit_field);
}
static void
test_fmul_342 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_float);
}
static void
test_fmul_343 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_double);
}
static void
test_fmul_344 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_long_double);
}
static void
test_fmul_345 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_char);
}
static void
test_fmul_346 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fmul_347 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fmul_348 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_short_int);
}
static void
test_fmul_349 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fmul_350 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_int);
}
static void
test_fmul_351 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fmul_352 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_long_int);
}
static void
test_fmul_353 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fmul_354 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fmul_355 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmul_356 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmul_357 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fmul_358 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fmul_359 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var__Bool);
}
static void
test_fmul_360 (void)
{
  extern typeof (fmul (vol_var_bit_field, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fmul (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_fmul_0, "fmul", "fmul (float, float)", DBL_MANT_DIG, FLT_MANT_DIG },
    { test_fmul_1, "fmul", "fmul (float, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fmul_2, "fmul", "fmul (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fmul_3, "fmul", "fmul (float, char)", DBL_MANT_DIG, 0 },
    { test_fmul_4, "fmul", "fmul (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_5, "fmul", "fmul (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_6, "fmul", "fmul (float, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_7, "fmul", "fmul (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_8, "fmul", "fmul (float, int)", DBL_MANT_DIG, 0 },
    { test_fmul_9, "fmul", "fmul (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_10, "fmul", "fmul (float, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_11, "fmul", "fmul (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_12, "fmul", "fmul (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_13, "fmul", "fmul (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_14, "fmul", "fmul (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_15, "fmul", "fmul (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_16, "fmul", "fmul (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_17, "fmul", "fmul (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_18, "fmul", "fmul (float, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_19, "fmul", "fmul (double, float)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fmul_20, "fmul", "fmul (double, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fmul_21, "fmul", "fmul (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fmul_22, "fmul", "fmul (double, char)", DBL_MANT_DIG, 0 },
    { test_fmul_23, "fmul", "fmul (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_24, "fmul", "fmul (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_25, "fmul", "fmul (double, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_26, "fmul", "fmul (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_27, "fmul", "fmul (double, int)", DBL_MANT_DIG, 0 },
    { test_fmul_28, "fmul", "fmul (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_29, "fmul", "fmul (double, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_30, "fmul", "fmul (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_31, "fmul", "fmul (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_32, "fmul", "fmul (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_33, "fmul", "fmul (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_34, "fmul", "fmul (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_35, "fmul", "fmul (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_36, "fmul", "fmul (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_37, "fmul", "fmul (double, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_38, "fmul", "fmul (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fmul_39, "fmul", "fmul (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fmul_40, "fmul", "fmul (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fmul_41, "fmul", "fmul (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fmul_42, "fmul", "fmul (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fmul_43, "fmul", "fmul (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fmul_44, "fmul", "fmul (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fmul_45, "fmul", "fmul (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fmul_46, "fmul", "fmul (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fmul_47, "fmul", "fmul (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fmul_48, "fmul", "fmul (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fmul_49, "fmul", "fmul (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fmul_50, "fmul", "fmul (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fmul_51, "fmul", "fmul (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_52, "fmul", "fmul (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_53, "fmul", "fmul (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmul_54, "fmul", "fmul (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fmul_55, "fmul", "fmul (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fmul_56, "fmul", "fmul (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_fmul_57, "fmul", "fmul (char, float)", DBL_MANT_DIG, 0 },
    { test_fmul_58, "fmul", "fmul (char, double)", DBL_MANT_DIG, 0 },
    { test_fmul_59, "fmul", "fmul (char, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_60, "fmul", "fmul (char, char)", DBL_MANT_DIG, 0 },
    { test_fmul_61, "fmul", "fmul (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_62, "fmul", "fmul (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_63, "fmul", "fmul (char, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_64, "fmul", "fmul (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_65, "fmul", "fmul (char, int)", DBL_MANT_DIG, 0 },
    { test_fmul_66, "fmul", "fmul (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_67, "fmul", "fmul (char, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_68, "fmul", "fmul (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_69, "fmul", "fmul (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_70, "fmul", "fmul (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_71, "fmul", "fmul (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_72, "fmul", "fmul (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_73, "fmul", "fmul (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_74, "fmul", "fmul (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_75, "fmul", "fmul (char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_76, "fmul", "fmul (signed char, float)", DBL_MANT_DIG, 0 },
    { test_fmul_77, "fmul", "fmul (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fmul_78, "fmul", "fmul (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_79, "fmul", "fmul (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fmul_80, "fmul", "fmul (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_81, "fmul", "fmul (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_82, "fmul", "fmul (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_83, "fmul", "fmul (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_84, "fmul", "fmul (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fmul_85, "fmul", "fmul (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_86, "fmul", "fmul (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_87, "fmul", "fmul (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_88, "fmul", "fmul (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_89, "fmul", "fmul (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_90, "fmul", "fmul (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_91, "fmul", "fmul (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_92, "fmul", "fmul (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_93, "fmul", "fmul (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_94, "fmul", "fmul (signed char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_95, "fmul", "fmul (unsigned char, float)", DBL_MANT_DIG, 0 },
    { test_fmul_96, "fmul", "fmul (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fmul_97, "fmul", "fmul (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_98, "fmul", "fmul (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fmul_99, "fmul", "fmul (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_100, "fmul", "fmul (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_101, "fmul", "fmul (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_102, "fmul", "fmul (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_103, "fmul", "fmul (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fmul_104, "fmul", "fmul (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_105, "fmul", "fmul (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_106, "fmul", "fmul (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_107, "fmul", "fmul (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_108, "fmul", "fmul (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_109, "fmul", "fmul (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_110, "fmul", "fmul (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_111, "fmul", "fmul (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_112, "fmul", "fmul (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_113, "fmul", "fmul (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_114, "fmul", "fmul (short int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_115, "fmul", "fmul (short int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_116, "fmul", "fmul (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_117, "fmul", "fmul (short int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_118, "fmul", "fmul (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_119, "fmul", "fmul (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_120, "fmul", "fmul (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_121, "fmul", "fmul (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_122, "fmul", "fmul (short int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_123, "fmul", "fmul (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_124, "fmul", "fmul (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_125, "fmul", "fmul (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_126, "fmul", "fmul (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_127, "fmul", "fmul (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_128, "fmul", "fmul (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_129, "fmul", "fmul (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_130, "fmul", "fmul (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_131, "fmul", "fmul (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_132, "fmul", "fmul (short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_133, "fmul", "fmul (unsigned short int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_134, "fmul", "fmul (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_135, "fmul", "fmul (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_136, "fmul", "fmul (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_137, "fmul", "fmul (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_138, "fmul", "fmul (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_139, "fmul", "fmul (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_140, "fmul", "fmul (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_141, "fmul", "fmul (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_142, "fmul", "fmul (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_143, "fmul", "fmul (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_144, "fmul", "fmul (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_145, "fmul", "fmul (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_146, "fmul", "fmul (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_147, "fmul", "fmul (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_148, "fmul", "fmul (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_149, "fmul", "fmul (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_150, "fmul", "fmul (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_151, "fmul", "fmul (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_152, "fmul", "fmul (int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_153, "fmul", "fmul (int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_154, "fmul", "fmul (int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_155, "fmul", "fmul (int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_156, "fmul", "fmul (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_157, "fmul", "fmul (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_158, "fmul", "fmul (int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_159, "fmul", "fmul (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_160, "fmul", "fmul (int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_161, "fmul", "fmul (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_162, "fmul", "fmul (int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_163, "fmul", "fmul (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_164, "fmul", "fmul (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_165, "fmul", "fmul (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_166, "fmul", "fmul (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_167, "fmul", "fmul (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_168, "fmul", "fmul (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_169, "fmul", "fmul (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_170, "fmul", "fmul (int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_171, "fmul", "fmul (unsigned int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_172, "fmul", "fmul (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_173, "fmul", "fmul (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_174, "fmul", "fmul (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_175, "fmul", "fmul (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_176, "fmul", "fmul (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_177, "fmul", "fmul (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_178, "fmul", "fmul (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_179, "fmul", "fmul (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_180, "fmul", "fmul (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_181, "fmul", "fmul (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_182, "fmul", "fmul (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_183, "fmul", "fmul (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_184, "fmul", "fmul (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_185, "fmul", "fmul (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_186, "fmul", "fmul (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_187, "fmul", "fmul (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_188, "fmul", "fmul (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_189, "fmul", "fmul (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_190, "fmul", "fmul (long int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_191, "fmul", "fmul (long int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_192, "fmul", "fmul (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_193, "fmul", "fmul (long int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_194, "fmul", "fmul (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_195, "fmul", "fmul (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_196, "fmul", "fmul (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_197, "fmul", "fmul (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_198, "fmul", "fmul (long int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_199, "fmul", "fmul (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_200, "fmul", "fmul (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_201, "fmul", "fmul (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_202, "fmul", "fmul (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_203, "fmul", "fmul (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_204, "fmul", "fmul (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_205, "fmul", "fmul (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_206, "fmul", "fmul (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_207, "fmul", "fmul (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_208, "fmul", "fmul (long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_209, "fmul", "fmul (unsigned long int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_210, "fmul", "fmul (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_211, "fmul", "fmul (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_212, "fmul", "fmul (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_213, "fmul", "fmul (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_214, "fmul", "fmul (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_215, "fmul", "fmul (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_216, "fmul", "fmul (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_217, "fmul", "fmul (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_218, "fmul", "fmul (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_219, "fmul", "fmul (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_220, "fmul", "fmul (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_221, "fmul", "fmul (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_222, "fmul", "fmul (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_223, "fmul", "fmul (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_224, "fmul", "fmul (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_225, "fmul", "fmul (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_226, "fmul", "fmul (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_227, "fmul", "fmul (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_228, "fmul", "fmul (long long int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_229, "fmul", "fmul (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_230, "fmul", "fmul (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_231, "fmul", "fmul (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_232, "fmul", "fmul (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_233, "fmul", "fmul (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_234, "fmul", "fmul (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_235, "fmul", "fmul (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_236, "fmul", "fmul (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_237, "fmul", "fmul (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_238, "fmul", "fmul (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_239, "fmul", "fmul (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_240, "fmul", "fmul (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_241, "fmul", "fmul (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_242, "fmul", "fmul (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_243, "fmul", "fmul (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_244, "fmul", "fmul (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_245, "fmul", "fmul (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_246, "fmul", "fmul (long long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_247, "fmul", "fmul (unsigned long long int, float)", DBL_MANT_DIG, 0 },
    { test_fmul_248, "fmul", "fmul (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmul_249, "fmul", "fmul (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_250, "fmul", "fmul (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmul_251, "fmul", "fmul (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_252, "fmul", "fmul (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_253, "fmul", "fmul (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_254, "fmul", "fmul (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_255, "fmul", "fmul (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmul_256, "fmul", "fmul (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_257, "fmul", "fmul (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_258, "fmul", "fmul (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_259, "fmul", "fmul (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_260, "fmul", "fmul (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_261, "fmul", "fmul (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_262, "fmul", "fmul (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_263, "fmul", "fmul (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_264, "fmul", "fmul (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_265, "fmul", "fmul (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_266, "fmul", "fmul (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_267, "fmul", "fmul (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_268, "fmul", "fmul (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_269, "fmul", "fmul (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_270, "fmul", "fmul (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_271, "fmul", "fmul (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_272, "fmul", "fmul (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_273, "fmul", "fmul (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_274, "fmul", "fmul (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_275, "fmul", "fmul (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_276, "fmul", "fmul (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_277, "fmul", "fmul (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_278, "fmul", "fmul (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_279, "fmul", "fmul (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_280, "fmul", "fmul (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_281, "fmul", "fmul (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_282, "fmul", "fmul (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_283, "fmul", "fmul (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_284, "fmul", "fmul (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_285, "fmul", "fmul (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_286, "fmul", "fmul (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_287, "fmul", "fmul (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_288, "fmul", "fmul (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_289, "fmul", "fmul (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_290, "fmul", "fmul (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_291, "fmul", "fmul (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_292, "fmul", "fmul (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_293, "fmul", "fmul (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_294, "fmul", "fmul (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_295, "fmul", "fmul (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_296, "fmul", "fmul (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_297, "fmul", "fmul (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_298, "fmul", "fmul (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_299, "fmul", "fmul (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_300, "fmul", "fmul (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_301, "fmul", "fmul (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_302, "fmul", "fmul (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_303, "fmul", "fmul (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_304, "fmul", "fmul (enum e, float)", DBL_MANT_DIG, 0 },
    { test_fmul_305, "fmul", "fmul (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fmul_306, "fmul", "fmul (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_307, "fmul", "fmul (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fmul_308, "fmul", "fmul (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_309, "fmul", "fmul (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_310, "fmul", "fmul (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_311, "fmul", "fmul (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_312, "fmul", "fmul (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fmul_313, "fmul", "fmul (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_314, "fmul", "fmul (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_315, "fmul", "fmul (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_316, "fmul", "fmul (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_317, "fmul", "fmul (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_318, "fmul", "fmul (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_319, "fmul", "fmul (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_320, "fmul", "fmul (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_321, "fmul", "fmul (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_322, "fmul", "fmul (enum e, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_323, "fmul", "fmul (_Bool, float)", DBL_MANT_DIG, 0 },
    { test_fmul_324, "fmul", "fmul (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fmul_325, "fmul", "fmul (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_326, "fmul", "fmul (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fmul_327, "fmul", "fmul (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_328, "fmul", "fmul (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_329, "fmul", "fmul (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_330, "fmul", "fmul (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_331, "fmul", "fmul (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fmul_332, "fmul", "fmul (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_333, "fmul", "fmul (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_334, "fmul", "fmul (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_335, "fmul", "fmul (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_336, "fmul", "fmul (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_337, "fmul", "fmul (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_338, "fmul", "fmul (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_339, "fmul", "fmul (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_340, "fmul", "fmul (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_341, "fmul", "fmul (_Bool, bit_field)", DBL_MANT_DIG, 0 },
    { test_fmul_342, "fmul", "fmul (bit_field, float)", DBL_MANT_DIG, 0 },
    { test_fmul_343, "fmul", "fmul (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fmul_344, "fmul", "fmul (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_fmul_345, "fmul", "fmul (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fmul_346, "fmul", "fmul (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fmul_347, "fmul", "fmul (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmul_348, "fmul", "fmul (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fmul_349, "fmul", "fmul (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmul_350, "fmul", "fmul (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fmul_351, "fmul", "fmul (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmul_352, "fmul", "fmul (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fmul_353, "fmul", "fmul (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmul_354, "fmul", "fmul (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fmul_355, "fmul", "fmul (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmul_356, "fmul", "fmul (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmul_357, "fmul", "fmul (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmul_358, "fmul", "fmul (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fmul_359, "fmul", "fmul (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmul_360, "fmul", "fmul (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
