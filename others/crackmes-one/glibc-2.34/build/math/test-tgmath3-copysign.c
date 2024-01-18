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
(copysignf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#endif
float
(copysignf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(copysignf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(copysignf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#endif
double
(copysign) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
long double
(copysignl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(copysignf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(copysignf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(copysignf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "copysign";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_0 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = copysign (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_1 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = copysign (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_copysign_2 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = copysign (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_copysign_3 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = copysign (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_4 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_5 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_copysign_6 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_copysign_7 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_copysign_8 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_9 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_10 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_11 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_12 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_13 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_14 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_15 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_16 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_17 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_18 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_19 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_copysign_20 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_copysign_21 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_22 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_23 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_24 (void)
{
  extern typeof (copysign (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_25 (void)
{
  extern typeof (copysign (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = copysign (vol_var_float, vol_var__Float16);
}
#endif
static void
test_copysign_26 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = copysign (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_27 (void)
{
  extern typeof (copysign (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = copysign (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_28 (void)
{
  extern typeof (copysign (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = copysign (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_copysign_29 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_double);
}
static void
test_copysign_30 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_31 (void)
{
  extern typeof (copysign (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_32 (void)
{
  extern typeof (copysign (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_33 (void)
{
  extern typeof (copysign (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_float, vol_var__Float128);
}
#endif
static void
test_copysign_34 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_char);
}
static void
test_copysign_35 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_signed_char);
}
static void
test_copysign_36 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_unsigned_char);
}
static void
test_copysign_37 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_short_int);
}
static void
test_copysign_38 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_copysign_39 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_int);
}
static void
test_copysign_40 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_unsigned_int);
}
static void
test_copysign_41 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_long_int);
}
static void
test_copysign_42 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_copysign_43 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_long_long_int);
}
static void
test_copysign_44 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_45 (void)
{
  extern typeof (copysign (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_46 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_47 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_enum_e);
}
static void
test_copysign_48 (void)
{
  extern typeof (copysign (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var__Bool);
}
static void
test_copysign_49 (void)
{
  extern typeof (copysign (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_copysign_50 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = copysign (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_51 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = copysign (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_52 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = copysign (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_copysign_53 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = copysign (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_54 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_55 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_copysign_56 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_copysign_57 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_copysign_58 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_59 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_60 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_61 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_62 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_63 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_64 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_65 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_66 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_67 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_68 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_69 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_copysign_70 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_copysign_71 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_72 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_73 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_copysign_74 (void)
{
  extern typeof (copysign (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_copysign_75 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = copysign (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_76 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = copysign (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_copysign_77 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = copysign (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_78 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = copysign (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_79 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_80 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_copysign_81 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_copysign_82 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_copysign_83 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_84 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_85 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_86 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_87 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_88 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_89 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_90 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_91 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_92 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_93 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_94 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_copysign_95 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_copysign_96 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_97 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_98 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_99 (void)
{
  extern typeof (copysign (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_100 (void)
{
  extern typeof (copysign (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var__Float16);
}
#endif
static void
test_copysign_101 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_102 (void)
{
  extern typeof (copysign (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_103 (void)
{
  extern typeof (copysign (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_copysign_104 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_double);
}
static void
test_copysign_105 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_106 (void)
{
  extern typeof (copysign (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_107 (void)
{
  extern typeof (copysign (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_108 (void)
{
  extern typeof (copysign (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_double, vol_var__Float128);
}
#endif
static void
test_copysign_109 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_char);
}
static void
test_copysign_110 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_signed_char);
}
static void
test_copysign_111 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_unsigned_char);
}
static void
test_copysign_112 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_short_int);
}
static void
test_copysign_113 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_copysign_114 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_int);
}
static void
test_copysign_115 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_unsigned_int);
}
static void
test_copysign_116 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_long_int);
}
static void
test_copysign_117 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_copysign_118 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_long_long_int);
}
static void
test_copysign_119 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_120 (void)
{
  extern typeof (copysign (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_121 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_122 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_enum_e);
}
static void
test_copysign_123 (void)
{
  extern typeof (copysign (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var__Bool);
}
static void
test_copysign_124 (void)
{
  extern typeof (copysign (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_125 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_copysign_126 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_127 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_128 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_copysign_129 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_double);
}
static void
test_copysign_130 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_131 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = copysign (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_copysign_132 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = copysign (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_copysign_133 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_copysign_134 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_char);
}
static void
test_copysign_135 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_signed_char);
}
static void
test_copysign_136 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_copysign_137 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_short_int);
}
static void
test_copysign_138 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_copysign_139 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_int);
}
static void
test_copysign_140 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_copysign_141 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_long_int);
}
static void
test_copysign_142 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_copysign_143 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_long_long_int);
}
static void
test_copysign_144 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_145 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_146 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_147 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_enum_e);
}
static void
test_copysign_148 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var__Bool);
}
static void
test_copysign_149 (void)
{
  extern typeof (copysign (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_copysign_150 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_151 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_copysign_152 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_copysign_153 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_154 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_155 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = copysign (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_156 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_copysign_157 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_copysign_158 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_159 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_160 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_161 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_162 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_163 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_164 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_165 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_166 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_167 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_168 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_169 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_copysign_170 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_copysign_171 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_172 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_173 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_copysign_174 (void)
{
  extern typeof (copysign (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_copysign_175 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_176 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_copysign_177 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_copysign_178 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_179 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_copysign_180 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = copysign (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_copysign_181 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_182 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_copysign_183 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_184 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_185 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_186 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_187 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_188 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_189 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_190 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_191 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_192 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_193 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_194 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_copysign_195 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_copysign_196 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_197 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_198 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_199 (void)
{
  extern typeof (copysign (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_copysign_200 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_201 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_copysign_202 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_copysign_203 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_204 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_copysign_205 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_copysign_206 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_copysign_207 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_208 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_209 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_210 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_211 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_212 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_213 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_214 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_215 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_216 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_217 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_218 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_219 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_copysign_220 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_copysign_221 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_222 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_223 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_224 (void)
{
  extern typeof (copysign (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_225 (void)
{
  extern typeof (copysign (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var__Float16);
}
#endif
static void
test_copysign_226 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_227 (void)
{
  extern typeof (copysign (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_228 (void)
{
  extern typeof (copysign (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_copysign_229 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_double);
}
static void
test_copysign_230 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_231 (void)
{
  extern typeof (copysign (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_232 (void)
{
  extern typeof (copysign (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_233 (void)
{
  extern typeof (copysign (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_char, vol_var__Float128);
}
#endif
static void
test_copysign_234 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_char);
}
static void
test_copysign_235 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_signed_char);
}
static void
test_copysign_236 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_unsigned_char);
}
static void
test_copysign_237 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_short_int);
}
static void
test_copysign_238 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_copysign_239 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_int);
}
static void
test_copysign_240 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_unsigned_int);
}
static void
test_copysign_241 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_long_int);
}
static void
test_copysign_242 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_copysign_243 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_long_long_int);
}
static void
test_copysign_244 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_245 (void)
{
  extern typeof (copysign (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_246 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_247 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_enum_e);
}
static void
test_copysign_248 (void)
{
  extern typeof (copysign (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var__Bool);
}
static void
test_copysign_249 (void)
{
  extern typeof (copysign (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_250 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_copysign_251 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_252 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_253 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_copysign_254 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_double);
}
static void
test_copysign_255 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_256 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_257 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_258 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_copysign_259 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_char);
}
static void
test_copysign_260 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_signed_char);
}
static void
test_copysign_261 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_copysign_262 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_short_int);
}
static void
test_copysign_263 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_copysign_264 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_int);
}
static void
test_copysign_265 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_copysign_266 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_long_int);
}
static void
test_copysign_267 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_copysign_268 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_copysign_269 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_270 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_271 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_272 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_enum_e);
}
static void
test_copysign_273 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var__Bool);
}
static void
test_copysign_274 (void)
{
  extern typeof (copysign (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_275 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_copysign_276 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_277 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_278 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_copysign_279 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_double);
}
static void
test_copysign_280 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_281 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_282 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_283 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_copysign_284 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_char);
}
static void
test_copysign_285 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_copysign_286 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_copysign_287 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_copysign_288 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_copysign_289 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_int);
}
static void
test_copysign_290 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_copysign_291 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_copysign_292 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_copysign_293 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_copysign_294 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_295 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_296 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_297 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_copysign_298 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_copysign_299 (void)
{
  extern typeof (copysign (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_300 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_copysign_301 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_302 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_303 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_copysign_304 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_double);
}
static void
test_copysign_305 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_306 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_307 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_308 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_copysign_309 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_char);
}
static void
test_copysign_310 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_signed_char);
}
static void
test_copysign_311 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_copysign_312 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_short_int);
}
static void
test_copysign_313 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_copysign_314 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_int);
}
static void
test_copysign_315 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_copysign_316 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_long_int);
}
static void
test_copysign_317 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_copysign_318 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_long_long_int);
}
static void
test_copysign_319 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_320 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_321 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_322 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_enum_e);
}
static void
test_copysign_323 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var__Bool);
}
static void
test_copysign_324 (void)
{
  extern typeof (copysign (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_325 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_copysign_326 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_327 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_328 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_copysign_329 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_copysign_330 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_331 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_332 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_333 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_copysign_334 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_copysign_335 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_copysign_336 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_copysign_337 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_copysign_338 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_copysign_339 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_copysign_340 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_copysign_341 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_copysign_342 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_copysign_343 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_copysign_344 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_345 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_346 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_347 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_copysign_348 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_copysign_349 (void)
{
  extern typeof (copysign (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_350 (void)
{
  extern typeof (copysign (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var__Float16);
}
#endif
static void
test_copysign_351 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_352 (void)
{
  extern typeof (copysign (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_353 (void)
{
  extern typeof (copysign (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_copysign_354 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_double);
}
static void
test_copysign_355 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_356 (void)
{
  extern typeof (copysign (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_357 (void)
{
  extern typeof (copysign (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_358 (void)
{
  extern typeof (copysign (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_int, vol_var__Float128);
}
#endif
static void
test_copysign_359 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_char);
}
static void
test_copysign_360 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_signed_char);
}
static void
test_copysign_361 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_unsigned_char);
}
static void
test_copysign_362 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_short_int);
}
static void
test_copysign_363 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_copysign_364 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_int);
}
static void
test_copysign_365 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_unsigned_int);
}
static void
test_copysign_366 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_long_int);
}
static void
test_copysign_367 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_copysign_368 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_long_long_int);
}
static void
test_copysign_369 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_370 (void)
{
  extern typeof (copysign (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_371 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_372 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_enum_e);
}
static void
test_copysign_373 (void)
{
  extern typeof (copysign (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var__Bool);
}
static void
test_copysign_374 (void)
{
  extern typeof (copysign (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_375 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_copysign_376 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_377 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_378 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_copysign_379 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_double);
}
static void
test_copysign_380 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_381 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_382 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_383 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_copysign_384 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_char);
}
static void
test_copysign_385 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_copysign_386 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_copysign_387 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_copysign_388 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_copysign_389 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_int);
}
static void
test_copysign_390 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_copysign_391 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_copysign_392 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_copysign_393 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_copysign_394 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_395 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_396 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_397 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_copysign_398 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_copysign_399 (void)
{
  extern typeof (copysign (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_400 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_copysign_401 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_402 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_403 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_copysign_404 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_double);
}
static void
test_copysign_405 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_406 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_407 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_408 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_copysign_409 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_char);
}
static void
test_copysign_410 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_signed_char);
}
static void
test_copysign_411 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_copysign_412 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_short_int);
}
static void
test_copysign_413 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_copysign_414 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_int);
}
static void
test_copysign_415 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_copysign_416 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_long_int);
}
static void
test_copysign_417 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_copysign_418 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_long_long_int);
}
static void
test_copysign_419 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_420 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_421 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_422 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_enum_e);
}
static void
test_copysign_423 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var__Bool);
}
static void
test_copysign_424 (void)
{
  extern typeof (copysign (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_425 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_copysign_426 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_427 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_428 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_copysign_429 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_copysign_430 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_431 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_432 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_433 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_copysign_434 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_copysign_435 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_copysign_436 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_copysign_437 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_copysign_438 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_copysign_439 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_copysign_440 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_copysign_441 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_copysign_442 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_copysign_443 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_copysign_444 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_445 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_446 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_447 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_copysign_448 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_copysign_449 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_450 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_copysign_451 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_452 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_453 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_copysign_454 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_double);
}
static void
test_copysign_455 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_456 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_457 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_458 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_copysign_459 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_char);
}
static void
test_copysign_460 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_copysign_461 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_copysign_462 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_short_int);
}
static void
test_copysign_463 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_copysign_464 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_int);
}
static void
test_copysign_465 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_copysign_466 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_long_int);
}
static void
test_copysign_467 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_copysign_468 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_copysign_469 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_470 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_471 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_472 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_copysign_473 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var__Bool);
}
static void
test_copysign_474 (void)
{
  extern typeof (copysign (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_475 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_copysign_476 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_477 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_478 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_copysign_479 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_copysign_480 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_481 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_482 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_483 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_copysign_484 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_copysign_485 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_copysign_486 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_copysign_487 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_copysign_488 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_copysign_489 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_copysign_490 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_copysign_491 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_copysign_492 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_copysign_493 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_copysign_494 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_495 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_496 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_497 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_copysign_498 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_copysign_499 (void)
{
  extern typeof (copysign (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_copysign_500 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_501 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_copysign_502 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_copysign_503 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_504 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_505 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_copysign_506 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_copysign_507 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_copysign_508 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_509 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_510 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_511 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_512 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_513 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_514 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_515 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_516 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_517 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_518 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_519 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_520 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_521 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_522 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_523 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_524 (void)
{
  extern typeof (copysign (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_copysign_525 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_526 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_copysign_527 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_copysign_528 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_529 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_530 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_copysign_531 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_copysign_532 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_copysign_533 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_534 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_535 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_536 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_537 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_538 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_539 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_540 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_541 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_542 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_543 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_544 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_545 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_546 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_547 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_548 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_549 (void)
{
  extern typeof (copysign (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_copysign_550 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_copysign_551 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_552 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_553 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_copysign_554 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_double);
}
static void
test_copysign_555 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_556 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_557 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_558 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_copysign_559 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_char);
}
static void
test_copysign_560 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_signed_char);
}
static void
test_copysign_561 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_copysign_562 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_short_int);
}
static void
test_copysign_563 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_copysign_564 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_int);
}
static void
test_copysign_565 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_copysign_566 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_long_int);
}
static void
test_copysign_567 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_copysign_568 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_copysign_569 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_570 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_571 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_572 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_enum_e);
}
static void
test_copysign_573 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var__Bool);
}
static void
test_copysign_574 (void)
{
  extern typeof (copysign (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_575 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_copysign_576 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_577 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_578 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_copysign_579 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_double);
}
static void
test_copysign_580 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_581 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_582 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_583 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_copysign_584 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_char);
}
static void
test_copysign_585 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_signed_char);
}
static void
test_copysign_586 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_copysign_587 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_short_int);
}
static void
test_copysign_588 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_copysign_589 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_int);
}
static void
test_copysign_590 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_copysign_591 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_long_int);
}
static void
test_copysign_592 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_copysign_593 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_long_long_int);
}
static void
test_copysign_594 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_595 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_596 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_597 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_enum_e);
}
static void
test_copysign_598 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var__Bool);
}
static void
test_copysign_599 (void)
{
  extern typeof (copysign (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_copysign_600 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_copysign_601 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_copysign_602 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_copysign_603 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_copysign_604 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_double);
}
static void
test_copysign_605 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = copysign (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_copysign_606 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = copysign (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_copysign_607 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = copysign (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_copysign_608 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = copysign (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_copysign_609 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_char);
}
static void
test_copysign_610 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_signed_char);
}
static void
test_copysign_611 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_copysign_612 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_short_int);
}
static void
test_copysign_613 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_copysign_614 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_int);
}
static void
test_copysign_615 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_copysign_616 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_long_int);
}
static void
test_copysign_617 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_copysign_618 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_copysign_619 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_copysign_620 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_copysign_621 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_copysign_622 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_enum_e);
}
static void
test_copysign_623 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var__Bool);
}
static void
test_copysign_624 (void)
{
  extern typeof (copysign (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = copysign (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_copysign_0, "copysign", "copysign (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_1, "copysign", "copysign (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_copysign_2, "copysign", "copysign (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_copysign_3, "copysign", "copysign (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_4, "copysign", "copysign (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_5, "copysign", "copysign (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_copysign_6, "copysign", "copysign (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_copysign_7, "copysign", "copysign (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_copysign_8, "copysign", "copysign (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_9, "copysign", "copysign (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_10, "copysign", "copysign (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_11, "copysign", "copysign (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_12, "copysign", "copysign (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_13, "copysign", "copysign (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_14, "copysign", "copysign (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_15, "copysign", "copysign (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_16, "copysign", "copysign (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_17, "copysign", "copysign (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_18, "copysign", "copysign (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_19, "copysign", "copysign (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_copysign_20, "copysign", "copysign (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_copysign_21, "copysign", "copysign (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_22, "copysign", "copysign (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_23, "copysign", "copysign (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_24, "copysign", "copysign (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_25, "copysign", "copysign (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_copysign_26, "copysign", "copysign (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_27, "copysign", "copysign (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_28, "copysign", "copysign (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_copysign_29, "copysign", "copysign (float, double)", DBL_MANT_DIG, 0 },
    { test_copysign_30, "copysign", "copysign (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_31, "copysign", "copysign (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_32, "copysign", "copysign (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_33, "copysign", "copysign (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_34, "copysign", "copysign (float, char)", DBL_MANT_DIG, 0 },
    { test_copysign_35, "copysign", "copysign (float, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_36, "copysign", "copysign (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_37, "copysign", "copysign (float, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_38, "copysign", "copysign (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_39, "copysign", "copysign (float, int)", DBL_MANT_DIG, 0 },
    { test_copysign_40, "copysign", "copysign (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_41, "copysign", "copysign (float, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_42, "copysign", "copysign (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_43, "copysign", "copysign (float, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_44, "copysign", "copysign (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_45, "copysign", "copysign (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_46, "copysign", "copysign (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_47, "copysign", "copysign (float, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_48, "copysign", "copysign (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_49, "copysign", "copysign (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_copysign_50, "copysign", "copysign (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_51, "copysign", "copysign (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_52, "copysign", "copysign (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_copysign_53, "copysign", "copysign (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_54, "copysign", "copysign (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_55, "copysign", "copysign (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_copysign_56, "copysign", "copysign (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_copysign_57, "copysign", "copysign (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_copysign_58, "copysign", "copysign (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_59, "copysign", "copysign (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_60, "copysign", "copysign (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_61, "copysign", "copysign (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_62, "copysign", "copysign (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_63, "copysign", "copysign (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_64, "copysign", "copysign (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_65, "copysign", "copysign (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_66, "copysign", "copysign (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_67, "copysign", "copysign (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_68, "copysign", "copysign (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_69, "copysign", "copysign (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_copysign_70, "copysign", "copysign (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_copysign_71, "copysign", "copysign (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_72, "copysign", "copysign (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_73, "copysign", "copysign (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_copysign_74, "copysign", "copysign (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_copysign_75, "copysign", "copysign (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_76, "copysign", "copysign (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_copysign_77, "copysign", "copysign (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_78, "copysign", "copysign (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_79, "copysign", "copysign (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_80, "copysign", "copysign (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_copysign_81, "copysign", "copysign (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_copysign_82, "copysign", "copysign (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_copysign_83, "copysign", "copysign (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_84, "copysign", "copysign (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_85, "copysign", "copysign (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_86, "copysign", "copysign (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_87, "copysign", "copysign (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_88, "copysign", "copysign (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_89, "copysign", "copysign (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_90, "copysign", "copysign (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_91, "copysign", "copysign (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_92, "copysign", "copysign (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_93, "copysign", "copysign (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_94, "copysign", "copysign (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_copysign_95, "copysign", "copysign (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_copysign_96, "copysign", "copysign (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_97, "copysign", "copysign (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_98, "copysign", "copysign (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_99, "copysign", "copysign (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_100, "copysign", "copysign (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_101, "copysign", "copysign (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_102, "copysign", "copysign (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_103, "copysign", "copysign (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_104, "copysign", "copysign (double, double)", DBL_MANT_DIG, 0 },
    { test_copysign_105, "copysign", "copysign (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_106, "copysign", "copysign (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_107, "copysign", "copysign (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_108, "copysign", "copysign (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_109, "copysign", "copysign (double, char)", DBL_MANT_DIG, 0 },
    { test_copysign_110, "copysign", "copysign (double, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_111, "copysign", "copysign (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_112, "copysign", "copysign (double, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_113, "copysign", "copysign (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_114, "copysign", "copysign (double, int)", DBL_MANT_DIG, 0 },
    { test_copysign_115, "copysign", "copysign (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_116, "copysign", "copysign (double, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_117, "copysign", "copysign (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_118, "copysign", "copysign (double, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_119, "copysign", "copysign (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_120, "copysign", "copysign (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_121, "copysign", "copysign (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_122, "copysign", "copysign (double, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_123, "copysign", "copysign (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_124, "copysign", "copysign (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_125, "copysign", "copysign (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_copysign_126, "copysign", "copysign (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_127, "copysign", "copysign (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_128, "copysign", "copysign (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_copysign_129, "copysign", "copysign (long double, double)", LDBL_MANT_DIG, 0 },
    { test_copysign_130, "copysign", "copysign (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_131, "copysign", "copysign (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_copysign_132, "copysign", "copysign (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_copysign_133, "copysign", "copysign (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_134, "copysign", "copysign (long double, char)", LDBL_MANT_DIG, 0 },
    { test_copysign_135, "copysign", "copysign (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_copysign_136, "copysign", "copysign (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_copysign_137, "copysign", "copysign (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_copysign_138, "copysign", "copysign (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_copysign_139, "copysign", "copysign (long double, int)", LDBL_MANT_DIG, 0 },
    { test_copysign_140, "copysign", "copysign (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_copysign_141, "copysign", "copysign (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_copysign_142, "copysign", "copysign (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_copysign_143, "copysign", "copysign (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_copysign_144, "copysign", "copysign (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_145, "copysign", "copysign (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_146, "copysign", "copysign (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_copysign_147, "copysign", "copysign (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_copysign_148, "copysign", "copysign (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_copysign_149, "copysign", "copysign (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_copysign_150, "copysign", "copysign (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_151, "copysign", "copysign (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_copysign_152, "copysign", "copysign (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_copysign_153, "copysign", "copysign (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_154, "copysign", "copysign (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_155, "copysign", "copysign (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_156, "copysign", "copysign (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_copysign_157, "copysign", "copysign (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_copysign_158, "copysign", "copysign (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_159, "copysign", "copysign (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_160, "copysign", "copysign (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_161, "copysign", "copysign (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_162, "copysign", "copysign (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_163, "copysign", "copysign (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_164, "copysign", "copysign (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_165, "copysign", "copysign (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_166, "copysign", "copysign (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_167, "copysign", "copysign (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_168, "copysign", "copysign (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_169, "copysign", "copysign (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_copysign_170, "copysign", "copysign (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_copysign_171, "copysign", "copysign (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_172, "copysign", "copysign (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_173, "copysign", "copysign (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_copysign_174, "copysign", "copysign (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_copysign_175, "copysign", "copysign (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_176, "copysign", "copysign (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_copysign_177, "copysign", "copysign (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_copysign_178, "copysign", "copysign (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_179, "copysign", "copysign (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_copysign_180, "copysign", "copysign (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_copysign_181, "copysign", "copysign (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_182, "copysign", "copysign (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_copysign_183, "copysign", "copysign (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_184, "copysign", "copysign (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_185, "copysign", "copysign (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_186, "copysign", "copysign (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_187, "copysign", "copysign (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_188, "copysign", "copysign (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_189, "copysign", "copysign (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_190, "copysign", "copysign (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_191, "copysign", "copysign (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_192, "copysign", "copysign (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_193, "copysign", "copysign (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_194, "copysign", "copysign (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_copysign_195, "copysign", "copysign (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_copysign_196, "copysign", "copysign (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_197, "copysign", "copysign (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_198, "copysign", "copysign (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_199, "copysign", "copysign (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_copysign_200, "copysign", "copysign (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_201, "copysign", "copysign (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_copysign_202, "copysign", "copysign (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_copysign_203, "copysign", "copysign (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_204, "copysign", "copysign (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_copysign_205, "copysign", "copysign (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_copysign_206, "copysign", "copysign (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_copysign_207, "copysign", "copysign (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_208, "copysign", "copysign (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_209, "copysign", "copysign (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_210, "copysign", "copysign (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_211, "copysign", "copysign (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_212, "copysign", "copysign (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_213, "copysign", "copysign (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_214, "copysign", "copysign (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_215, "copysign", "copysign (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_216, "copysign", "copysign (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_217, "copysign", "copysign (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_218, "copysign", "copysign (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_219, "copysign", "copysign (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_copysign_220, "copysign", "copysign (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_copysign_221, "copysign", "copysign (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_222, "copysign", "copysign (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_223, "copysign", "copysign (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_224, "copysign", "copysign (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_225, "copysign", "copysign (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_226, "copysign", "copysign (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_227, "copysign", "copysign (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_228, "copysign", "copysign (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_229, "copysign", "copysign (char, double)", DBL_MANT_DIG, 0 },
    { test_copysign_230, "copysign", "copysign (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_231, "copysign", "copysign (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_232, "copysign", "copysign (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_233, "copysign", "copysign (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_234, "copysign", "copysign (char, char)", DBL_MANT_DIG, 0 },
    { test_copysign_235, "copysign", "copysign (char, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_236, "copysign", "copysign (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_237, "copysign", "copysign (char, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_238, "copysign", "copysign (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_239, "copysign", "copysign (char, int)", DBL_MANT_DIG, 0 },
    { test_copysign_240, "copysign", "copysign (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_241, "copysign", "copysign (char, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_242, "copysign", "copysign (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_243, "copysign", "copysign (char, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_244, "copysign", "copysign (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_245, "copysign", "copysign (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_246, "copysign", "copysign (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_247, "copysign", "copysign (char, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_248, "copysign", "copysign (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_249, "copysign", "copysign (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_250, "copysign", "copysign (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_251, "copysign", "copysign (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_252, "copysign", "copysign (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_253, "copysign", "copysign (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_254, "copysign", "copysign (signed char, double)", DBL_MANT_DIG, 0 },
    { test_copysign_255, "copysign", "copysign (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_256, "copysign", "copysign (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_257, "copysign", "copysign (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_258, "copysign", "copysign (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_259, "copysign", "copysign (signed char, char)", DBL_MANT_DIG, 0 },
    { test_copysign_260, "copysign", "copysign (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_261, "copysign", "copysign (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_262, "copysign", "copysign (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_263, "copysign", "copysign (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_264, "copysign", "copysign (signed char, int)", DBL_MANT_DIG, 0 },
    { test_copysign_265, "copysign", "copysign (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_266, "copysign", "copysign (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_267, "copysign", "copysign (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_268, "copysign", "copysign (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_269, "copysign", "copysign (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_270, "copysign", "copysign (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_271, "copysign", "copysign (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_272, "copysign", "copysign (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_273, "copysign", "copysign (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_274, "copysign", "copysign (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_275, "copysign", "copysign (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_276, "copysign", "copysign (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_277, "copysign", "copysign (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_278, "copysign", "copysign (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_279, "copysign", "copysign (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_copysign_280, "copysign", "copysign (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_281, "copysign", "copysign (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_282, "copysign", "copysign (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_283, "copysign", "copysign (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_284, "copysign", "copysign (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_copysign_285, "copysign", "copysign (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_286, "copysign", "copysign (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_287, "copysign", "copysign (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_288, "copysign", "copysign (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_289, "copysign", "copysign (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_copysign_290, "copysign", "copysign (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_291, "copysign", "copysign (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_292, "copysign", "copysign (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_293, "copysign", "copysign (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_294, "copysign", "copysign (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_295, "copysign", "copysign (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_296, "copysign", "copysign (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_297, "copysign", "copysign (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_298, "copysign", "copysign (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_299, "copysign", "copysign (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_300, "copysign", "copysign (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_301, "copysign", "copysign (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_302, "copysign", "copysign (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_303, "copysign", "copysign (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_304, "copysign", "copysign (short int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_305, "copysign", "copysign (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_306, "copysign", "copysign (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_307, "copysign", "copysign (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_308, "copysign", "copysign (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_309, "copysign", "copysign (short int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_310, "copysign", "copysign (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_311, "copysign", "copysign (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_312, "copysign", "copysign (short int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_313, "copysign", "copysign (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_314, "copysign", "copysign (short int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_315, "copysign", "copysign (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_316, "copysign", "copysign (short int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_317, "copysign", "copysign (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_318, "copysign", "copysign (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_319, "copysign", "copysign (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_320, "copysign", "copysign (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_321, "copysign", "copysign (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_322, "copysign", "copysign (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_323, "copysign", "copysign (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_324, "copysign", "copysign (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_325, "copysign", "copysign (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_326, "copysign", "copysign (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_327, "copysign", "copysign (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_328, "copysign", "copysign (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_329, "copysign", "copysign (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_330, "copysign", "copysign (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_331, "copysign", "copysign (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_332, "copysign", "copysign (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_333, "copysign", "copysign (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_334, "copysign", "copysign (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_335, "copysign", "copysign (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_336, "copysign", "copysign (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_337, "copysign", "copysign (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_338, "copysign", "copysign (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_339, "copysign", "copysign (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_340, "copysign", "copysign (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_341, "copysign", "copysign (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_342, "copysign", "copysign (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_343, "copysign", "copysign (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_344, "copysign", "copysign (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_345, "copysign", "copysign (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_346, "copysign", "copysign (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_347, "copysign", "copysign (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_348, "copysign", "copysign (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_349, "copysign", "copysign (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_350, "copysign", "copysign (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_351, "copysign", "copysign (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_352, "copysign", "copysign (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_353, "copysign", "copysign (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_354, "copysign", "copysign (int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_355, "copysign", "copysign (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_356, "copysign", "copysign (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_357, "copysign", "copysign (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_358, "copysign", "copysign (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_359, "copysign", "copysign (int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_360, "copysign", "copysign (int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_361, "copysign", "copysign (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_362, "copysign", "copysign (int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_363, "copysign", "copysign (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_364, "copysign", "copysign (int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_365, "copysign", "copysign (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_366, "copysign", "copysign (int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_367, "copysign", "copysign (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_368, "copysign", "copysign (int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_369, "copysign", "copysign (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_370, "copysign", "copysign (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_371, "copysign", "copysign (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_372, "copysign", "copysign (int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_373, "copysign", "copysign (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_374, "copysign", "copysign (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_375, "copysign", "copysign (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_376, "copysign", "copysign (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_377, "copysign", "copysign (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_378, "copysign", "copysign (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_379, "copysign", "copysign (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_380, "copysign", "copysign (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_381, "copysign", "copysign (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_382, "copysign", "copysign (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_383, "copysign", "copysign (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_384, "copysign", "copysign (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_385, "copysign", "copysign (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_386, "copysign", "copysign (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_387, "copysign", "copysign (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_388, "copysign", "copysign (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_389, "copysign", "copysign (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_390, "copysign", "copysign (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_391, "copysign", "copysign (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_392, "copysign", "copysign (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_393, "copysign", "copysign (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_394, "copysign", "copysign (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_395, "copysign", "copysign (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_396, "copysign", "copysign (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_397, "copysign", "copysign (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_398, "copysign", "copysign (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_399, "copysign", "copysign (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_400, "copysign", "copysign (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_401, "copysign", "copysign (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_402, "copysign", "copysign (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_403, "copysign", "copysign (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_404, "copysign", "copysign (long int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_405, "copysign", "copysign (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_406, "copysign", "copysign (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_407, "copysign", "copysign (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_408, "copysign", "copysign (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_409, "copysign", "copysign (long int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_410, "copysign", "copysign (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_411, "copysign", "copysign (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_412, "copysign", "copysign (long int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_413, "copysign", "copysign (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_414, "copysign", "copysign (long int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_415, "copysign", "copysign (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_416, "copysign", "copysign (long int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_417, "copysign", "copysign (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_418, "copysign", "copysign (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_419, "copysign", "copysign (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_420, "copysign", "copysign (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_421, "copysign", "copysign (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_422, "copysign", "copysign (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_423, "copysign", "copysign (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_424, "copysign", "copysign (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_425, "copysign", "copysign (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_426, "copysign", "copysign (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_427, "copysign", "copysign (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_428, "copysign", "copysign (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_429, "copysign", "copysign (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_430, "copysign", "copysign (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_431, "copysign", "copysign (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_432, "copysign", "copysign (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_433, "copysign", "copysign (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_434, "copysign", "copysign (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_435, "copysign", "copysign (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_436, "copysign", "copysign (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_437, "copysign", "copysign (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_438, "copysign", "copysign (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_439, "copysign", "copysign (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_440, "copysign", "copysign (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_441, "copysign", "copysign (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_442, "copysign", "copysign (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_443, "copysign", "copysign (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_444, "copysign", "copysign (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_445, "copysign", "copysign (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_446, "copysign", "copysign (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_447, "copysign", "copysign (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_448, "copysign", "copysign (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_449, "copysign", "copysign (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_450, "copysign", "copysign (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_451, "copysign", "copysign (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_452, "copysign", "copysign (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_453, "copysign", "copysign (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_454, "copysign", "copysign (long long int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_455, "copysign", "copysign (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_456, "copysign", "copysign (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_457, "copysign", "copysign (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_458, "copysign", "copysign (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_459, "copysign", "copysign (long long int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_460, "copysign", "copysign (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_461, "copysign", "copysign (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_462, "copysign", "copysign (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_463, "copysign", "copysign (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_464, "copysign", "copysign (long long int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_465, "copysign", "copysign (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_466, "copysign", "copysign (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_467, "copysign", "copysign (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_468, "copysign", "copysign (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_469, "copysign", "copysign (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_470, "copysign", "copysign (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_471, "copysign", "copysign (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_472, "copysign", "copysign (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_473, "copysign", "copysign (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_474, "copysign", "copysign (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_475, "copysign", "copysign (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_476, "copysign", "copysign (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_477, "copysign", "copysign (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_478, "copysign", "copysign (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_479, "copysign", "copysign (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_copysign_480, "copysign", "copysign (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_481, "copysign", "copysign (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_482, "copysign", "copysign (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_483, "copysign", "copysign (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_484, "copysign", "copysign (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_copysign_485, "copysign", "copysign (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_486, "copysign", "copysign (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_487, "copysign", "copysign (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_488, "copysign", "copysign (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_489, "copysign", "copysign (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_copysign_490, "copysign", "copysign (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_491, "copysign", "copysign (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_492, "copysign", "copysign (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_493, "copysign", "copysign (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_494, "copysign", "copysign (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_495, "copysign", "copysign (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_496, "copysign", "copysign (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_497, "copysign", "copysign (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_498, "copysign", "copysign (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_499, "copysign", "copysign (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_copysign_500, "copysign", "copysign (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_501, "copysign", "copysign (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_copysign_502, "copysign", "copysign (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_copysign_503, "copysign", "copysign (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_504, "copysign", "copysign (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_505, "copysign", "copysign (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_copysign_506, "copysign", "copysign (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_copysign_507, "copysign", "copysign (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_copysign_508, "copysign", "copysign (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_509, "copysign", "copysign (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_510, "copysign", "copysign (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_511, "copysign", "copysign (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_512, "copysign", "copysign (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_513, "copysign", "copysign (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_514, "copysign", "copysign (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_515, "copysign", "copysign (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_516, "copysign", "copysign (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_517, "copysign", "copysign (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_518, "copysign", "copysign (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_519, "copysign", "copysign (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_520, "copysign", "copysign (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_521, "copysign", "copysign (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_522, "copysign", "copysign (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_523, "copysign", "copysign (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_524, "copysign", "copysign (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_copysign_525, "copysign", "copysign (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_526, "copysign", "copysign (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_copysign_527, "copysign", "copysign (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_copysign_528, "copysign", "copysign (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_529, "copysign", "copysign (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_530, "copysign", "copysign (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_copysign_531, "copysign", "copysign (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_copysign_532, "copysign", "copysign (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_copysign_533, "copysign", "copysign (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_534, "copysign", "copysign (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_535, "copysign", "copysign (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_536, "copysign", "copysign (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_537, "copysign", "copysign (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_538, "copysign", "copysign (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_539, "copysign", "copysign (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_540, "copysign", "copysign (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_541, "copysign", "copysign (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_542, "copysign", "copysign (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_543, "copysign", "copysign (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_544, "copysign", "copysign (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_545, "copysign", "copysign (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_546, "copysign", "copysign (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_547, "copysign", "copysign (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_548, "copysign", "copysign (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_549, "copysign", "copysign (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_copysign_550, "copysign", "copysign (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_551, "copysign", "copysign (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_552, "copysign", "copysign (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_553, "copysign", "copysign (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_554, "copysign", "copysign (enum e, double)", DBL_MANT_DIG, 0 },
    { test_copysign_555, "copysign", "copysign (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_556, "copysign", "copysign (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_557, "copysign", "copysign (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_558, "copysign", "copysign (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_559, "copysign", "copysign (enum e, char)", DBL_MANT_DIG, 0 },
    { test_copysign_560, "copysign", "copysign (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_561, "copysign", "copysign (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_562, "copysign", "copysign (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_563, "copysign", "copysign (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_564, "copysign", "copysign (enum e, int)", DBL_MANT_DIG, 0 },
    { test_copysign_565, "copysign", "copysign (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_566, "copysign", "copysign (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_567, "copysign", "copysign (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_568, "copysign", "copysign (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_569, "copysign", "copysign (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_570, "copysign", "copysign (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_571, "copysign", "copysign (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_572, "copysign", "copysign (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_573, "copysign", "copysign (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_574, "copysign", "copysign (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_575, "copysign", "copysign (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_576, "copysign", "copysign (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_577, "copysign", "copysign (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_578, "copysign", "copysign (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_579, "copysign", "copysign (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_copysign_580, "copysign", "copysign (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_581, "copysign", "copysign (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_582, "copysign", "copysign (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_583, "copysign", "copysign (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_584, "copysign", "copysign (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_copysign_585, "copysign", "copysign (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_586, "copysign", "copysign (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_587, "copysign", "copysign (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_588, "copysign", "copysign (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_589, "copysign", "copysign (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_copysign_590, "copysign", "copysign (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_591, "copysign", "copysign (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_592, "copysign", "copysign (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_593, "copysign", "copysign (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_594, "copysign", "copysign (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_595, "copysign", "copysign (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_596, "copysign", "copysign (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_597, "copysign", "copysign (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_598, "copysign", "copysign (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_599, "copysign", "copysign (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_copysign_600, "copysign", "copysign (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_601, "copysign", "copysign (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_copysign_602, "copysign", "copysign (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_copysign_603, "copysign", "copysign (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_604, "copysign", "copysign (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_copysign_605, "copysign", "copysign (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_copysign_606, "copysign", "copysign (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_copysign_607, "copysign", "copysign (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_copysign_608, "copysign", "copysign (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_copysign_609, "copysign", "copysign (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_copysign_610, "copysign", "copysign (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_copysign_611, "copysign", "copysign (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_copysign_612, "copysign", "copysign (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_copysign_613, "copysign", "copysign (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_copysign_614, "copysign", "copysign (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_copysign_615, "copysign", "copysign (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_copysign_616, "copysign", "copysign (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_copysign_617, "copysign", "copysign (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_copysign_618, "copysign", "copysign (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_copysign_619, "copysign", "copysign (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_copysign_620, "copysign", "copysign (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_copysign_621, "copysign", "copysign (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_copysign_622, "copysign", "copysign (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_copysign_623, "copysign", "copysign (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_copysign_624, "copysign", "copysign (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
