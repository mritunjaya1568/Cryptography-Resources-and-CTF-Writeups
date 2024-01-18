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
(dmull) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "dmul";
  return 0;
}
static void
test_dmul_0 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_float);
}
static void
test_dmul_1 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_double);
}
static void
test_dmul_2 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_long_double);
}
static void
test_dmul_3 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_char);
}
static void
test_dmul_4 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_signed_char);
}
static void
test_dmul_5 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_unsigned_char);
}
static void
test_dmul_6 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_short_int);
}
static void
test_dmul_7 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_dmul_8 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_int);
}
static void
test_dmul_9 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_unsigned_int);
}
static void
test_dmul_10 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_long_int);
}
static void
test_dmul_11 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_dmul_12 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_long_long_int);
}
static void
test_dmul_13 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_14 (void)
{
  extern typeof (dmul (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_15 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_16 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_enum_e);
}
static void
test_dmul_17 (void)
{
  extern typeof (dmul (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var__Bool);
}
static void
test_dmul_18 (void)
{
  extern typeof (dmul (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_float, vol_var_bit_field);
}
static void
test_dmul_19 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_float);
}
static void
test_dmul_20 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_double);
}
static void
test_dmul_21 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_long_double);
}
static void
test_dmul_22 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_char);
}
static void
test_dmul_23 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_signed_char);
}
static void
test_dmul_24 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_unsigned_char);
}
static void
test_dmul_25 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_short_int);
}
static void
test_dmul_26 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_dmul_27 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_int);
}
static void
test_dmul_28 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_unsigned_int);
}
static void
test_dmul_29 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_long_int);
}
static void
test_dmul_30 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_dmul_31 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_long_long_int);
}
static void
test_dmul_32 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_33 (void)
{
  extern typeof (dmul (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_34 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_35 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_enum_e);
}
static void
test_dmul_36 (void)
{
  extern typeof (dmul (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var__Bool);
}
static void
test_dmul_37 (void)
{
  extern typeof (dmul (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_double, vol_var_bit_field);
}
static void
test_dmul_38 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_float);
}
static void
test_dmul_39 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_double);
}
static void
test_dmul_40 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_long_double);
}
static void
test_dmul_41 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_char);
}
static void
test_dmul_42 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_signed_char);
}
static void
test_dmul_43 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_dmul_44 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_short_int);
}
static void
test_dmul_45 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_dmul_46 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_int);
}
static void
test_dmul_47 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_dmul_48 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_long_int);
}
static void
test_dmul_49 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_dmul_50 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_long_long_int);
}
static void
test_dmul_51 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_52 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_53 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_54 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_enum_e);
}
static void
test_dmul_55 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var__Bool);
}
static void
test_dmul_56 (void)
{
  extern typeof (dmul (vol_var_long_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_double, vol_var_bit_field);
}
static void
test_dmul_57 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_float);
}
static void
test_dmul_58 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_double);
}
static void
test_dmul_59 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_long_double);
}
static void
test_dmul_60 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_char);
}
static void
test_dmul_61 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_signed_char);
}
static void
test_dmul_62 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_unsigned_char);
}
static void
test_dmul_63 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_short_int);
}
static void
test_dmul_64 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_dmul_65 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_int);
}
static void
test_dmul_66 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_unsigned_int);
}
static void
test_dmul_67 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_long_int);
}
static void
test_dmul_68 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_dmul_69 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_long_long_int);
}
static void
test_dmul_70 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_71 (void)
{
  extern typeof (dmul (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_72 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_73 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_enum_e);
}
static void
test_dmul_74 (void)
{
  extern typeof (dmul (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var__Bool);
}
static void
test_dmul_75 (void)
{
  extern typeof (dmul (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_char, vol_var_bit_field);
}
static void
test_dmul_76 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_float);
}
static void
test_dmul_77 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_double);
}
static void
test_dmul_78 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_long_double);
}
static void
test_dmul_79 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_char);
}
static void
test_dmul_80 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_signed_char);
}
static void
test_dmul_81 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_dmul_82 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_short_int);
}
static void
test_dmul_83 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_dmul_84 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_int);
}
static void
test_dmul_85 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_dmul_86 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_long_int);
}
static void
test_dmul_87 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_dmul_88 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_dmul_89 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_90 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_91 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_92 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_enum_e);
}
static void
test_dmul_93 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var__Bool);
}
static void
test_dmul_94 (void)
{
  extern typeof (dmul (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_signed_char, vol_var_bit_field);
}
static void
test_dmul_95 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_float);
}
static void
test_dmul_96 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_double);
}
static void
test_dmul_97 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_dmul_98 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_char);
}
static void
test_dmul_99 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_dmul_100 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_dmul_101 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_dmul_102 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_dmul_103 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_int);
}
static void
test_dmul_104 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_dmul_105 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_dmul_106 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_dmul_107 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_dmul_108 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_109 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_110 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_111 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_dmul_112 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_dmul_113 (void)
{
  extern typeof (dmul (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_dmul_114 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_float);
}
static void
test_dmul_115 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_double);
}
static void
test_dmul_116 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_long_double);
}
static void
test_dmul_117 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_char);
}
static void
test_dmul_118 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_signed_char);
}
static void
test_dmul_119 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_dmul_120 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_short_int);
}
static void
test_dmul_121 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_dmul_122 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_int);
}
static void
test_dmul_123 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_dmul_124 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_long_int);
}
static void
test_dmul_125 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_dmul_126 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_long_long_int);
}
static void
test_dmul_127 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_128 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_129 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_130 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_enum_e);
}
static void
test_dmul_131 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var__Bool);
}
static void
test_dmul_132 (void)
{
  extern typeof (dmul (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_short_int, vol_var_bit_field);
}
static void
test_dmul_133 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_dmul_134 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_dmul_135 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_dmul_136 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_dmul_137 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_dmul_138 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_dmul_139 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_dmul_140 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_dmul_141 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_dmul_142 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_dmul_143 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_dmul_144 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_dmul_145 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_dmul_146 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_147 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_148 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_149 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_dmul_150 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_dmul_151 (void)
{
  extern typeof (dmul (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_dmul_152 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_float);
}
static void
test_dmul_153 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_double);
}
static void
test_dmul_154 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_long_double);
}
static void
test_dmul_155 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_char);
}
static void
test_dmul_156 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_signed_char);
}
static void
test_dmul_157 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_unsigned_char);
}
static void
test_dmul_158 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_short_int);
}
static void
test_dmul_159 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_dmul_160 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_int);
}
static void
test_dmul_161 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_unsigned_int);
}
static void
test_dmul_162 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_long_int);
}
static void
test_dmul_163 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_dmul_164 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_long_long_int);
}
static void
test_dmul_165 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_166 (void)
{
  extern typeof (dmul (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_167 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_168 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_enum_e);
}
static void
test_dmul_169 (void)
{
  extern typeof (dmul (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var__Bool);
}
static void
test_dmul_170 (void)
{
  extern typeof (dmul (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_int, vol_var_bit_field);
}
static void
test_dmul_171 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_float);
}
static void
test_dmul_172 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_double);
}
static void
test_dmul_173 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_dmul_174 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_char);
}
static void
test_dmul_175 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_dmul_176 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_dmul_177 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_dmul_178 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_dmul_179 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_int);
}
static void
test_dmul_180 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_dmul_181 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_dmul_182 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_dmul_183 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_dmul_184 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_185 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_186 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_187 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_dmul_188 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_dmul_189 (void)
{
  extern typeof (dmul (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_dmul_190 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_float);
}
static void
test_dmul_191 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_double);
}
static void
test_dmul_192 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_long_double);
}
static void
test_dmul_193 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_char);
}
static void
test_dmul_194 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_signed_char);
}
static void
test_dmul_195 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_dmul_196 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_short_int);
}
static void
test_dmul_197 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_dmul_198 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_int);
}
static void
test_dmul_199 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_dmul_200 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_long_int);
}
static void
test_dmul_201 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_dmul_202 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_long_long_int);
}
static void
test_dmul_203 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_204 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_205 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_206 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_enum_e);
}
static void
test_dmul_207 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var__Bool);
}
static void
test_dmul_208 (void)
{
  extern typeof (dmul (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_int, vol_var_bit_field);
}
static void
test_dmul_209 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_dmul_210 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_dmul_211 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_dmul_212 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_dmul_213 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_dmul_214 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_dmul_215 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_dmul_216 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_dmul_217 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_dmul_218 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_dmul_219 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_dmul_220 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_dmul_221 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_dmul_222 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_223 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_224 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_225 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_dmul_226 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_dmul_227 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_dmul_228 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_float);
}
static void
test_dmul_229 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_double);
}
static void
test_dmul_230 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_long_double);
}
static void
test_dmul_231 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_char);
}
static void
test_dmul_232 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_dmul_233 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_dmul_234 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_short_int);
}
static void
test_dmul_235 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_dmul_236 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_int);
}
static void
test_dmul_237 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_dmul_238 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_long_int);
}
static void
test_dmul_239 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_dmul_240 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_dmul_241 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_242 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_243 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_244 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_dmul_245 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var__Bool);
}
static void
test_dmul_246 (void)
{
  extern typeof (dmul (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_dmul_247 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_dmul_248 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_dmul_249 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_dmul_250 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_dmul_251 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_dmul_252 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_dmul_253 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_dmul_254 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_dmul_255 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_dmul_256 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_dmul_257 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_dmul_258 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_dmul_259 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_dmul_260 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_261 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_262 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_263 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_dmul_264 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_dmul_265 (void)
{
  extern typeof (dmul (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_266 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_267 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_268 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_269 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_270 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_271 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_272 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_273 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_274 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_275 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_276 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_277 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_278 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_279 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_280 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_281 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_282 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_283 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_284 (void)
{
  extern typeof (dmul (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_285 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_286 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_287 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_288 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_289 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_290 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_291 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_292 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_293 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_294 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_295 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_296 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_297 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_298 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_299 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_300 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_301 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_302 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_303 (void)
{
  extern typeof (dmul (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_dmul_304 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_float);
}
static void
test_dmul_305 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_double);
}
static void
test_dmul_306 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_long_double);
}
static void
test_dmul_307 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_char);
}
static void
test_dmul_308 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_signed_char);
}
static void
test_dmul_309 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_dmul_310 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_short_int);
}
static void
test_dmul_311 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_dmul_312 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_int);
}
static void
test_dmul_313 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_dmul_314 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_long_int);
}
static void
test_dmul_315 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_dmul_316 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_dmul_317 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_318 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_319 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_320 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_enum_e);
}
static void
test_dmul_321 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var__Bool);
}
static void
test_dmul_322 (void)
{
  extern typeof (dmul (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_enum_e, vol_var_bit_field);
}
static void
test_dmul_323 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_float);
}
static void
test_dmul_324 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_double);
}
static void
test_dmul_325 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_long_double);
}
static void
test_dmul_326 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_char);
}
static void
test_dmul_327 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_signed_char);
}
static void
test_dmul_328 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_dmul_329 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_short_int);
}
static void
test_dmul_330 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_dmul_331 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_int);
}
static void
test_dmul_332 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_dmul_333 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_long_int);
}
static void
test_dmul_334 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_dmul_335 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_long_long_int);
}
static void
test_dmul_336 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_337 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_338 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_339 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_enum_e);
}
static void
test_dmul_340 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var__Bool);
}
static void
test_dmul_341 (void)
{
  extern typeof (dmul (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var__Bool, vol_var_bit_field);
}
static void
test_dmul_342 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_float);
}
static void
test_dmul_343 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_double);
}
static void
test_dmul_344 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_long_double);
}
static void
test_dmul_345 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_char);
}
static void
test_dmul_346 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_signed_char);
}
static void
test_dmul_347 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_dmul_348 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_short_int);
}
static void
test_dmul_349 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_dmul_350 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_int);
}
static void
test_dmul_351 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_dmul_352 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_long_int);
}
static void
test_dmul_353 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_dmul_354 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_dmul_355 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dmul_356 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dmul_357 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_dmul_358 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_enum_e);
}
static void
test_dmul_359 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var__Bool);
}
static void
test_dmul_360 (void)
{
  extern typeof (dmul (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dmul (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_dmul_0, "dmul", "dmul (float, float)", LDBL_MANT_DIG, FLT_MANT_DIG },
    { test_dmul_1, "dmul", "dmul (float, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dmul_2, "dmul", "dmul (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dmul_3, "dmul", "dmul (float, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_4, "dmul", "dmul (float, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_5, "dmul", "dmul (float, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_6, "dmul", "dmul (float, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_7, "dmul", "dmul (float, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_8, "dmul", "dmul (float, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_9, "dmul", "dmul (float, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_10, "dmul", "dmul (float, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_11, "dmul", "dmul (float, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_12, "dmul", "dmul (float, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_13, "dmul", "dmul (float, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_14, "dmul", "dmul (float, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_15, "dmul", "dmul (float, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_16, "dmul", "dmul (float, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_17, "dmul", "dmul (float, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_18, "dmul", "dmul (float, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_19, "dmul", "dmul (double, float)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dmul_20, "dmul", "dmul (double, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dmul_21, "dmul", "dmul (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dmul_22, "dmul", "dmul (double, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_23, "dmul", "dmul (double, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_24, "dmul", "dmul (double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_25, "dmul", "dmul (double, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_26, "dmul", "dmul (double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_27, "dmul", "dmul (double, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_28, "dmul", "dmul (double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_29, "dmul", "dmul (double, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_30, "dmul", "dmul (double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_31, "dmul", "dmul (double, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_32, "dmul", "dmul (double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_33, "dmul", "dmul (double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_34, "dmul", "dmul (double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_35, "dmul", "dmul (double, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_36, "dmul", "dmul (double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_37, "dmul", "dmul (double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_38, "dmul", "dmul (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dmul_39, "dmul", "dmul (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dmul_40, "dmul", "dmul (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dmul_41, "dmul", "dmul (long double, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_42, "dmul", "dmul (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_43, "dmul", "dmul (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_44, "dmul", "dmul (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_45, "dmul", "dmul (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_46, "dmul", "dmul (long double, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_47, "dmul", "dmul (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_48, "dmul", "dmul (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_49, "dmul", "dmul (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_50, "dmul", "dmul (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_51, "dmul", "dmul (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_52, "dmul", "dmul (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_53, "dmul", "dmul (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_54, "dmul", "dmul (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_55, "dmul", "dmul (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_56, "dmul", "dmul (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_57, "dmul", "dmul (char, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_58, "dmul", "dmul (char, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_59, "dmul", "dmul (char, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_60, "dmul", "dmul (char, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_61, "dmul", "dmul (char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_62, "dmul", "dmul (char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_63, "dmul", "dmul (char, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_64, "dmul", "dmul (char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_65, "dmul", "dmul (char, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_66, "dmul", "dmul (char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_67, "dmul", "dmul (char, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_68, "dmul", "dmul (char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_69, "dmul", "dmul (char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_70, "dmul", "dmul (char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_71, "dmul", "dmul (char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_72, "dmul", "dmul (char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_73, "dmul", "dmul (char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_74, "dmul", "dmul (char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_75, "dmul", "dmul (char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_76, "dmul", "dmul (signed char, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_77, "dmul", "dmul (signed char, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_78, "dmul", "dmul (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_79, "dmul", "dmul (signed char, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_80, "dmul", "dmul (signed char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_81, "dmul", "dmul (signed char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_82, "dmul", "dmul (signed char, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_83, "dmul", "dmul (signed char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_84, "dmul", "dmul (signed char, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_85, "dmul", "dmul (signed char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_86, "dmul", "dmul (signed char, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_87, "dmul", "dmul (signed char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_88, "dmul", "dmul (signed char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_89, "dmul", "dmul (signed char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_90, "dmul", "dmul (signed char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_91, "dmul", "dmul (signed char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_92, "dmul", "dmul (signed char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_93, "dmul", "dmul (signed char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_94, "dmul", "dmul (signed char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_95, "dmul", "dmul (unsigned char, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_96, "dmul", "dmul (unsigned char, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_97, "dmul", "dmul (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_98, "dmul", "dmul (unsigned char, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_99, "dmul", "dmul (unsigned char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_100, "dmul", "dmul (unsigned char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_101, "dmul", "dmul (unsigned char, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_102, "dmul", "dmul (unsigned char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_103, "dmul", "dmul (unsigned char, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_104, "dmul", "dmul (unsigned char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_105, "dmul", "dmul (unsigned char, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_106, "dmul", "dmul (unsigned char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_107, "dmul", "dmul (unsigned char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_108, "dmul", "dmul (unsigned char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_109, "dmul", "dmul (unsigned char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_110, "dmul", "dmul (unsigned char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_111, "dmul", "dmul (unsigned char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_112, "dmul", "dmul (unsigned char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_113, "dmul", "dmul (unsigned char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_114, "dmul", "dmul (short int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_115, "dmul", "dmul (short int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_116, "dmul", "dmul (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_117, "dmul", "dmul (short int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_118, "dmul", "dmul (short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_119, "dmul", "dmul (short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_120, "dmul", "dmul (short int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_121, "dmul", "dmul (short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_122, "dmul", "dmul (short int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_123, "dmul", "dmul (short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_124, "dmul", "dmul (short int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_125, "dmul", "dmul (short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_126, "dmul", "dmul (short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_127, "dmul", "dmul (short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_128, "dmul", "dmul (short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_129, "dmul", "dmul (short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_130, "dmul", "dmul (short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_131, "dmul", "dmul (short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_132, "dmul", "dmul (short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_133, "dmul", "dmul (unsigned short int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_134, "dmul", "dmul (unsigned short int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_135, "dmul", "dmul (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_136, "dmul", "dmul (unsigned short int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_137, "dmul", "dmul (unsigned short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_138, "dmul", "dmul (unsigned short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_139, "dmul", "dmul (unsigned short int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_140, "dmul", "dmul (unsigned short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_141, "dmul", "dmul (unsigned short int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_142, "dmul", "dmul (unsigned short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_143, "dmul", "dmul (unsigned short int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_144, "dmul", "dmul (unsigned short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_145, "dmul", "dmul (unsigned short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_146, "dmul", "dmul (unsigned short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_147, "dmul", "dmul (unsigned short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_148, "dmul", "dmul (unsigned short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_149, "dmul", "dmul (unsigned short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_150, "dmul", "dmul (unsigned short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_151, "dmul", "dmul (unsigned short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_152, "dmul", "dmul (int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_153, "dmul", "dmul (int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_154, "dmul", "dmul (int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_155, "dmul", "dmul (int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_156, "dmul", "dmul (int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_157, "dmul", "dmul (int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_158, "dmul", "dmul (int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_159, "dmul", "dmul (int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_160, "dmul", "dmul (int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_161, "dmul", "dmul (int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_162, "dmul", "dmul (int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_163, "dmul", "dmul (int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_164, "dmul", "dmul (int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_165, "dmul", "dmul (int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_166, "dmul", "dmul (int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_167, "dmul", "dmul (int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_168, "dmul", "dmul (int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_169, "dmul", "dmul (int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_170, "dmul", "dmul (int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_171, "dmul", "dmul (unsigned int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_172, "dmul", "dmul (unsigned int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_173, "dmul", "dmul (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_174, "dmul", "dmul (unsigned int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_175, "dmul", "dmul (unsigned int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_176, "dmul", "dmul (unsigned int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_177, "dmul", "dmul (unsigned int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_178, "dmul", "dmul (unsigned int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_179, "dmul", "dmul (unsigned int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_180, "dmul", "dmul (unsigned int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_181, "dmul", "dmul (unsigned int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_182, "dmul", "dmul (unsigned int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_183, "dmul", "dmul (unsigned int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_184, "dmul", "dmul (unsigned int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_185, "dmul", "dmul (unsigned int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_186, "dmul", "dmul (unsigned int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_187, "dmul", "dmul (unsigned int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_188, "dmul", "dmul (unsigned int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_189, "dmul", "dmul (unsigned int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_190, "dmul", "dmul (long int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_191, "dmul", "dmul (long int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_192, "dmul", "dmul (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_193, "dmul", "dmul (long int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_194, "dmul", "dmul (long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_195, "dmul", "dmul (long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_196, "dmul", "dmul (long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_197, "dmul", "dmul (long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_198, "dmul", "dmul (long int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_199, "dmul", "dmul (long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_200, "dmul", "dmul (long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_201, "dmul", "dmul (long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_202, "dmul", "dmul (long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_203, "dmul", "dmul (long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_204, "dmul", "dmul (long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_205, "dmul", "dmul (long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_206, "dmul", "dmul (long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_207, "dmul", "dmul (long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_208, "dmul", "dmul (long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_209, "dmul", "dmul (unsigned long int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_210, "dmul", "dmul (unsigned long int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_211, "dmul", "dmul (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_212, "dmul", "dmul (unsigned long int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_213, "dmul", "dmul (unsigned long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_214, "dmul", "dmul (unsigned long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_215, "dmul", "dmul (unsigned long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_216, "dmul", "dmul (unsigned long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_217, "dmul", "dmul (unsigned long int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_218, "dmul", "dmul (unsigned long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_219, "dmul", "dmul (unsigned long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_220, "dmul", "dmul (unsigned long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_221, "dmul", "dmul (unsigned long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_222, "dmul", "dmul (unsigned long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_223, "dmul", "dmul (unsigned long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_224, "dmul", "dmul (unsigned long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_225, "dmul", "dmul (unsigned long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_226, "dmul", "dmul (unsigned long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_227, "dmul", "dmul (unsigned long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_228, "dmul", "dmul (long long int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_229, "dmul", "dmul (long long int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_230, "dmul", "dmul (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_231, "dmul", "dmul (long long int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_232, "dmul", "dmul (long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_233, "dmul", "dmul (long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_234, "dmul", "dmul (long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_235, "dmul", "dmul (long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_236, "dmul", "dmul (long long int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_237, "dmul", "dmul (long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_238, "dmul", "dmul (long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_239, "dmul", "dmul (long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_240, "dmul", "dmul (long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_241, "dmul", "dmul (long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_242, "dmul", "dmul (long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_243, "dmul", "dmul (long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_244, "dmul", "dmul (long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_245, "dmul", "dmul (long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_246, "dmul", "dmul (long long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_247, "dmul", "dmul (unsigned long long int, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_248, "dmul", "dmul (unsigned long long int, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_249, "dmul", "dmul (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_250, "dmul", "dmul (unsigned long long int, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_251, "dmul", "dmul (unsigned long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_252, "dmul", "dmul (unsigned long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_253, "dmul", "dmul (unsigned long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_254, "dmul", "dmul (unsigned long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_255, "dmul", "dmul (unsigned long long int, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_256, "dmul", "dmul (unsigned long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_257, "dmul", "dmul (unsigned long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_258, "dmul", "dmul (unsigned long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_259, "dmul", "dmul (unsigned long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_260, "dmul", "dmul (unsigned long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_261, "dmul", "dmul (unsigned long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_262, "dmul", "dmul (unsigned long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_263, "dmul", "dmul (unsigned long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_264, "dmul", "dmul (unsigned long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_265, "dmul", "dmul (unsigned long long int, bit_field)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_266, "dmul", "dmul (__int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_267, "dmul", "dmul (__int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_268, "dmul", "dmul (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_269, "dmul", "dmul (__int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_270, "dmul", "dmul (__int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_271, "dmul", "dmul (__int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_272, "dmul", "dmul (__int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_273, "dmul", "dmul (__int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_274, "dmul", "dmul (__int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_275, "dmul", "dmul (__int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_276, "dmul", "dmul (__int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_277, "dmul", "dmul (__int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_278, "dmul", "dmul (__int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_279, "dmul", "dmul (__int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_280, "dmul", "dmul (__int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_281, "dmul", "dmul (__int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_282, "dmul", "dmul (__int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_283, "dmul", "dmul (__int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_284, "dmul", "dmul (__int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_285, "dmul", "dmul (unsigned __int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_286, "dmul", "dmul (unsigned __int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_287, "dmul", "dmul (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_288, "dmul", "dmul (unsigned __int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_289, "dmul", "dmul (unsigned __int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_290, "dmul", "dmul (unsigned __int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_291, "dmul", "dmul (unsigned __int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_292, "dmul", "dmul (unsigned __int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_293, "dmul", "dmul (unsigned __int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_294, "dmul", "dmul (unsigned __int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_295, "dmul", "dmul (unsigned __int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_296, "dmul", "dmul (unsigned __int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_297, "dmul", "dmul (unsigned __int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_298, "dmul", "dmul (unsigned __int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_299, "dmul", "dmul (unsigned __int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_300, "dmul", "dmul (unsigned __int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_301, "dmul", "dmul (unsigned __int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_302, "dmul", "dmul (unsigned __int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_303, "dmul", "dmul (unsigned __int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_304, "dmul", "dmul (enum e, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_305, "dmul", "dmul (enum e, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_306, "dmul", "dmul (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_307, "dmul", "dmul (enum e, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_308, "dmul", "dmul (enum e, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_309, "dmul", "dmul (enum e, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_310, "dmul", "dmul (enum e, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_311, "dmul", "dmul (enum e, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_312, "dmul", "dmul (enum e, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_313, "dmul", "dmul (enum e, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_314, "dmul", "dmul (enum e, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_315, "dmul", "dmul (enum e, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_316, "dmul", "dmul (enum e, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_317, "dmul", "dmul (enum e, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_318, "dmul", "dmul (enum e, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_319, "dmul", "dmul (enum e, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_320, "dmul", "dmul (enum e, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_321, "dmul", "dmul (enum e, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_322, "dmul", "dmul (enum e, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_323, "dmul", "dmul (_Bool, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_324, "dmul", "dmul (_Bool, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_325, "dmul", "dmul (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_326, "dmul", "dmul (_Bool, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_327, "dmul", "dmul (_Bool, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_328, "dmul", "dmul (_Bool, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_329, "dmul", "dmul (_Bool, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_330, "dmul", "dmul (_Bool, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_331, "dmul", "dmul (_Bool, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_332, "dmul", "dmul (_Bool, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_333, "dmul", "dmul (_Bool, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_334, "dmul", "dmul (_Bool, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_335, "dmul", "dmul (_Bool, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_336, "dmul", "dmul (_Bool, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_337, "dmul", "dmul (_Bool, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_338, "dmul", "dmul (_Bool, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_339, "dmul", "dmul (_Bool, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_340, "dmul", "dmul (_Bool, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_341, "dmul", "dmul (_Bool, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dmul_342, "dmul", "dmul (bit_field, float)", LDBL_MANT_DIG, 0 },
    { test_dmul_343, "dmul", "dmul (bit_field, double)", LDBL_MANT_DIG, 0 },
    { test_dmul_344, "dmul", "dmul (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_dmul_345, "dmul", "dmul (bit_field, char)", LDBL_MANT_DIG, 0 },
    { test_dmul_346, "dmul", "dmul (bit_field, signed char)", LDBL_MANT_DIG, 0 },
    { test_dmul_347, "dmul", "dmul (bit_field, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dmul_348, "dmul", "dmul (bit_field, short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_349, "dmul", "dmul (bit_field, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dmul_350, "dmul", "dmul (bit_field, int)", LDBL_MANT_DIG, 0 },
    { test_dmul_351, "dmul", "dmul (bit_field, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dmul_352, "dmul", "dmul (bit_field, long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_353, "dmul", "dmul (bit_field, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_354, "dmul", "dmul (bit_field, long long int)", LDBL_MANT_DIG, 0 },
    { test_dmul_355, "dmul", "dmul (bit_field, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dmul_356, "dmul", "dmul (bit_field, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dmul_357, "dmul", "dmul (bit_field, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dmul_358, "dmul", "dmul (bit_field, enum e)", LDBL_MANT_DIG, 0 },
    { test_dmul_359, "dmul", "dmul (bit_field, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dmul_360, "dmul", "dmul (bit_field, bit_field)", LDBL_MANT_DIG, 0 },
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
