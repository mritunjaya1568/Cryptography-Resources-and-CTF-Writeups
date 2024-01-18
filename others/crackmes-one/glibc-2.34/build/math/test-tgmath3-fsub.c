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
(fsub) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fsub";
  return 0;
}
float
(fsubl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fsub";
  return 0;
}
static void
test_fsub_0 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_float);
}
static void
test_fsub_1 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_double);
}
static void
test_fsub_2 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_long_double);
}
static void
test_fsub_3 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_char);
}
static void
test_fsub_4 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_signed_char);
}
static void
test_fsub_5 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_unsigned_char);
}
static void
test_fsub_6 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_short_int);
}
static void
test_fsub_7 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fsub_8 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_int);
}
static void
test_fsub_9 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_unsigned_int);
}
static void
test_fsub_10 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_long_int);
}
static void
test_fsub_11 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fsub_12 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_long_long_int);
}
static void
test_fsub_13 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_14 (void)
{
  extern typeof (fsub (vol_var_float, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_15 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_16 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_enum_e);
}
static void
test_fsub_17 (void)
{
  extern typeof (fsub (vol_var_float, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var__Bool);
}
static void
test_fsub_18 (void)
{
  extern typeof (fsub (vol_var_float, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_float, vol_var_bit_field);
}
static void
test_fsub_19 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_float);
}
static void
test_fsub_20 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_double);
}
static void
test_fsub_21 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_long_double);
}
static void
test_fsub_22 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_char);
}
static void
test_fsub_23 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_signed_char);
}
static void
test_fsub_24 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_unsigned_char);
}
static void
test_fsub_25 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_short_int);
}
static void
test_fsub_26 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fsub_27 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_int);
}
static void
test_fsub_28 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_unsigned_int);
}
static void
test_fsub_29 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_long_int);
}
static void
test_fsub_30 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fsub_31 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_long_long_int);
}
static void
test_fsub_32 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_33 (void)
{
  extern typeof (fsub (vol_var_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_34 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_35 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_enum_e);
}
static void
test_fsub_36 (void)
{
  extern typeof (fsub (vol_var_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var__Bool);
}
static void
test_fsub_37 (void)
{
  extern typeof (fsub (vol_var_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_double, vol_var_bit_field);
}
static void
test_fsub_38 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_float);
}
static void
test_fsub_39 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_double);
}
static void
test_fsub_40 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_long_double);
}
static void
test_fsub_41 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_char);
}
static void
test_fsub_42 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_signed_char);
}
static void
test_fsub_43 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fsub_44 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_short_int);
}
static void
test_fsub_45 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fsub_46 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_int);
}
static void
test_fsub_47 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fsub_48 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_long_int);
}
static void
test_fsub_49 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fsub_50 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fsub_51 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_52 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_53 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_54 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_enum_e);
}
static void
test_fsub_55 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var__Bool);
}
static void
test_fsub_56 (void)
{
  extern typeof (fsub (vol_var_long_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_double, vol_var_bit_field);
}
static void
test_fsub_57 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_float);
}
static void
test_fsub_58 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_double);
}
static void
test_fsub_59 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_long_double);
}
static void
test_fsub_60 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_char);
}
static void
test_fsub_61 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_signed_char);
}
static void
test_fsub_62 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_unsigned_char);
}
static void
test_fsub_63 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_short_int);
}
static void
test_fsub_64 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fsub_65 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_int);
}
static void
test_fsub_66 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_unsigned_int);
}
static void
test_fsub_67 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_long_int);
}
static void
test_fsub_68 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fsub_69 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_long_long_int);
}
static void
test_fsub_70 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_71 (void)
{
  extern typeof (fsub (vol_var_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_72 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_73 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_enum_e);
}
static void
test_fsub_74 (void)
{
  extern typeof (fsub (vol_var_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var__Bool);
}
static void
test_fsub_75 (void)
{
  extern typeof (fsub (vol_var_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_char, vol_var_bit_field);
}
static void
test_fsub_76 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_float);
}
static void
test_fsub_77 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_double);
}
static void
test_fsub_78 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_long_double);
}
static void
test_fsub_79 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_char);
}
static void
test_fsub_80 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fsub_81 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fsub_82 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_short_int);
}
static void
test_fsub_83 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fsub_84 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_int);
}
static void
test_fsub_85 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fsub_86 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_long_int);
}
static void
test_fsub_87 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fsub_88 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fsub_89 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_90 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_91 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_92 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fsub_93 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var__Bool);
}
static void
test_fsub_94 (void)
{
  extern typeof (fsub (vol_var_signed_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_signed_char, vol_var_bit_field);
}
static void
test_fsub_95 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_float);
}
static void
test_fsub_96 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_double);
}
static void
test_fsub_97 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_fsub_98 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_char);
}
static void
test_fsub_99 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fsub_100 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fsub_101 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fsub_102 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fsub_103 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_int);
}
static void
test_fsub_104 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fsub_105 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fsub_106 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fsub_107 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fsub_108 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_109 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_110 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_111 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fsub_112 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fsub_113 (void)
{
  extern typeof (fsub (vol_var_unsigned_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_fsub_114 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_float);
}
static void
test_fsub_115 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_double);
}
static void
test_fsub_116 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_long_double);
}
static void
test_fsub_117 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_char);
}
static void
test_fsub_118 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_signed_char);
}
static void
test_fsub_119 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fsub_120 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_short_int);
}
static void
test_fsub_121 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fsub_122 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_int);
}
static void
test_fsub_123 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fsub_124 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_long_int);
}
static void
test_fsub_125 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fsub_126 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fsub_127 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_128 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_129 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_130 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_enum_e);
}
static void
test_fsub_131 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var__Bool);
}
static void
test_fsub_132 (void)
{
  extern typeof (fsub (vol_var_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_short_int, vol_var_bit_field);
}
static void
test_fsub_133 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_fsub_134 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fsub_135 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_fsub_136 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fsub_137 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fsub_138 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fsub_139 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fsub_140 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fsub_141 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fsub_142 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fsub_143 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fsub_144 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fsub_145 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fsub_146 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_147 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_148 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_149 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fsub_150 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fsub_151 (void)
{
  extern typeof (fsub (vol_var_unsigned_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_fsub_152 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_float);
}
static void
test_fsub_153 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_double);
}
static void
test_fsub_154 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_long_double);
}
static void
test_fsub_155 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_char);
}
static void
test_fsub_156 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_signed_char);
}
static void
test_fsub_157 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_unsigned_char);
}
static void
test_fsub_158 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_short_int);
}
static void
test_fsub_159 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fsub_160 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_int);
}
static void
test_fsub_161 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_unsigned_int);
}
static void
test_fsub_162 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_long_int);
}
static void
test_fsub_163 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fsub_164 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_long_long_int);
}
static void
test_fsub_165 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_166 (void)
{
  extern typeof (fsub (vol_var_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_167 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_168 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_enum_e);
}
static void
test_fsub_169 (void)
{
  extern typeof (fsub (vol_var_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var__Bool);
}
static void
test_fsub_170 (void)
{
  extern typeof (fsub (vol_var_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_int, vol_var_bit_field);
}
static void
test_fsub_171 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_float);
}
static void
test_fsub_172 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_double);
}
static void
test_fsub_173 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_fsub_174 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_char);
}
static void
test_fsub_175 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fsub_176 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fsub_177 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fsub_178 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fsub_179 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_int);
}
static void
test_fsub_180 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fsub_181 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fsub_182 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fsub_183 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fsub_184 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_185 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_186 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_187 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fsub_188 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fsub_189 (void)
{
  extern typeof (fsub (vol_var_unsigned_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_fsub_190 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_float);
}
static void
test_fsub_191 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_double);
}
static void
test_fsub_192 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_long_double);
}
static void
test_fsub_193 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_char);
}
static void
test_fsub_194 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_signed_char);
}
static void
test_fsub_195 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fsub_196 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_short_int);
}
static void
test_fsub_197 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fsub_198 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_int);
}
static void
test_fsub_199 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fsub_200 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_long_int);
}
static void
test_fsub_201 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fsub_202 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fsub_203 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_204 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_205 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_206 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_enum_e);
}
static void
test_fsub_207 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var__Bool);
}
static void
test_fsub_208 (void)
{
  extern typeof (fsub (vol_var_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_int, vol_var_bit_field);
}
static void
test_fsub_209 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_fsub_210 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fsub_211 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_fsub_212 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fsub_213 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fsub_214 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fsub_215 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fsub_216 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fsub_217 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fsub_218 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fsub_219 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fsub_220 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fsub_221 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fsub_222 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_223 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_224 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_225 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fsub_226 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fsub_227 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_fsub_228 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_float);
}
static void
test_fsub_229 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_double);
}
static void
test_fsub_230 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_long_double);
}
static void
test_fsub_231 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_char);
}
static void
test_fsub_232 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fsub_233 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fsub_234 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fsub_235 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fsub_236 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_int);
}
static void
test_fsub_237 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fsub_238 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fsub_239 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fsub_240 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fsub_241 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_242 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_243 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_244 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fsub_245 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fsub_246 (void)
{
  extern typeof (fsub (vol_var_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_fsub_247 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_fsub_248 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fsub_249 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_fsub_250 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fsub_251 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fsub_252 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fsub_253 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fsub_254 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fsub_255 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fsub_256 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fsub_257 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fsub_258 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fsub_259 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fsub_260 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_261 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_262 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_263 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fsub_264 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fsub_265 (void)
{
  extern typeof (fsub (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_266 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_267 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_268 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_269 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_270 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_271 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_272 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_273 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_274 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_275 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_276 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_277 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_278 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_279 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_280 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_281 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_282 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_283 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_284 (void)
{
  extern typeof (fsub (vol_var___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_285 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_286 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_287 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_288 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_289 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_290 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_291 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_292 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_293 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_294 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_295 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_296 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_297 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_298 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_299 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_300 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_301 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_302 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_303 (void)
{
  extern typeof (fsub (vol_var_unsigned___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_fsub_304 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_float);
}
static void
test_fsub_305 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_double);
}
static void
test_fsub_306 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_long_double);
}
static void
test_fsub_307 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_char);
}
static void
test_fsub_308 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fsub_309 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fsub_310 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_short_int);
}
static void
test_fsub_311 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fsub_312 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_int);
}
static void
test_fsub_313 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fsub_314 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_long_int);
}
static void
test_fsub_315 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fsub_316 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fsub_317 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_318 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_319 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_320 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fsub_321 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var__Bool);
}
static void
test_fsub_322 (void)
{
  extern typeof (fsub (vol_var_enum_e, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_enum_e, vol_var_bit_field);
}
static void
test_fsub_323 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_float);
}
static void
test_fsub_324 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_double);
}
static void
test_fsub_325 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_long_double);
}
static void
test_fsub_326 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_char);
}
static void
test_fsub_327 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_signed_char);
}
static void
test_fsub_328 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fsub_329 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_short_int);
}
static void
test_fsub_330 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fsub_331 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_int);
}
static void
test_fsub_332 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fsub_333 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_long_int);
}
static void
test_fsub_334 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fsub_335 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fsub_336 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_337 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_338 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_339 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_enum_e);
}
static void
test_fsub_340 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var__Bool);
}
static void
test_fsub_341 (void)
{
  extern typeof (fsub (vol_var__Bool, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var__Bool, vol_var_bit_field);
}
static void
test_fsub_342 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_float);
}
static void
test_fsub_343 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_double);
}
static void
test_fsub_344 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_long_double);
}
static void
test_fsub_345 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_char);
}
static void
test_fsub_346 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fsub_347 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fsub_348 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_short_int);
}
static void
test_fsub_349 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fsub_350 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_int);
}
static void
test_fsub_351 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fsub_352 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_long_int);
}
static void
test_fsub_353 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fsub_354 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fsub_355 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fsub_356 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fsub_357 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fsub_358 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fsub_359 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var__Bool);
}
static void
test_fsub_360 (void)
{
  extern typeof (fsub (vol_var_bit_field, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fsub (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_fsub_0, "fsub", "fsub (float, float)", DBL_MANT_DIG, FLT_MANT_DIG },
    { test_fsub_1, "fsub", "fsub (float, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fsub_2, "fsub", "fsub (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fsub_3, "fsub", "fsub (float, char)", DBL_MANT_DIG, 0 },
    { test_fsub_4, "fsub", "fsub (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_5, "fsub", "fsub (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_6, "fsub", "fsub (float, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_7, "fsub", "fsub (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_8, "fsub", "fsub (float, int)", DBL_MANT_DIG, 0 },
    { test_fsub_9, "fsub", "fsub (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_10, "fsub", "fsub (float, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_11, "fsub", "fsub (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_12, "fsub", "fsub (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_13, "fsub", "fsub (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_14, "fsub", "fsub (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_15, "fsub", "fsub (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_16, "fsub", "fsub (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_17, "fsub", "fsub (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_18, "fsub", "fsub (float, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_19, "fsub", "fsub (double, float)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fsub_20, "fsub", "fsub (double, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fsub_21, "fsub", "fsub (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fsub_22, "fsub", "fsub (double, char)", DBL_MANT_DIG, 0 },
    { test_fsub_23, "fsub", "fsub (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_24, "fsub", "fsub (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_25, "fsub", "fsub (double, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_26, "fsub", "fsub (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_27, "fsub", "fsub (double, int)", DBL_MANT_DIG, 0 },
    { test_fsub_28, "fsub", "fsub (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_29, "fsub", "fsub (double, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_30, "fsub", "fsub (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_31, "fsub", "fsub (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_32, "fsub", "fsub (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_33, "fsub", "fsub (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_34, "fsub", "fsub (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_35, "fsub", "fsub (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_36, "fsub", "fsub (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_37, "fsub", "fsub (double, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_38, "fsub", "fsub (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fsub_39, "fsub", "fsub (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fsub_40, "fsub", "fsub (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fsub_41, "fsub", "fsub (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fsub_42, "fsub", "fsub (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fsub_43, "fsub", "fsub (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fsub_44, "fsub", "fsub (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fsub_45, "fsub", "fsub (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fsub_46, "fsub", "fsub (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fsub_47, "fsub", "fsub (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fsub_48, "fsub", "fsub (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fsub_49, "fsub", "fsub (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fsub_50, "fsub", "fsub (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fsub_51, "fsub", "fsub (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_52, "fsub", "fsub (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_53, "fsub", "fsub (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fsub_54, "fsub", "fsub (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fsub_55, "fsub", "fsub (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fsub_56, "fsub", "fsub (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_fsub_57, "fsub", "fsub (char, float)", DBL_MANT_DIG, 0 },
    { test_fsub_58, "fsub", "fsub (char, double)", DBL_MANT_DIG, 0 },
    { test_fsub_59, "fsub", "fsub (char, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_60, "fsub", "fsub (char, char)", DBL_MANT_DIG, 0 },
    { test_fsub_61, "fsub", "fsub (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_62, "fsub", "fsub (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_63, "fsub", "fsub (char, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_64, "fsub", "fsub (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_65, "fsub", "fsub (char, int)", DBL_MANT_DIG, 0 },
    { test_fsub_66, "fsub", "fsub (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_67, "fsub", "fsub (char, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_68, "fsub", "fsub (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_69, "fsub", "fsub (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_70, "fsub", "fsub (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_71, "fsub", "fsub (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_72, "fsub", "fsub (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_73, "fsub", "fsub (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_74, "fsub", "fsub (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_75, "fsub", "fsub (char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_76, "fsub", "fsub (signed char, float)", DBL_MANT_DIG, 0 },
    { test_fsub_77, "fsub", "fsub (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fsub_78, "fsub", "fsub (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_79, "fsub", "fsub (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fsub_80, "fsub", "fsub (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_81, "fsub", "fsub (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_82, "fsub", "fsub (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_83, "fsub", "fsub (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_84, "fsub", "fsub (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fsub_85, "fsub", "fsub (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_86, "fsub", "fsub (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_87, "fsub", "fsub (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_88, "fsub", "fsub (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_89, "fsub", "fsub (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_90, "fsub", "fsub (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_91, "fsub", "fsub (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_92, "fsub", "fsub (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_93, "fsub", "fsub (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_94, "fsub", "fsub (signed char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_95, "fsub", "fsub (unsigned char, float)", DBL_MANT_DIG, 0 },
    { test_fsub_96, "fsub", "fsub (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fsub_97, "fsub", "fsub (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_98, "fsub", "fsub (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fsub_99, "fsub", "fsub (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_100, "fsub", "fsub (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_101, "fsub", "fsub (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_102, "fsub", "fsub (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_103, "fsub", "fsub (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fsub_104, "fsub", "fsub (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_105, "fsub", "fsub (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_106, "fsub", "fsub (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_107, "fsub", "fsub (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_108, "fsub", "fsub (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_109, "fsub", "fsub (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_110, "fsub", "fsub (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_111, "fsub", "fsub (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_112, "fsub", "fsub (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_113, "fsub", "fsub (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_114, "fsub", "fsub (short int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_115, "fsub", "fsub (short int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_116, "fsub", "fsub (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_117, "fsub", "fsub (short int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_118, "fsub", "fsub (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_119, "fsub", "fsub (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_120, "fsub", "fsub (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_121, "fsub", "fsub (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_122, "fsub", "fsub (short int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_123, "fsub", "fsub (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_124, "fsub", "fsub (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_125, "fsub", "fsub (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_126, "fsub", "fsub (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_127, "fsub", "fsub (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_128, "fsub", "fsub (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_129, "fsub", "fsub (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_130, "fsub", "fsub (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_131, "fsub", "fsub (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_132, "fsub", "fsub (short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_133, "fsub", "fsub (unsigned short int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_134, "fsub", "fsub (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_135, "fsub", "fsub (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_136, "fsub", "fsub (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_137, "fsub", "fsub (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_138, "fsub", "fsub (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_139, "fsub", "fsub (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_140, "fsub", "fsub (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_141, "fsub", "fsub (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_142, "fsub", "fsub (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_143, "fsub", "fsub (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_144, "fsub", "fsub (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_145, "fsub", "fsub (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_146, "fsub", "fsub (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_147, "fsub", "fsub (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_148, "fsub", "fsub (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_149, "fsub", "fsub (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_150, "fsub", "fsub (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_151, "fsub", "fsub (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_152, "fsub", "fsub (int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_153, "fsub", "fsub (int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_154, "fsub", "fsub (int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_155, "fsub", "fsub (int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_156, "fsub", "fsub (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_157, "fsub", "fsub (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_158, "fsub", "fsub (int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_159, "fsub", "fsub (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_160, "fsub", "fsub (int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_161, "fsub", "fsub (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_162, "fsub", "fsub (int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_163, "fsub", "fsub (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_164, "fsub", "fsub (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_165, "fsub", "fsub (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_166, "fsub", "fsub (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_167, "fsub", "fsub (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_168, "fsub", "fsub (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_169, "fsub", "fsub (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_170, "fsub", "fsub (int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_171, "fsub", "fsub (unsigned int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_172, "fsub", "fsub (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_173, "fsub", "fsub (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_174, "fsub", "fsub (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_175, "fsub", "fsub (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_176, "fsub", "fsub (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_177, "fsub", "fsub (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_178, "fsub", "fsub (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_179, "fsub", "fsub (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_180, "fsub", "fsub (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_181, "fsub", "fsub (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_182, "fsub", "fsub (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_183, "fsub", "fsub (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_184, "fsub", "fsub (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_185, "fsub", "fsub (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_186, "fsub", "fsub (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_187, "fsub", "fsub (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_188, "fsub", "fsub (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_189, "fsub", "fsub (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_190, "fsub", "fsub (long int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_191, "fsub", "fsub (long int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_192, "fsub", "fsub (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_193, "fsub", "fsub (long int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_194, "fsub", "fsub (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_195, "fsub", "fsub (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_196, "fsub", "fsub (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_197, "fsub", "fsub (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_198, "fsub", "fsub (long int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_199, "fsub", "fsub (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_200, "fsub", "fsub (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_201, "fsub", "fsub (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_202, "fsub", "fsub (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_203, "fsub", "fsub (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_204, "fsub", "fsub (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_205, "fsub", "fsub (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_206, "fsub", "fsub (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_207, "fsub", "fsub (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_208, "fsub", "fsub (long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_209, "fsub", "fsub (unsigned long int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_210, "fsub", "fsub (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_211, "fsub", "fsub (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_212, "fsub", "fsub (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_213, "fsub", "fsub (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_214, "fsub", "fsub (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_215, "fsub", "fsub (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_216, "fsub", "fsub (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_217, "fsub", "fsub (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_218, "fsub", "fsub (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_219, "fsub", "fsub (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_220, "fsub", "fsub (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_221, "fsub", "fsub (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_222, "fsub", "fsub (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_223, "fsub", "fsub (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_224, "fsub", "fsub (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_225, "fsub", "fsub (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_226, "fsub", "fsub (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_227, "fsub", "fsub (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_228, "fsub", "fsub (long long int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_229, "fsub", "fsub (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_230, "fsub", "fsub (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_231, "fsub", "fsub (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_232, "fsub", "fsub (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_233, "fsub", "fsub (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_234, "fsub", "fsub (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_235, "fsub", "fsub (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_236, "fsub", "fsub (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_237, "fsub", "fsub (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_238, "fsub", "fsub (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_239, "fsub", "fsub (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_240, "fsub", "fsub (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_241, "fsub", "fsub (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_242, "fsub", "fsub (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_243, "fsub", "fsub (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_244, "fsub", "fsub (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_245, "fsub", "fsub (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_246, "fsub", "fsub (long long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_247, "fsub", "fsub (unsigned long long int, float)", DBL_MANT_DIG, 0 },
    { test_fsub_248, "fsub", "fsub (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fsub_249, "fsub", "fsub (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_250, "fsub", "fsub (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fsub_251, "fsub", "fsub (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_252, "fsub", "fsub (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_253, "fsub", "fsub (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_254, "fsub", "fsub (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_255, "fsub", "fsub (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fsub_256, "fsub", "fsub (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_257, "fsub", "fsub (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_258, "fsub", "fsub (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_259, "fsub", "fsub (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_260, "fsub", "fsub (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_261, "fsub", "fsub (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_262, "fsub", "fsub (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_263, "fsub", "fsub (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_264, "fsub", "fsub (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_265, "fsub", "fsub (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_266, "fsub", "fsub (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_267, "fsub", "fsub (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_268, "fsub", "fsub (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_269, "fsub", "fsub (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_270, "fsub", "fsub (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_271, "fsub", "fsub (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_272, "fsub", "fsub (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_273, "fsub", "fsub (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_274, "fsub", "fsub (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_275, "fsub", "fsub (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_276, "fsub", "fsub (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_277, "fsub", "fsub (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_278, "fsub", "fsub (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_279, "fsub", "fsub (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_280, "fsub", "fsub (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_281, "fsub", "fsub (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_282, "fsub", "fsub (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_283, "fsub", "fsub (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_284, "fsub", "fsub (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_285, "fsub", "fsub (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_286, "fsub", "fsub (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_287, "fsub", "fsub (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_288, "fsub", "fsub (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_289, "fsub", "fsub (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_290, "fsub", "fsub (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_291, "fsub", "fsub (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_292, "fsub", "fsub (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_293, "fsub", "fsub (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_294, "fsub", "fsub (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_295, "fsub", "fsub (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_296, "fsub", "fsub (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_297, "fsub", "fsub (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_298, "fsub", "fsub (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_299, "fsub", "fsub (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_300, "fsub", "fsub (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_301, "fsub", "fsub (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_302, "fsub", "fsub (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_303, "fsub", "fsub (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_304, "fsub", "fsub (enum e, float)", DBL_MANT_DIG, 0 },
    { test_fsub_305, "fsub", "fsub (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fsub_306, "fsub", "fsub (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_307, "fsub", "fsub (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fsub_308, "fsub", "fsub (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_309, "fsub", "fsub (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_310, "fsub", "fsub (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_311, "fsub", "fsub (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_312, "fsub", "fsub (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fsub_313, "fsub", "fsub (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_314, "fsub", "fsub (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_315, "fsub", "fsub (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_316, "fsub", "fsub (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_317, "fsub", "fsub (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_318, "fsub", "fsub (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_319, "fsub", "fsub (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_320, "fsub", "fsub (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_321, "fsub", "fsub (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_322, "fsub", "fsub (enum e, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_323, "fsub", "fsub (_Bool, float)", DBL_MANT_DIG, 0 },
    { test_fsub_324, "fsub", "fsub (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fsub_325, "fsub", "fsub (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_326, "fsub", "fsub (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fsub_327, "fsub", "fsub (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_328, "fsub", "fsub (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_329, "fsub", "fsub (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_330, "fsub", "fsub (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_331, "fsub", "fsub (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fsub_332, "fsub", "fsub (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_333, "fsub", "fsub (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_334, "fsub", "fsub (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_335, "fsub", "fsub (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_336, "fsub", "fsub (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_337, "fsub", "fsub (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_338, "fsub", "fsub (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_339, "fsub", "fsub (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_340, "fsub", "fsub (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_341, "fsub", "fsub (_Bool, bit_field)", DBL_MANT_DIG, 0 },
    { test_fsub_342, "fsub", "fsub (bit_field, float)", DBL_MANT_DIG, 0 },
    { test_fsub_343, "fsub", "fsub (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fsub_344, "fsub", "fsub (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_fsub_345, "fsub", "fsub (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fsub_346, "fsub", "fsub (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fsub_347, "fsub", "fsub (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fsub_348, "fsub", "fsub (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fsub_349, "fsub", "fsub (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fsub_350, "fsub", "fsub (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fsub_351, "fsub", "fsub (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fsub_352, "fsub", "fsub (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fsub_353, "fsub", "fsub (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fsub_354, "fsub", "fsub (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fsub_355, "fsub", "fsub (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fsub_356, "fsub", "fsub (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fsub_357, "fsub", "fsub (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fsub_358, "fsub", "fsub (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fsub_359, "fsub", "fsub (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fsub_360, "fsub", "fsub (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
