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
(fadd) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fadd";
  return 0;
}
float
(faddl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fadd";
  return 0;
}
static void
test_fadd_0 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_float);
}
static void
test_fadd_1 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_double);
}
static void
test_fadd_2 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_long_double);
}
static void
test_fadd_3 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_char);
}
static void
test_fadd_4 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_signed_char);
}
static void
test_fadd_5 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_unsigned_char);
}
static void
test_fadd_6 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_short_int);
}
static void
test_fadd_7 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fadd_8 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_int);
}
static void
test_fadd_9 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_unsigned_int);
}
static void
test_fadd_10 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_long_int);
}
static void
test_fadd_11 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fadd_12 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_long_long_int);
}
static void
test_fadd_13 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_14 (void)
{
  extern typeof (fadd (vol_var_float, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_15 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_16 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_enum_e);
}
static void
test_fadd_17 (void)
{
  extern typeof (fadd (vol_var_float, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var__Bool);
}
static void
test_fadd_18 (void)
{
  extern typeof (fadd (vol_var_float, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_float, vol_var_bit_field);
}
static void
test_fadd_19 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_float);
}
static void
test_fadd_20 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_double);
}
static void
test_fadd_21 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_long_double);
}
static void
test_fadd_22 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_char);
}
static void
test_fadd_23 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_signed_char);
}
static void
test_fadd_24 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_unsigned_char);
}
static void
test_fadd_25 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_short_int);
}
static void
test_fadd_26 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fadd_27 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_int);
}
static void
test_fadd_28 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_unsigned_int);
}
static void
test_fadd_29 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_long_int);
}
static void
test_fadd_30 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fadd_31 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_long_long_int);
}
static void
test_fadd_32 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_33 (void)
{
  extern typeof (fadd (vol_var_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_34 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_35 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_enum_e);
}
static void
test_fadd_36 (void)
{
  extern typeof (fadd (vol_var_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var__Bool);
}
static void
test_fadd_37 (void)
{
  extern typeof (fadd (vol_var_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_double, vol_var_bit_field);
}
static void
test_fadd_38 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_float);
}
static void
test_fadd_39 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_double);
}
static void
test_fadd_40 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_long_double);
}
static void
test_fadd_41 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_char);
}
static void
test_fadd_42 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_signed_char);
}
static void
test_fadd_43 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fadd_44 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_short_int);
}
static void
test_fadd_45 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fadd_46 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_int);
}
static void
test_fadd_47 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fadd_48 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_long_int);
}
static void
test_fadd_49 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fadd_50 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fadd_51 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_52 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_53 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_54 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_enum_e);
}
static void
test_fadd_55 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var__Bool);
}
static void
test_fadd_56 (void)
{
  extern typeof (fadd (vol_var_long_double, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_double, vol_var_bit_field);
}
static void
test_fadd_57 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_float);
}
static void
test_fadd_58 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_double);
}
static void
test_fadd_59 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_long_double);
}
static void
test_fadd_60 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_char);
}
static void
test_fadd_61 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_signed_char);
}
static void
test_fadd_62 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_unsigned_char);
}
static void
test_fadd_63 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_short_int);
}
static void
test_fadd_64 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fadd_65 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_int);
}
static void
test_fadd_66 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_unsigned_int);
}
static void
test_fadd_67 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_long_int);
}
static void
test_fadd_68 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fadd_69 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_long_long_int);
}
static void
test_fadd_70 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_71 (void)
{
  extern typeof (fadd (vol_var_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_72 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_73 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_enum_e);
}
static void
test_fadd_74 (void)
{
  extern typeof (fadd (vol_var_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var__Bool);
}
static void
test_fadd_75 (void)
{
  extern typeof (fadd (vol_var_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_char, vol_var_bit_field);
}
static void
test_fadd_76 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_float);
}
static void
test_fadd_77 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_double);
}
static void
test_fadd_78 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_long_double);
}
static void
test_fadd_79 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_char);
}
static void
test_fadd_80 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fadd_81 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fadd_82 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_short_int);
}
static void
test_fadd_83 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fadd_84 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_int);
}
static void
test_fadd_85 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fadd_86 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_long_int);
}
static void
test_fadd_87 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fadd_88 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fadd_89 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_90 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_91 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_92 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fadd_93 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var__Bool);
}
static void
test_fadd_94 (void)
{
  extern typeof (fadd (vol_var_signed_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_signed_char, vol_var_bit_field);
}
static void
test_fadd_95 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_float);
}
static void
test_fadd_96 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_double);
}
static void
test_fadd_97 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_fadd_98 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_char);
}
static void
test_fadd_99 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fadd_100 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fadd_101 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fadd_102 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fadd_103 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_int);
}
static void
test_fadd_104 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fadd_105 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fadd_106 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fadd_107 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fadd_108 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_109 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_110 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_111 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fadd_112 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fadd_113 (void)
{
  extern typeof (fadd (vol_var_unsigned_char, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_char, vol_var_bit_field);
}
static void
test_fadd_114 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_float);
}
static void
test_fadd_115 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_double);
}
static void
test_fadd_116 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_long_double);
}
static void
test_fadd_117 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_char);
}
static void
test_fadd_118 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_signed_char);
}
static void
test_fadd_119 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fadd_120 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_short_int);
}
static void
test_fadd_121 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fadd_122 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_int);
}
static void
test_fadd_123 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fadd_124 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_long_int);
}
static void
test_fadd_125 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fadd_126 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fadd_127 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_128 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_129 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_130 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_enum_e);
}
static void
test_fadd_131 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var__Bool);
}
static void
test_fadd_132 (void)
{
  extern typeof (fadd (vol_var_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_short_int, vol_var_bit_field);
}
static void
test_fadd_133 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_fadd_134 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fadd_135 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_fadd_136 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fadd_137 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fadd_138 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fadd_139 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fadd_140 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fadd_141 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fadd_142 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fadd_143 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fadd_144 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fadd_145 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fadd_146 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_147 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_148 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_149 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fadd_150 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fadd_151 (void)
{
  extern typeof (fadd (vol_var_unsigned_short_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_short_int, vol_var_bit_field);
}
static void
test_fadd_152 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_float);
}
static void
test_fadd_153 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_double);
}
static void
test_fadd_154 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_long_double);
}
static void
test_fadd_155 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_char);
}
static void
test_fadd_156 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_signed_char);
}
static void
test_fadd_157 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_unsigned_char);
}
static void
test_fadd_158 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_short_int);
}
static void
test_fadd_159 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fadd_160 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_int);
}
static void
test_fadd_161 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_unsigned_int);
}
static void
test_fadd_162 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_long_int);
}
static void
test_fadd_163 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fadd_164 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_long_long_int);
}
static void
test_fadd_165 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_166 (void)
{
  extern typeof (fadd (vol_var_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_167 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_168 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_enum_e);
}
static void
test_fadd_169 (void)
{
  extern typeof (fadd (vol_var_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var__Bool);
}
static void
test_fadd_170 (void)
{
  extern typeof (fadd (vol_var_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_int, vol_var_bit_field);
}
static void
test_fadd_171 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_float);
}
static void
test_fadd_172 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_double);
}
static void
test_fadd_173 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_fadd_174 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_char);
}
static void
test_fadd_175 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fadd_176 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fadd_177 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fadd_178 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fadd_179 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_int);
}
static void
test_fadd_180 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fadd_181 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fadd_182 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fadd_183 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fadd_184 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_185 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_186 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_187 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fadd_188 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fadd_189 (void)
{
  extern typeof (fadd (vol_var_unsigned_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_int, vol_var_bit_field);
}
static void
test_fadd_190 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_float);
}
static void
test_fadd_191 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_double);
}
static void
test_fadd_192 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_long_double);
}
static void
test_fadd_193 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_char);
}
static void
test_fadd_194 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_signed_char);
}
static void
test_fadd_195 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fadd_196 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_short_int);
}
static void
test_fadd_197 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fadd_198 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_int);
}
static void
test_fadd_199 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fadd_200 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_long_int);
}
static void
test_fadd_201 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fadd_202 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fadd_203 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_204 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_205 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_206 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_enum_e);
}
static void
test_fadd_207 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var__Bool);
}
static void
test_fadd_208 (void)
{
  extern typeof (fadd (vol_var_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_int, vol_var_bit_field);
}
static void
test_fadd_209 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_fadd_210 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fadd_211 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_fadd_212 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fadd_213 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fadd_214 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fadd_215 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fadd_216 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fadd_217 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fadd_218 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fadd_219 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fadd_220 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fadd_221 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fadd_222 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_223 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_224 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_225 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fadd_226 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fadd_227 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_int, vol_var_bit_field);
}
static void
test_fadd_228 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_float);
}
static void
test_fadd_229 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_double);
}
static void
test_fadd_230 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_long_double);
}
static void
test_fadd_231 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_char);
}
static void
test_fadd_232 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fadd_233 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fadd_234 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fadd_235 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fadd_236 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_int);
}
static void
test_fadd_237 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fadd_238 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fadd_239 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fadd_240 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fadd_241 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_242 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_243 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_244 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fadd_245 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fadd_246 (void)
{
  extern typeof (fadd (vol_var_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_long_long_int, vol_var_bit_field);
}
static void
test_fadd_247 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_fadd_248 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fadd_249 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_fadd_250 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fadd_251 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fadd_252 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fadd_253 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fadd_254 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fadd_255 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fadd_256 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fadd_257 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fadd_258 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fadd_259 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fadd_260 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_261 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_262 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_263 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fadd_264 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fadd_265 (void)
{
  extern typeof (fadd (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_266 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_267 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_268 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_269 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_270 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_271 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_272 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_273 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_274 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_275 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_276 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_277 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_278 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_279 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_280 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_281 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_282 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_283 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_284 (void)
{
  extern typeof (fadd (vol_var___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_285 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_286 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_287 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_288 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_289 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_290 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_291 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_292 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_293 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_294 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_295 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_296 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_297 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_298 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_299 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_300 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_301 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_302 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_303 (void)
{
  extern typeof (fadd (vol_var_unsigned___int128, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
static void
test_fadd_304 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_float);
}
static void
test_fadd_305 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_double);
}
static void
test_fadd_306 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_long_double);
}
static void
test_fadd_307 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_char);
}
static void
test_fadd_308 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fadd_309 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fadd_310 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_short_int);
}
static void
test_fadd_311 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fadd_312 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_int);
}
static void
test_fadd_313 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fadd_314 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_long_int);
}
static void
test_fadd_315 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fadd_316 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fadd_317 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_318 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_319 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_320 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fadd_321 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var__Bool);
}
static void
test_fadd_322 (void)
{
  extern typeof (fadd (vol_var_enum_e, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_enum_e, vol_var_bit_field);
}
static void
test_fadd_323 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_float);
}
static void
test_fadd_324 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_double);
}
static void
test_fadd_325 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_long_double);
}
static void
test_fadd_326 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_char);
}
static void
test_fadd_327 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_signed_char);
}
static void
test_fadd_328 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fadd_329 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_short_int);
}
static void
test_fadd_330 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fadd_331 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_int);
}
static void
test_fadd_332 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fadd_333 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_long_int);
}
static void
test_fadd_334 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fadd_335 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fadd_336 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_337 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_338 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_339 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_enum_e);
}
static void
test_fadd_340 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var__Bool);
}
static void
test_fadd_341 (void)
{
  extern typeof (fadd (vol_var__Bool, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var__Bool, vol_var_bit_field);
}
static void
test_fadd_342 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_float);
}
static void
test_fadd_343 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_double);
}
static void
test_fadd_344 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_long_double)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_long_double);
}
static void
test_fadd_345 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_char);
}
static void
test_fadd_346 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_signed_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fadd_347 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_unsigned_char)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fadd_348 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_short_int);
}
static void
test_fadd_349 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_unsigned_short_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fadd_350 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_int);
}
static void
test_fadd_351 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_unsigned_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fadd_352 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_long_int);
}
static void
test_fadd_353 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_unsigned_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fadd_354 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fadd_355 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fadd_356 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fadd_357 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_unsigned___int128)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fadd_358 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_enum_e)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fadd_359 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var__Bool)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var__Bool);
}
static void
test_fadd_360 (void)
{
  extern typeof (fadd (vol_var_bit_field, vol_var_bit_field)) var_float __attribute__ ((unused));
  vol_var_float = fadd (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
    { test_fadd_0, "fadd", "fadd (float, float)", DBL_MANT_DIG, FLT_MANT_DIG },
    { test_fadd_1, "fadd", "fadd (float, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fadd_2, "fadd", "fadd (float, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fadd_3, "fadd", "fadd (float, char)", DBL_MANT_DIG, 0 },
    { test_fadd_4, "fadd", "fadd (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_5, "fadd", "fadd (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_6, "fadd", "fadd (float, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_7, "fadd", "fadd (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_8, "fadd", "fadd (float, int)", DBL_MANT_DIG, 0 },
    { test_fadd_9, "fadd", "fadd (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_10, "fadd", "fadd (float, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_11, "fadd", "fadd (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_12, "fadd", "fadd (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_13, "fadd", "fadd (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_14, "fadd", "fadd (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_15, "fadd", "fadd (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_16, "fadd", "fadd (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_17, "fadd", "fadd (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_18, "fadd", "fadd (float, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_19, "fadd", "fadd (double, float)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fadd_20, "fadd", "fadd (double, double)", DBL_MANT_DIG, DBL_MANT_DIG },
    { test_fadd_21, "fadd", "fadd (double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fadd_22, "fadd", "fadd (double, char)", DBL_MANT_DIG, 0 },
    { test_fadd_23, "fadd", "fadd (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_24, "fadd", "fadd (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_25, "fadd", "fadd (double, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_26, "fadd", "fadd (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_27, "fadd", "fadd (double, int)", DBL_MANT_DIG, 0 },
    { test_fadd_28, "fadd", "fadd (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_29, "fadd", "fadd (double, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_30, "fadd", "fadd (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_31, "fadd", "fadd (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_32, "fadd", "fadd (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_33, "fadd", "fadd (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_34, "fadd", "fadd (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_35, "fadd", "fadd (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_36, "fadd", "fadd (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_37, "fadd", "fadd (double, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_38, "fadd", "fadd (long double, float)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fadd_39, "fadd", "fadd (long double, double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fadd_40, "fadd", "fadd (long double, long double)", LDBL_MANT_DIG, LDBL_MANT_DIG },
    { test_fadd_41, "fadd", "fadd (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fadd_42, "fadd", "fadd (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fadd_43, "fadd", "fadd (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fadd_44, "fadd", "fadd (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fadd_45, "fadd", "fadd (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fadd_46, "fadd", "fadd (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fadd_47, "fadd", "fadd (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fadd_48, "fadd", "fadd (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fadd_49, "fadd", "fadd (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fadd_50, "fadd", "fadd (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fadd_51, "fadd", "fadd (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_52, "fadd", "fadd (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_53, "fadd", "fadd (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fadd_54, "fadd", "fadd (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fadd_55, "fadd", "fadd (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fadd_56, "fadd", "fadd (long double, bit_field)", LDBL_MANT_DIG, 0 },
    { test_fadd_57, "fadd", "fadd (char, float)", DBL_MANT_DIG, 0 },
    { test_fadd_58, "fadd", "fadd (char, double)", DBL_MANT_DIG, 0 },
    { test_fadd_59, "fadd", "fadd (char, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_60, "fadd", "fadd (char, char)", DBL_MANT_DIG, 0 },
    { test_fadd_61, "fadd", "fadd (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_62, "fadd", "fadd (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_63, "fadd", "fadd (char, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_64, "fadd", "fadd (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_65, "fadd", "fadd (char, int)", DBL_MANT_DIG, 0 },
    { test_fadd_66, "fadd", "fadd (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_67, "fadd", "fadd (char, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_68, "fadd", "fadd (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_69, "fadd", "fadd (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_70, "fadd", "fadd (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_71, "fadd", "fadd (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_72, "fadd", "fadd (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_73, "fadd", "fadd (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_74, "fadd", "fadd (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_75, "fadd", "fadd (char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_76, "fadd", "fadd (signed char, float)", DBL_MANT_DIG, 0 },
    { test_fadd_77, "fadd", "fadd (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fadd_78, "fadd", "fadd (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_79, "fadd", "fadd (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fadd_80, "fadd", "fadd (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_81, "fadd", "fadd (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_82, "fadd", "fadd (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_83, "fadd", "fadd (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_84, "fadd", "fadd (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fadd_85, "fadd", "fadd (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_86, "fadd", "fadd (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_87, "fadd", "fadd (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_88, "fadd", "fadd (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_89, "fadd", "fadd (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_90, "fadd", "fadd (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_91, "fadd", "fadd (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_92, "fadd", "fadd (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_93, "fadd", "fadd (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_94, "fadd", "fadd (signed char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_95, "fadd", "fadd (unsigned char, float)", DBL_MANT_DIG, 0 },
    { test_fadd_96, "fadd", "fadd (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fadd_97, "fadd", "fadd (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_98, "fadd", "fadd (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fadd_99, "fadd", "fadd (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_100, "fadd", "fadd (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_101, "fadd", "fadd (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_102, "fadd", "fadd (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_103, "fadd", "fadd (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fadd_104, "fadd", "fadd (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_105, "fadd", "fadd (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_106, "fadd", "fadd (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_107, "fadd", "fadd (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_108, "fadd", "fadd (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_109, "fadd", "fadd (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_110, "fadd", "fadd (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_111, "fadd", "fadd (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_112, "fadd", "fadd (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_113, "fadd", "fadd (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_114, "fadd", "fadd (short int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_115, "fadd", "fadd (short int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_116, "fadd", "fadd (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_117, "fadd", "fadd (short int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_118, "fadd", "fadd (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_119, "fadd", "fadd (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_120, "fadd", "fadd (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_121, "fadd", "fadd (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_122, "fadd", "fadd (short int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_123, "fadd", "fadd (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_124, "fadd", "fadd (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_125, "fadd", "fadd (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_126, "fadd", "fadd (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_127, "fadd", "fadd (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_128, "fadd", "fadd (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_129, "fadd", "fadd (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_130, "fadd", "fadd (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_131, "fadd", "fadd (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_132, "fadd", "fadd (short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_133, "fadd", "fadd (unsigned short int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_134, "fadd", "fadd (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_135, "fadd", "fadd (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_136, "fadd", "fadd (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_137, "fadd", "fadd (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_138, "fadd", "fadd (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_139, "fadd", "fadd (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_140, "fadd", "fadd (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_141, "fadd", "fadd (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_142, "fadd", "fadd (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_143, "fadd", "fadd (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_144, "fadd", "fadd (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_145, "fadd", "fadd (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_146, "fadd", "fadd (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_147, "fadd", "fadd (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_148, "fadd", "fadd (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_149, "fadd", "fadd (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_150, "fadd", "fadd (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_151, "fadd", "fadd (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_152, "fadd", "fadd (int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_153, "fadd", "fadd (int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_154, "fadd", "fadd (int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_155, "fadd", "fadd (int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_156, "fadd", "fadd (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_157, "fadd", "fadd (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_158, "fadd", "fadd (int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_159, "fadd", "fadd (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_160, "fadd", "fadd (int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_161, "fadd", "fadd (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_162, "fadd", "fadd (int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_163, "fadd", "fadd (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_164, "fadd", "fadd (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_165, "fadd", "fadd (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_166, "fadd", "fadd (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_167, "fadd", "fadd (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_168, "fadd", "fadd (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_169, "fadd", "fadd (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_170, "fadd", "fadd (int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_171, "fadd", "fadd (unsigned int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_172, "fadd", "fadd (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_173, "fadd", "fadd (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_174, "fadd", "fadd (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_175, "fadd", "fadd (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_176, "fadd", "fadd (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_177, "fadd", "fadd (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_178, "fadd", "fadd (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_179, "fadd", "fadd (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_180, "fadd", "fadd (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_181, "fadd", "fadd (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_182, "fadd", "fadd (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_183, "fadd", "fadd (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_184, "fadd", "fadd (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_185, "fadd", "fadd (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_186, "fadd", "fadd (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_187, "fadd", "fadd (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_188, "fadd", "fadd (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_189, "fadd", "fadd (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_190, "fadd", "fadd (long int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_191, "fadd", "fadd (long int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_192, "fadd", "fadd (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_193, "fadd", "fadd (long int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_194, "fadd", "fadd (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_195, "fadd", "fadd (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_196, "fadd", "fadd (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_197, "fadd", "fadd (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_198, "fadd", "fadd (long int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_199, "fadd", "fadd (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_200, "fadd", "fadd (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_201, "fadd", "fadd (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_202, "fadd", "fadd (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_203, "fadd", "fadd (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_204, "fadd", "fadd (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_205, "fadd", "fadd (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_206, "fadd", "fadd (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_207, "fadd", "fadd (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_208, "fadd", "fadd (long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_209, "fadd", "fadd (unsigned long int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_210, "fadd", "fadd (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_211, "fadd", "fadd (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_212, "fadd", "fadd (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_213, "fadd", "fadd (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_214, "fadd", "fadd (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_215, "fadd", "fadd (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_216, "fadd", "fadd (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_217, "fadd", "fadd (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_218, "fadd", "fadd (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_219, "fadd", "fadd (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_220, "fadd", "fadd (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_221, "fadd", "fadd (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_222, "fadd", "fadd (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_223, "fadd", "fadd (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_224, "fadd", "fadd (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_225, "fadd", "fadd (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_226, "fadd", "fadd (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_227, "fadd", "fadd (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_228, "fadd", "fadd (long long int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_229, "fadd", "fadd (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_230, "fadd", "fadd (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_231, "fadd", "fadd (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_232, "fadd", "fadd (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_233, "fadd", "fadd (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_234, "fadd", "fadd (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_235, "fadd", "fadd (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_236, "fadd", "fadd (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_237, "fadd", "fadd (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_238, "fadd", "fadd (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_239, "fadd", "fadd (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_240, "fadd", "fadd (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_241, "fadd", "fadd (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_242, "fadd", "fadd (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_243, "fadd", "fadd (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_244, "fadd", "fadd (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_245, "fadd", "fadd (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_246, "fadd", "fadd (long long int, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_247, "fadd", "fadd (unsigned long long int, float)", DBL_MANT_DIG, 0 },
    { test_fadd_248, "fadd", "fadd (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fadd_249, "fadd", "fadd (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_250, "fadd", "fadd (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fadd_251, "fadd", "fadd (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_252, "fadd", "fadd (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_253, "fadd", "fadd (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_254, "fadd", "fadd (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_255, "fadd", "fadd (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fadd_256, "fadd", "fadd (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_257, "fadd", "fadd (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_258, "fadd", "fadd (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_259, "fadd", "fadd (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_260, "fadd", "fadd (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_261, "fadd", "fadd (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_262, "fadd", "fadd (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_263, "fadd", "fadd (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_264, "fadd", "fadd (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_265, "fadd", "fadd (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_266, "fadd", "fadd (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_267, "fadd", "fadd (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_268, "fadd", "fadd (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_269, "fadd", "fadd (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_270, "fadd", "fadd (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_271, "fadd", "fadd (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_272, "fadd", "fadd (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_273, "fadd", "fadd (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_274, "fadd", "fadd (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_275, "fadd", "fadd (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_276, "fadd", "fadd (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_277, "fadd", "fadd (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_278, "fadd", "fadd (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_279, "fadd", "fadd (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_280, "fadd", "fadd (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_281, "fadd", "fadd (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_282, "fadd", "fadd (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_283, "fadd", "fadd (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_284, "fadd", "fadd (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_285, "fadd", "fadd (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_286, "fadd", "fadd (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_287, "fadd", "fadd (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_288, "fadd", "fadd (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_289, "fadd", "fadd (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_290, "fadd", "fadd (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_291, "fadd", "fadd (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_292, "fadd", "fadd (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_293, "fadd", "fadd (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_294, "fadd", "fadd (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_295, "fadd", "fadd (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_296, "fadd", "fadd (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_297, "fadd", "fadd (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_298, "fadd", "fadd (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_299, "fadd", "fadd (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_300, "fadd", "fadd (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_301, "fadd", "fadd (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_302, "fadd", "fadd (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_303, "fadd", "fadd (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_304, "fadd", "fadd (enum e, float)", DBL_MANT_DIG, 0 },
    { test_fadd_305, "fadd", "fadd (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fadd_306, "fadd", "fadd (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_307, "fadd", "fadd (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fadd_308, "fadd", "fadd (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_309, "fadd", "fadd (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_310, "fadd", "fadd (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_311, "fadd", "fadd (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_312, "fadd", "fadd (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fadd_313, "fadd", "fadd (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_314, "fadd", "fadd (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_315, "fadd", "fadd (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_316, "fadd", "fadd (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_317, "fadd", "fadd (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_318, "fadd", "fadd (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_319, "fadd", "fadd (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_320, "fadd", "fadd (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_321, "fadd", "fadd (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_322, "fadd", "fadd (enum e, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_323, "fadd", "fadd (_Bool, float)", DBL_MANT_DIG, 0 },
    { test_fadd_324, "fadd", "fadd (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fadd_325, "fadd", "fadd (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_326, "fadd", "fadd (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fadd_327, "fadd", "fadd (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_328, "fadd", "fadd (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_329, "fadd", "fadd (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_330, "fadd", "fadd (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_331, "fadd", "fadd (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fadd_332, "fadd", "fadd (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_333, "fadd", "fadd (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_334, "fadd", "fadd (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_335, "fadd", "fadd (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_336, "fadd", "fadd (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_337, "fadd", "fadd (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_338, "fadd", "fadd (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_339, "fadd", "fadd (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_340, "fadd", "fadd (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_341, "fadd", "fadd (_Bool, bit_field)", DBL_MANT_DIG, 0 },
    { test_fadd_342, "fadd", "fadd (bit_field, float)", DBL_MANT_DIG, 0 },
    { test_fadd_343, "fadd", "fadd (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fadd_344, "fadd", "fadd (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_fadd_345, "fadd", "fadd (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fadd_346, "fadd", "fadd (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fadd_347, "fadd", "fadd (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fadd_348, "fadd", "fadd (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fadd_349, "fadd", "fadd (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fadd_350, "fadd", "fadd (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fadd_351, "fadd", "fadd (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fadd_352, "fadd", "fadd (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fadd_353, "fadd", "fadd (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fadd_354, "fadd", "fadd (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fadd_355, "fadd", "fadd (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fadd_356, "fadd", "fadd (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fadd_357, "fadd", "fadd (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fadd_358, "fadd", "fadd (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fadd_359, "fadd", "fadd (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fadd_360, "fadd", "fadd (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
