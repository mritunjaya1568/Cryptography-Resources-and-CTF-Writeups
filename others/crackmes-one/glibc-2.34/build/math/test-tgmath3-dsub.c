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
(dsubl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "dsub";
  return 0;
}
static void
test_dsub_0 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_float);
}
static void
test_dsub_1 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_double);
}
static void
test_dsub_2 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_long_double);
}
static void
test_dsub_3 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_char);
}
static void
test_dsub_4 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_signed_char);
}
static void
test_dsub_5 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_unsigned_char);
}
static void
test_dsub_6 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_short_int);
}
static void
test_dsub_7 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_dsub_8 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_int);
}
static void
test_dsub_9 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_unsigned_int);
}
static void
test_dsub_10 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_long_int);
}
static void
test_dsub_11 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_dsub_12 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_long_long_int);
}
static void
test_dsub_13 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_14 (void)
{
  extern typeof (dsub (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_15 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_16 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_enum_e);
}
static void
test_dsub_17 (void)
{
  extern typeof (dsub (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var__Bool);
}
static void
test_dsub_18 (void)
{
  extern typeof (dsub (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_float, vol_var_bit_field);
}
static void
test_dsub_19 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_float);
}
static void
test_dsub_20 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_double);
}
static void
test_dsub_21 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_long_double);
}
static void
test_dsub_22 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_char);
}
static void
test_dsub_23 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_signed_char);
}
static void
test_dsub_24 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_unsigned_char);
}
static void
test_dsub_25 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_short_int);
}
static void
test_dsub_26 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_dsub_27 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_int);
}
static void
test_dsub_28 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_unsigned_int);
}
static void
test_dsub_29 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_long_int);
}
static void
test_dsub_30 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_dsub_31 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_long_long_int);
}
static void
test_dsub_32 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_33 (void)
{
  extern typeof (dsub (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_34 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_35 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_enum_e);
}
static void
test_dsub_36 (void)
{
  extern typeof (dsub (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var__Bool);
}
static void
test_dsub_37 (void)
{
  extern typeof (dsub (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_double, vol_var_bit_field);
}
static void
test_dsub_38 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_float);
}
static void
test_dsub_39 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_double);
}
static void
test_dsub_40 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_long_double);
}
static void
test_dsub_41 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_char);
}
static void
test_dsub_42 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_signed_char);
}
static void
test_dsub_43 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_dsub_44 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_short_int);
}
static void
test_dsub_45 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_dsub_46 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_int);
}
static void
test_dsub_47 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_dsub_48 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_long_int);
}
static void
test_dsub_49 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_dsub_50 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_long_long_int);
}
static void
test_dsub_51 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_52 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_53 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_54 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_enum_e);
}
static void
test_dsub_55 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var__Bool);
}
static void
test_dsub_56 (void)
{
  extern typeof (dsub (vol_var_long_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_double, vol_var_bit_field);
}
static void
test_dsub_57 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_float);
}
static void
test_dsub_58 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_double);
}
static void
test_dsub_59 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_long_double);
}
static void
test_dsub_60 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_char);
}
static void
test_dsub_61 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_signed_char);
}
static void
test_dsub_62 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_unsigned_char);
}
static void
test_dsub_63 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_short_int);
}
static void
test_dsub_64 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_dsub_65 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_int);
}
static void
test_dsub_66 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_unsigned_int);
}
static void
test_dsub_67 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_long_int);
}
static void
test_dsub_68 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_dsub_69 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_long_long_int);
}
static void
test_dsub_70 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_71 (void)
{
  extern typeof (dsub (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_72 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_73 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_enum_e);
}
static void
test_dsub_74 (void)
{
  extern typeof (dsub (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var__Bool);
}
static void
test_dsub_75 (void)
{
  extern typeof (dsub (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_char, vol_var_bit_field);
}
static void
test_dsub_76 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_float);
}
static void
test_dsub_77 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_double);
}
static void
test_dsub_78 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_long_double);
}
static void
test_dsub_79 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_char);
}
static void
test_dsub_80 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_signed_char);
}
static void
test_dsub_81 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_dsub_82 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_short_int);
}
static void
test_dsub_83 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_dsub_84 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_int);
}
static void
test_dsub_85 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_dsub_86 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_long_int);
}
static void
test_dsub_87 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_dsub_88 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_dsub_89 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_90 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_91 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_92 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_enum_e);
}
static void
test_dsub_93 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var__Bool);
}
static void
test_dsub_94 (void)
{
  extern typeof (dsub (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_signed_char, vol_var_bit_field);
}
static void
test_dsub_95 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_float);
}
static void
test_dsub_96 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_double);
}
static void
test_dsub_97 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_dsub_98 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_char);
}
static void
test_dsub_99 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_dsub_100 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_dsub_101 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_dsub_102 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_dsub_103 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_int);
}
static void
test_dsub_104 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_dsub_105 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_dsub_106 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_dsub_107 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_dsub_108 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_109 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_110 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_111 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_dsub_112 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_dsub_113 (void)
{
  extern typeof (dsub (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_dsub_114 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_float);
}
static void
test_dsub_115 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_double);
}
static void
test_dsub_116 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_long_double);
}
static void
test_dsub_117 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_char);
}
static void
test_dsub_118 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_signed_char);
}
static void
test_dsub_119 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_dsub_120 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_short_int);
}
static void
test_dsub_121 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_dsub_122 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_int);
}
static void
test_dsub_123 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_dsub_124 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_long_int);
}
static void
test_dsub_125 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_dsub_126 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_long_long_int);
}
static void
test_dsub_127 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_128 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_129 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_130 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_enum_e);
}
static void
test_dsub_131 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var__Bool);
}
static void
test_dsub_132 (void)
{
  extern typeof (dsub (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_short_int, vol_var_bit_field);
}
static void
test_dsub_133 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_dsub_134 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_dsub_135 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_dsub_136 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_dsub_137 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_dsub_138 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_dsub_139 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_dsub_140 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_dsub_141 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_dsub_142 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_dsub_143 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_dsub_144 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_dsub_145 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_dsub_146 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_147 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_148 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_149 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_dsub_150 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_dsub_151 (void)
{
  extern typeof (dsub (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_dsub_152 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_float);
}
static void
test_dsub_153 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_double);
}
static void
test_dsub_154 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_long_double);
}
static void
test_dsub_155 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_char);
}
static void
test_dsub_156 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_signed_char);
}
static void
test_dsub_157 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_unsigned_char);
}
static void
test_dsub_158 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_short_int);
}
static void
test_dsub_159 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_dsub_160 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_int);
}
static void
test_dsub_161 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_unsigned_int);
}
static void
test_dsub_162 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_long_int);
}
static void
test_dsub_163 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_dsub_164 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_long_long_int);
}
static void
test_dsub_165 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_166 (void)
{
  extern typeof (dsub (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_167 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_168 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_enum_e);
}
static void
test_dsub_169 (void)
{
  extern typeof (dsub (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var__Bool);
}
static void
test_dsub_170 (void)
{
  extern typeof (dsub (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_int, vol_var_bit_field);
}
static void
test_dsub_171 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_float);
}
static void
test_dsub_172 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_double);
}
static void
test_dsub_173 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_dsub_174 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_char);
}
static void
test_dsub_175 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_dsub_176 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_dsub_177 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_dsub_178 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_dsub_179 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_int);
}
static void
test_dsub_180 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_dsub_181 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_dsub_182 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_dsub_183 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_dsub_184 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_185 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_186 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_187 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_dsub_188 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_dsub_189 (void)
{
  extern typeof (dsub (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_dsub_190 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_float);
}
static void
test_dsub_191 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_double);
}
static void
test_dsub_192 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_long_double);
}
static void
test_dsub_193 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_char);
}
static void
test_dsub_194 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_signed_char);
}
static void
test_dsub_195 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_dsub_196 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_short_int);
}
static void
test_dsub_197 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_dsub_198 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_int);
}
static void
test_dsub_199 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_dsub_200 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_long_int);
}
static void
test_dsub_201 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_dsub_202 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_long_long_int);
}
static void
test_dsub_203 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_204 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_205 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_206 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_enum_e);
}
static void
test_dsub_207 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var__Bool);
}
static void
test_dsub_208 (void)
{
  extern typeof (dsub (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_int, vol_var_bit_field);
}
static void
test_dsub_209 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_dsub_210 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_dsub_211 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_dsub_212 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_dsub_213 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_dsub_214 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_dsub_215 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_dsub_216 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_dsub_217 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_dsub_218 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_dsub_219 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_dsub_220 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_dsub_221 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_dsub_222 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_223 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_224 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_225 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_dsub_226 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_dsub_227 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_dsub_228 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_float);
}
static void
test_dsub_229 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_double);
}
static void
test_dsub_230 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_long_double);
}
static void
test_dsub_231 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_char);
}
static void
test_dsub_232 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_dsub_233 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_dsub_234 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_short_int);
}
static void
test_dsub_235 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_dsub_236 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_int);
}
static void
test_dsub_237 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_dsub_238 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_long_int);
}
static void
test_dsub_239 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_dsub_240 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_dsub_241 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_242 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_243 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_244 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_dsub_245 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var__Bool);
}
static void
test_dsub_246 (void)
{
  extern typeof (dsub (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_dsub_247 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_dsub_248 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_dsub_249 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_dsub_250 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_dsub_251 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_dsub_252 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_dsub_253 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_dsub_254 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_dsub_255 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_dsub_256 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_dsub_257 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_dsub_258 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_dsub_259 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_dsub_260 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_261 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_262 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_263 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_dsub_264 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_dsub_265 (void)
{
  extern typeof (dsub (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_266 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_267 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_268 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_269 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_270 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_271 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_272 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_273 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_274 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_275 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_276 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_277 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_278 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_279 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_280 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_281 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_282 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_283 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_284 (void)
{
  extern typeof (dsub (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_285 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_286 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_287 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_288 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_289 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_290 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_291 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_292 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_293 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_294 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_295 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_296 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_297 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_298 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_299 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_300 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_301 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_302 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_303 (void)
{
  extern typeof (dsub (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_dsub_304 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_float);
}
static void
test_dsub_305 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_double);
}
static void
test_dsub_306 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_long_double);
}
static void
test_dsub_307 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_char);
}
static void
test_dsub_308 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_signed_char);
}
static void
test_dsub_309 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_dsub_310 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_short_int);
}
static void
test_dsub_311 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_dsub_312 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_int);
}
static void
test_dsub_313 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_dsub_314 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_long_int);
}
static void
test_dsub_315 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_dsub_316 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_dsub_317 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_318 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_319 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_320 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_enum_e);
}
static void
test_dsub_321 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var__Bool);
}
static void
test_dsub_322 (void)
{
  extern typeof (dsub (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_enum_e, vol_var_bit_field);
}
static void
test_dsub_323 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_float);
}
static void
test_dsub_324 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_double);
}
static void
test_dsub_325 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_long_double);
}
static void
test_dsub_326 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_char);
}
static void
test_dsub_327 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_signed_char);
}
static void
test_dsub_328 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_dsub_329 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_short_int);
}
static void
test_dsub_330 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_dsub_331 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_int);
}
static void
test_dsub_332 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_dsub_333 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_long_int);
}
static void
test_dsub_334 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_dsub_335 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_long_long_int);
}
static void
test_dsub_336 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_337 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_338 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_339 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_enum_e);
}
static void
test_dsub_340 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var__Bool);
}
static void
test_dsub_341 (void)
{
  extern typeof (dsub (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var__Bool, vol_var_bit_field);
}
static void
test_dsub_342 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_float);
}
static void
test_dsub_343 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_double);
}
static void
test_dsub_344 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_long_double)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_long_double);
}
static void
test_dsub_345 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_char);
}
static void
test_dsub_346 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_signed_char);
}
static void
test_dsub_347 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_dsub_348 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_short_int);
}
static void
test_dsub_349 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_dsub_350 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_int);
}
static void
test_dsub_351 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_dsub_352 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_long_int);
}
static void
test_dsub_353 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_dsub_354 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_dsub_355 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_dsub_356 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_dsub_357 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_dsub_358 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_enum_e);
}
static void
test_dsub_359 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var__Bool);
}
static void
test_dsub_360 (void)
{
  extern typeof (dsub (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = dsub (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_dsub_0, "dsub", "dsub (float, float)", LDBL_MANT_DIG, FLT_MANT_DIG },
    { test_dsub_1, "dsub", "dsub (float, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dsub_2, "dsub", "dsub (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dsub_3, "dsub", "dsub (float, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_4, "dsub", "dsub (float, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_5, "dsub", "dsub (float, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_6, "dsub", "dsub (float, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_7, "dsub", "dsub (float, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_8, "dsub", "dsub (float, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_9, "dsub", "dsub (float, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_10, "dsub", "dsub (float, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_11, "dsub", "dsub (float, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_12, "dsub", "dsub (float, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_13, "dsub", "dsub (float, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_14, "dsub", "dsub (float, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_15, "dsub", "dsub (float, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_16, "dsub", "dsub (float, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_17, "dsub", "dsub (float, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_18, "dsub", "dsub (float, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_19, "dsub", "dsub (double, float)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dsub_20, "dsub", "dsub (double, double)", LDBL_MANT_DIG, DBL_MANT_DIG },
    { test_dsub_21, "dsub", "dsub (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dsub_22, "dsub", "dsub (double, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_23, "dsub", "dsub (double, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_24, "dsub", "dsub (double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_25, "dsub", "dsub (double, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_26, "dsub", "dsub (double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_27, "dsub", "dsub (double, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_28, "dsub", "dsub (double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_29, "dsub", "dsub (double, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_30, "dsub", "dsub (double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_31, "dsub", "dsub (double, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_32, "dsub", "dsub (double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_33, "dsub", "dsub (double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_34, "dsub", "dsub (double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_35, "dsub", "dsub (double, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_36, "dsub", "dsub (double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_37, "dsub", "dsub (double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_38, "dsub", "dsub (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dsub_39, "dsub", "dsub (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dsub_40, "dsub", "dsub (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_dsub_41, "dsub", "dsub (long double, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_42, "dsub", "dsub (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_43, "dsub", "dsub (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_44, "dsub", "dsub (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_45, "dsub", "dsub (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_46, "dsub", "dsub (long double, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_47, "dsub", "dsub (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_48, "dsub", "dsub (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_49, "dsub", "dsub (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_50, "dsub", "dsub (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_51, "dsub", "dsub (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_52, "dsub", "dsub (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_53, "dsub", "dsub (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_54, "dsub", "dsub (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_55, "dsub", "dsub (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_56, "dsub", "dsub (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_57, "dsub", "dsub (char, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_58, "dsub", "dsub (char, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_59, "dsub", "dsub (char, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_60, "dsub", "dsub (char, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_61, "dsub", "dsub (char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_62, "dsub", "dsub (char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_63, "dsub", "dsub (char, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_64, "dsub", "dsub (char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_65, "dsub", "dsub (char, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_66, "dsub", "dsub (char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_67, "dsub", "dsub (char, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_68, "dsub", "dsub (char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_69, "dsub", "dsub (char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_70, "dsub", "dsub (char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_71, "dsub", "dsub (char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_72, "dsub", "dsub (char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_73, "dsub", "dsub (char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_74, "dsub", "dsub (char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_75, "dsub", "dsub (char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_76, "dsub", "dsub (signed char, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_77, "dsub", "dsub (signed char, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_78, "dsub", "dsub (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_79, "dsub", "dsub (signed char, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_80, "dsub", "dsub (signed char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_81, "dsub", "dsub (signed char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_82, "dsub", "dsub (signed char, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_83, "dsub", "dsub (signed char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_84, "dsub", "dsub (signed char, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_85, "dsub", "dsub (signed char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_86, "dsub", "dsub (signed char, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_87, "dsub", "dsub (signed char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_88, "dsub", "dsub (signed char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_89, "dsub", "dsub (signed char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_90, "dsub", "dsub (signed char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_91, "dsub", "dsub (signed char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_92, "dsub", "dsub (signed char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_93, "dsub", "dsub (signed char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_94, "dsub", "dsub (signed char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_95, "dsub", "dsub (unsigned char, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_96, "dsub", "dsub (unsigned char, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_97, "dsub", "dsub (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_98, "dsub", "dsub (unsigned char, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_99, "dsub", "dsub (unsigned char, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_100, "dsub", "dsub (unsigned char, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_101, "dsub", "dsub (unsigned char, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_102, "dsub", "dsub (unsigned char, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_103, "dsub", "dsub (unsigned char, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_104, "dsub", "dsub (unsigned char, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_105, "dsub", "dsub (unsigned char, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_106, "dsub", "dsub (unsigned char, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_107, "dsub", "dsub (unsigned char, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_108, "dsub", "dsub (unsigned char, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_109, "dsub", "dsub (unsigned char, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_110, "dsub", "dsub (unsigned char, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_111, "dsub", "dsub (unsigned char, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_112, "dsub", "dsub (unsigned char, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_113, "dsub", "dsub (unsigned char, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_114, "dsub", "dsub (short int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_115, "dsub", "dsub (short int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_116, "dsub", "dsub (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_117, "dsub", "dsub (short int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_118, "dsub", "dsub (short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_119, "dsub", "dsub (short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_120, "dsub", "dsub (short int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_121, "dsub", "dsub (short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_122, "dsub", "dsub (short int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_123, "dsub", "dsub (short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_124, "dsub", "dsub (short int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_125, "dsub", "dsub (short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_126, "dsub", "dsub (short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_127, "dsub", "dsub (short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_128, "dsub", "dsub (short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_129, "dsub", "dsub (short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_130, "dsub", "dsub (short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_131, "dsub", "dsub (short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_132, "dsub", "dsub (short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_133, "dsub", "dsub (unsigned short int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_134, "dsub", "dsub (unsigned short int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_135, "dsub", "dsub (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_136, "dsub", "dsub (unsigned short int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_137, "dsub", "dsub (unsigned short int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_138, "dsub", "dsub (unsigned short int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_139, "dsub", "dsub (unsigned short int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_140, "dsub", "dsub (unsigned short int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_141, "dsub", "dsub (unsigned short int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_142, "dsub", "dsub (unsigned short int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_143, "dsub", "dsub (unsigned short int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_144, "dsub", "dsub (unsigned short int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_145, "dsub", "dsub (unsigned short int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_146, "dsub", "dsub (unsigned short int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_147, "dsub", "dsub (unsigned short int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_148, "dsub", "dsub (unsigned short int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_149, "dsub", "dsub (unsigned short int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_150, "dsub", "dsub (unsigned short int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_151, "dsub", "dsub (unsigned short int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_152, "dsub", "dsub (int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_153, "dsub", "dsub (int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_154, "dsub", "dsub (int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_155, "dsub", "dsub (int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_156, "dsub", "dsub (int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_157, "dsub", "dsub (int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_158, "dsub", "dsub (int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_159, "dsub", "dsub (int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_160, "dsub", "dsub (int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_161, "dsub", "dsub (int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_162, "dsub", "dsub (int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_163, "dsub", "dsub (int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_164, "dsub", "dsub (int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_165, "dsub", "dsub (int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_166, "dsub", "dsub (int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_167, "dsub", "dsub (int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_168, "dsub", "dsub (int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_169, "dsub", "dsub (int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_170, "dsub", "dsub (int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_171, "dsub", "dsub (unsigned int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_172, "dsub", "dsub (unsigned int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_173, "dsub", "dsub (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_174, "dsub", "dsub (unsigned int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_175, "dsub", "dsub (unsigned int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_176, "dsub", "dsub (unsigned int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_177, "dsub", "dsub (unsigned int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_178, "dsub", "dsub (unsigned int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_179, "dsub", "dsub (unsigned int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_180, "dsub", "dsub (unsigned int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_181, "dsub", "dsub (unsigned int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_182, "dsub", "dsub (unsigned int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_183, "dsub", "dsub (unsigned int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_184, "dsub", "dsub (unsigned int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_185, "dsub", "dsub (unsigned int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_186, "dsub", "dsub (unsigned int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_187, "dsub", "dsub (unsigned int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_188, "dsub", "dsub (unsigned int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_189, "dsub", "dsub (unsigned int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_190, "dsub", "dsub (long int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_191, "dsub", "dsub (long int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_192, "dsub", "dsub (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_193, "dsub", "dsub (long int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_194, "dsub", "dsub (long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_195, "dsub", "dsub (long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_196, "dsub", "dsub (long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_197, "dsub", "dsub (long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_198, "dsub", "dsub (long int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_199, "dsub", "dsub (long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_200, "dsub", "dsub (long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_201, "dsub", "dsub (long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_202, "dsub", "dsub (long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_203, "dsub", "dsub (long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_204, "dsub", "dsub (long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_205, "dsub", "dsub (long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_206, "dsub", "dsub (long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_207, "dsub", "dsub (long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_208, "dsub", "dsub (long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_209, "dsub", "dsub (unsigned long int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_210, "dsub", "dsub (unsigned long int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_211, "dsub", "dsub (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_212, "dsub", "dsub (unsigned long int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_213, "dsub", "dsub (unsigned long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_214, "dsub", "dsub (unsigned long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_215, "dsub", "dsub (unsigned long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_216, "dsub", "dsub (unsigned long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_217, "dsub", "dsub (unsigned long int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_218, "dsub", "dsub (unsigned long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_219, "dsub", "dsub (unsigned long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_220, "dsub", "dsub (unsigned long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_221, "dsub", "dsub (unsigned long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_222, "dsub", "dsub (unsigned long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_223, "dsub", "dsub (unsigned long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_224, "dsub", "dsub (unsigned long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_225, "dsub", "dsub (unsigned long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_226, "dsub", "dsub (unsigned long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_227, "dsub", "dsub (unsigned long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_228, "dsub", "dsub (long long int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_229, "dsub", "dsub (long long int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_230, "dsub", "dsub (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_231, "dsub", "dsub (long long int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_232, "dsub", "dsub (long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_233, "dsub", "dsub (long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_234, "dsub", "dsub (long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_235, "dsub", "dsub (long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_236, "dsub", "dsub (long long int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_237, "dsub", "dsub (long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_238, "dsub", "dsub (long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_239, "dsub", "dsub (long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_240, "dsub", "dsub (long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_241, "dsub", "dsub (long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_242, "dsub", "dsub (long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_243, "dsub", "dsub (long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_244, "dsub", "dsub (long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_245, "dsub", "dsub (long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_246, "dsub", "dsub (long long int, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_247, "dsub", "dsub (unsigned long long int, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_248, "dsub", "dsub (unsigned long long int, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_249, "dsub", "dsub (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_250, "dsub", "dsub (unsigned long long int, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_251, "dsub", "dsub (unsigned long long int, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_252, "dsub", "dsub (unsigned long long int, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_253, "dsub", "dsub (unsigned long long int, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_254, "dsub", "dsub (unsigned long long int, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_255, "dsub", "dsub (unsigned long long int, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_256, "dsub", "dsub (unsigned long long int, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_257, "dsub", "dsub (unsigned long long int, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_258, "dsub", "dsub (unsigned long long int, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_259, "dsub", "dsub (unsigned long long int, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_260, "dsub", "dsub (unsigned long long int, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_261, "dsub", "dsub (unsigned long long int, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_262, "dsub", "dsub (unsigned long long int, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_263, "dsub", "dsub (unsigned long long int, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_264, "dsub", "dsub (unsigned long long int, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_265, "dsub", "dsub (unsigned long long int, bit_field)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_266, "dsub", "dsub (__int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_267, "dsub", "dsub (__int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_268, "dsub", "dsub (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_269, "dsub", "dsub (__int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_270, "dsub", "dsub (__int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_271, "dsub", "dsub (__int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_272, "dsub", "dsub (__int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_273, "dsub", "dsub (__int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_274, "dsub", "dsub (__int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_275, "dsub", "dsub (__int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_276, "dsub", "dsub (__int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_277, "dsub", "dsub (__int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_278, "dsub", "dsub (__int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_279, "dsub", "dsub (__int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_280, "dsub", "dsub (__int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_281, "dsub", "dsub (__int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_282, "dsub", "dsub (__int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_283, "dsub", "dsub (__int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_284, "dsub", "dsub (__int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_285, "dsub", "dsub (unsigned __int128, float)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_286, "dsub", "dsub (unsigned __int128, double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_287, "dsub", "dsub (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_288, "dsub", "dsub (unsigned __int128, char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_289, "dsub", "dsub (unsigned __int128, signed char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_290, "dsub", "dsub (unsigned __int128, unsigned char)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_291, "dsub", "dsub (unsigned __int128, short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_292, "dsub", "dsub (unsigned __int128, unsigned short int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_293, "dsub", "dsub (unsigned __int128, int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_294, "dsub", "dsub (unsigned __int128, unsigned int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_295, "dsub", "dsub (unsigned __int128, long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_296, "dsub", "dsub (unsigned __int128, unsigned long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_297, "dsub", "dsub (unsigned __int128, long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_298, "dsub", "dsub (unsigned __int128, unsigned long long int)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_299, "dsub", "dsub (unsigned __int128, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_300, "dsub", "dsub (unsigned __int128, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_301, "dsub", "dsub (unsigned __int128, enum e)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_302, "dsub", "dsub (unsigned __int128, _Bool)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_303, "dsub", "dsub (unsigned __int128, bit_field)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_304, "dsub", "dsub (enum e, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_305, "dsub", "dsub (enum e, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_306, "dsub", "dsub (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_307, "dsub", "dsub (enum e, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_308, "dsub", "dsub (enum e, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_309, "dsub", "dsub (enum e, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_310, "dsub", "dsub (enum e, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_311, "dsub", "dsub (enum e, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_312, "dsub", "dsub (enum e, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_313, "dsub", "dsub (enum e, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_314, "dsub", "dsub (enum e, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_315, "dsub", "dsub (enum e, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_316, "dsub", "dsub (enum e, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_317, "dsub", "dsub (enum e, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_318, "dsub", "dsub (enum e, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_319, "dsub", "dsub (enum e, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_320, "dsub", "dsub (enum e, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_321, "dsub", "dsub (enum e, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_322, "dsub", "dsub (enum e, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_323, "dsub", "dsub (_Bool, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_324, "dsub", "dsub (_Bool, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_325, "dsub", "dsub (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_326, "dsub", "dsub (_Bool, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_327, "dsub", "dsub (_Bool, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_328, "dsub", "dsub (_Bool, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_329, "dsub", "dsub (_Bool, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_330, "dsub", "dsub (_Bool, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_331, "dsub", "dsub (_Bool, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_332, "dsub", "dsub (_Bool, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_333, "dsub", "dsub (_Bool, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_334, "dsub", "dsub (_Bool, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_335, "dsub", "dsub (_Bool, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_336, "dsub", "dsub (_Bool, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_337, "dsub", "dsub (_Bool, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_338, "dsub", "dsub (_Bool, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_339, "dsub", "dsub (_Bool, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_340, "dsub", "dsub (_Bool, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_341, "dsub", "dsub (_Bool, bit_field)", LDBL_MANT_DIG, 0 },
    { test_dsub_342, "dsub", "dsub (bit_field, float)", LDBL_MANT_DIG, 0 },
    { test_dsub_343, "dsub", "dsub (bit_field, double)", LDBL_MANT_DIG, 0 },
    { test_dsub_344, "dsub", "dsub (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_dsub_345, "dsub", "dsub (bit_field, char)", LDBL_MANT_DIG, 0 },
    { test_dsub_346, "dsub", "dsub (bit_field, signed char)", LDBL_MANT_DIG, 0 },
    { test_dsub_347, "dsub", "dsub (bit_field, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_dsub_348, "dsub", "dsub (bit_field, short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_349, "dsub", "dsub (bit_field, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_dsub_350, "dsub", "dsub (bit_field, int)", LDBL_MANT_DIG, 0 },
    { test_dsub_351, "dsub", "dsub (bit_field, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_dsub_352, "dsub", "dsub (bit_field, long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_353, "dsub", "dsub (bit_field, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_354, "dsub", "dsub (bit_field, long long int)", LDBL_MANT_DIG, 0 },
    { test_dsub_355, "dsub", "dsub (bit_field, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_dsub_356, "dsub", "dsub (bit_field, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_dsub_357, "dsub", "dsub (bit_field, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_dsub_358, "dsub", "dsub (bit_field, enum e)", LDBL_MANT_DIG, 0 },
    { test_dsub_359, "dsub", "dsub (bit_field, _Bool)", LDBL_MANT_DIG, 0 },
    { test_dsub_360, "dsub", "dsub (bit_field, bit_field)", LDBL_MANT_DIG, 0 },
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
