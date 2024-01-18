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
(fmodf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#endif
float
(fmodf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(fmodf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(fmodf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#endif
double
(fmod) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
long double
(fmodl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(fmodf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(fmodf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(fmodf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "fmod";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_0 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = fmod (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_1 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmod (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmod_2 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmod (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmod_3 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmod (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_4 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_5 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmod_6 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmod_7 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmod_8 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_9 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_10 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_11 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_12 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_13 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_14 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_15 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_16 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_17 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_18 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_19 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmod_20 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmod_21 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_22 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_23 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_24 (void)
{
  extern typeof (fmod (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_25 (void)
{
  extern typeof (fmod (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = fmod (vol_var_float, vol_var__Float16);
}
#endif
static void
test_fmod_26 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmod (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_27 (void)
{
  extern typeof (fmod (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmod (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_28 (void)
{
  extern typeof (fmod (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmod (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_fmod_29 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_double);
}
static void
test_fmod_30 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_31 (void)
{
  extern typeof (fmod (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_32 (void)
{
  extern typeof (fmod (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_33 (void)
{
  extern typeof (fmod (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_float, vol_var__Float128);
}
#endif
static void
test_fmod_34 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_char);
}
static void
test_fmod_35 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_signed_char);
}
static void
test_fmod_36 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_unsigned_char);
}
static void
test_fmod_37 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_short_int);
}
static void
test_fmod_38 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fmod_39 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_int);
}
static void
test_fmod_40 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_unsigned_int);
}
static void
test_fmod_41 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_long_int);
}
static void
test_fmod_42 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fmod_43 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_long_long_int);
}
static void
test_fmod_44 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_45 (void)
{
  extern typeof (fmod (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_46 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_47 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_enum_e);
}
static void
test_fmod_48 (void)
{
  extern typeof (fmod (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var__Bool);
}
static void
test_fmod_49 (void)
{
  extern typeof (fmod (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmod_50 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmod (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_51 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmod (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_52 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmod (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmod_53 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmod (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_54 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_55 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmod_56 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmod_57 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmod_58 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_59 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_60 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_61 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_62 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_63 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_64 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_65 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_66 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_67 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_68 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_69 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmod_70 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmod_71 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_72 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_73 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmod_74 (void)
{
  extern typeof (fmod (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmod_75 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmod (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_76 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmod (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmod_77 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmod (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_78 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmod (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_79 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_80 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmod_81 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmod_82 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmod_83 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_84 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_85 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_86 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_87 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_88 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_89 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_90 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_91 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_92 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_93 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_94 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmod_95 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmod_96 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_97 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_98 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_99 (void)
{
  extern typeof (fmod (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_100 (void)
{
  extern typeof (fmod (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var__Float16);
}
#endif
static void
test_fmod_101 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_102 (void)
{
  extern typeof (fmod (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_103 (void)
{
  extern typeof (fmod (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_fmod_104 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_double);
}
static void
test_fmod_105 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_106 (void)
{
  extern typeof (fmod (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_107 (void)
{
  extern typeof (fmod (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_108 (void)
{
  extern typeof (fmod (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_double, vol_var__Float128);
}
#endif
static void
test_fmod_109 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_char);
}
static void
test_fmod_110 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_signed_char);
}
static void
test_fmod_111 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_unsigned_char);
}
static void
test_fmod_112 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_short_int);
}
static void
test_fmod_113 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fmod_114 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_int);
}
static void
test_fmod_115 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_unsigned_int);
}
static void
test_fmod_116 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_long_int);
}
static void
test_fmod_117 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fmod_118 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_long_long_int);
}
static void
test_fmod_119 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_120 (void)
{
  extern typeof (fmod (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_121 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_122 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_enum_e);
}
static void
test_fmod_123 (void)
{
  extern typeof (fmod (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var__Bool);
}
static void
test_fmod_124 (void)
{
  extern typeof (fmod (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_125 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_fmod_126 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_127 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_128 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_fmod_129 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_double);
}
static void
test_fmod_130 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_131 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmod (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmod_132 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmod (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmod_133 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_fmod_134 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_char);
}
static void
test_fmod_135 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_signed_char);
}
static void
test_fmod_136 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fmod_137 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_short_int);
}
static void
test_fmod_138 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fmod_139 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_int);
}
static void
test_fmod_140 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fmod_141 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_long_int);
}
static void
test_fmod_142 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fmod_143 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fmod_144 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_145 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_146 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_147 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_enum_e);
}
static void
test_fmod_148 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var__Bool);
}
static void
test_fmod_149 (void)
{
  extern typeof (fmod (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmod_150 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_151 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmod_152 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmod_153 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_154 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_155 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmod (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_156 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmod_157 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmod_158 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_159 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_160 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_161 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_162 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_163 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_164 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_165 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_166 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_167 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_168 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_169 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmod_170 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmod_171 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_172 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_173 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmod_174 (void)
{
  extern typeof (fmod (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmod_175 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_176 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmod_177 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmod_178 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_179 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmod_180 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmod (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmod_181 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_182 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmod_183 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_184 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_185 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_186 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_187 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_188 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_189 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_190 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_191 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_192 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_193 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_194 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmod_195 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmod_196 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_197 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_198 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_199 (void)
{
  extern typeof (fmod (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmod_200 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_201 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmod_202 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmod_203 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_204 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmod_205 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmod_206 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmod_207 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_208 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_209 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_210 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_211 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_212 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_213 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_214 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_215 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_216 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_217 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_218 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_219 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmod_220 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmod_221 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_222 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_223 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_224 (void)
{
  extern typeof (fmod (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_225 (void)
{
  extern typeof (fmod (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var__Float16);
}
#endif
static void
test_fmod_226 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_227 (void)
{
  extern typeof (fmod (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_228 (void)
{
  extern typeof (fmod (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_fmod_229 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_double);
}
static void
test_fmod_230 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_231 (void)
{
  extern typeof (fmod (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_232 (void)
{
  extern typeof (fmod (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_233 (void)
{
  extern typeof (fmod (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_char, vol_var__Float128);
}
#endif
static void
test_fmod_234 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_char);
}
static void
test_fmod_235 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_signed_char);
}
static void
test_fmod_236 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_unsigned_char);
}
static void
test_fmod_237 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_short_int);
}
static void
test_fmod_238 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fmod_239 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_int);
}
static void
test_fmod_240 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_unsigned_int);
}
static void
test_fmod_241 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_long_int);
}
static void
test_fmod_242 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fmod_243 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_long_long_int);
}
static void
test_fmod_244 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_245 (void)
{
  extern typeof (fmod (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_246 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_247 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_enum_e);
}
static void
test_fmod_248 (void)
{
  extern typeof (fmod (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var__Bool);
}
static void
test_fmod_249 (void)
{
  extern typeof (fmod (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_250 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_fmod_251 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_252 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_253 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_fmod_254 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_double);
}
static void
test_fmod_255 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_256 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_257 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_258 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_fmod_259 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_char);
}
static void
test_fmod_260 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fmod_261 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fmod_262 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_short_int);
}
static void
test_fmod_263 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fmod_264 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_int);
}
static void
test_fmod_265 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fmod_266 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_long_int);
}
static void
test_fmod_267 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fmod_268 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fmod_269 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_270 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_271 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_272 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fmod_273 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var__Bool);
}
static void
test_fmod_274 (void)
{
  extern typeof (fmod (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_275 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_fmod_276 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_277 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_278 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_fmod_279 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_double);
}
static void
test_fmod_280 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_281 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_282 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_283 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_fmod_284 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_char);
}
static void
test_fmod_285 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fmod_286 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fmod_287 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fmod_288 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fmod_289 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_int);
}
static void
test_fmod_290 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fmod_291 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fmod_292 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fmod_293 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fmod_294 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_295 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_296 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_297 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fmod_298 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fmod_299 (void)
{
  extern typeof (fmod (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_300 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_fmod_301 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_302 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_303 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_fmod_304 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_double);
}
static void
test_fmod_305 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_306 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_307 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_308 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_fmod_309 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_char);
}
static void
test_fmod_310 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_signed_char);
}
static void
test_fmod_311 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fmod_312 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_short_int);
}
static void
test_fmod_313 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fmod_314 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_int);
}
static void
test_fmod_315 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fmod_316 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_long_int);
}
static void
test_fmod_317 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fmod_318 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fmod_319 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_320 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_321 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_322 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_enum_e);
}
static void
test_fmod_323 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var__Bool);
}
static void
test_fmod_324 (void)
{
  extern typeof (fmod (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_325 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_fmod_326 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_327 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_328 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_fmod_329 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fmod_330 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_331 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_332 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_333 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_fmod_334 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fmod_335 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fmod_336 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fmod_337 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fmod_338 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fmod_339 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fmod_340 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fmod_341 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fmod_342 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fmod_343 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fmod_344 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_345 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_346 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_347 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fmod_348 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fmod_349 (void)
{
  extern typeof (fmod (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_350 (void)
{
  extern typeof (fmod (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var__Float16);
}
#endif
static void
test_fmod_351 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_352 (void)
{
  extern typeof (fmod (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_353 (void)
{
  extern typeof (fmod (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_fmod_354 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_double);
}
static void
test_fmod_355 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_356 (void)
{
  extern typeof (fmod (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_357 (void)
{
  extern typeof (fmod (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_358 (void)
{
  extern typeof (fmod (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_int, vol_var__Float128);
}
#endif
static void
test_fmod_359 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_char);
}
static void
test_fmod_360 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_signed_char);
}
static void
test_fmod_361 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_unsigned_char);
}
static void
test_fmod_362 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_short_int);
}
static void
test_fmod_363 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fmod_364 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_int);
}
static void
test_fmod_365 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_unsigned_int);
}
static void
test_fmod_366 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_long_int);
}
static void
test_fmod_367 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fmod_368 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_long_long_int);
}
static void
test_fmod_369 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_370 (void)
{
  extern typeof (fmod (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_371 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_372 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_enum_e);
}
static void
test_fmod_373 (void)
{
  extern typeof (fmod (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var__Bool);
}
static void
test_fmod_374 (void)
{
  extern typeof (fmod (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_375 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_fmod_376 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_377 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_378 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_fmod_379 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_double);
}
static void
test_fmod_380 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_381 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_382 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_383 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_fmod_384 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_char);
}
static void
test_fmod_385 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fmod_386 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fmod_387 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fmod_388 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fmod_389 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_int);
}
static void
test_fmod_390 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fmod_391 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fmod_392 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fmod_393 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fmod_394 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_395 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_396 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_397 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fmod_398 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fmod_399 (void)
{
  extern typeof (fmod (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_400 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_fmod_401 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_402 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_403 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_fmod_404 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_double);
}
static void
test_fmod_405 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_406 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_407 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_408 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_fmod_409 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_char);
}
static void
test_fmod_410 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_signed_char);
}
static void
test_fmod_411 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fmod_412 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_short_int);
}
static void
test_fmod_413 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fmod_414 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_int);
}
static void
test_fmod_415 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fmod_416 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_long_int);
}
static void
test_fmod_417 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fmod_418 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fmod_419 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_420 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_421 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_422 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_enum_e);
}
static void
test_fmod_423 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var__Bool);
}
static void
test_fmod_424 (void)
{
  extern typeof (fmod (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_425 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_fmod_426 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_427 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_428 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_fmod_429 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fmod_430 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_431 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_432 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_433 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_fmod_434 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fmod_435 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fmod_436 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fmod_437 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fmod_438 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fmod_439 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fmod_440 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fmod_441 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fmod_442 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fmod_443 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fmod_444 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_445 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_446 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_447 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fmod_448 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fmod_449 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_450 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmod_451 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_452 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_453 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmod_454 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_double);
}
static void
test_fmod_455 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_456 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_457 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_458 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmod_459 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_char);
}
static void
test_fmod_460 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fmod_461 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fmod_462 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fmod_463 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmod_464 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_int);
}
static void
test_fmod_465 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fmod_466 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fmod_467 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmod_468 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fmod_469 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_470 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_471 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_472 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fmod_473 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fmod_474 (void)
{
  extern typeof (fmod (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_475 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmod_476 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_477 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_478 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmod_479 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fmod_480 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_481 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_482 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_483 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmod_484 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fmod_485 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fmod_486 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fmod_487 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fmod_488 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmod_489 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fmod_490 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fmod_491 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fmod_492 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmod_493 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fmod_494 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_495 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_496 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_497 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fmod_498 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fmod_499 (void)
{
  extern typeof (fmod (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmod_500 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_501 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmod_502 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmod_503 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_504 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_505 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmod_506 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmod_507 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmod_508 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_509 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_510 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_511 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_512 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_513 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_514 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_515 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_516 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_517 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_518 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_519 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_520 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_521 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_522 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_523 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_524 (void)
{
  extern typeof (fmod (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmod_525 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_526 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmod_527 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmod_528 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_529 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_530 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmod_531 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmod_532 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmod_533 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_534 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_535 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_536 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_537 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_538 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_539 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_540 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_541 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_542 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_543 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_544 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_545 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_546 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_547 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_548 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_549 (void)
{
  extern typeof (fmod (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmod_550 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_fmod_551 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_552 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_553 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_fmod_554 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_double);
}
static void
test_fmod_555 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_556 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_557 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_558 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_fmod_559 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_char);
}
static void
test_fmod_560 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fmod_561 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fmod_562 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_short_int);
}
static void
test_fmod_563 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fmod_564 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_int);
}
static void
test_fmod_565 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fmod_566 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_long_int);
}
static void
test_fmod_567 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fmod_568 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fmod_569 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_570 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_571 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_572 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fmod_573 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var__Bool);
}
static void
test_fmod_574 (void)
{
  extern typeof (fmod (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_575 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_fmod_576 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_577 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_578 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_fmod_579 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_double);
}
static void
test_fmod_580 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_581 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_582 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_583 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_fmod_584 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_char);
}
static void
test_fmod_585 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_signed_char);
}
static void
test_fmod_586 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fmod_587 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_short_int);
}
static void
test_fmod_588 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fmod_589 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_int);
}
static void
test_fmod_590 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fmod_591 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_long_int);
}
static void
test_fmod_592 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fmod_593 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fmod_594 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_595 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_596 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_597 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_enum_e);
}
static void
test_fmod_598 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var__Bool);
}
static void
test_fmod_599 (void)
{
  extern typeof (fmod (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmod_600 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_fmod_601 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmod_602 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmod_603 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_fmod_604 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_double);
}
static void
test_fmod_605 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmod (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmod_606 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmod (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmod_607 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmod (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmod_608 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmod (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_fmod_609 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_char);
}
static void
test_fmod_610 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fmod_611 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fmod_612 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_short_int);
}
static void
test_fmod_613 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fmod_614 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_int);
}
static void
test_fmod_615 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fmod_616 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_long_int);
}
static void
test_fmod_617 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fmod_618 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fmod_619 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmod_620 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmod_621 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fmod_622 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fmod_623 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var__Bool);
}
static void
test_fmod_624 (void)
{
  extern typeof (fmod (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmod (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_fmod_0, "fmod", "fmod (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_1, "fmod", "fmod (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmod_2, "fmod", "fmod (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmod_3, "fmod", "fmod (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_4, "fmod", "fmod (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_5, "fmod", "fmod (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmod_6, "fmod", "fmod (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmod_7, "fmod", "fmod (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmod_8, "fmod", "fmod (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_9, "fmod", "fmod (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_10, "fmod", "fmod (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_11, "fmod", "fmod (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_12, "fmod", "fmod (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_13, "fmod", "fmod (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_14, "fmod", "fmod (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_15, "fmod", "fmod (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_16, "fmod", "fmod (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_17, "fmod", "fmod (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_18, "fmod", "fmod (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_19, "fmod", "fmod (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmod_20, "fmod", "fmod (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmod_21, "fmod", "fmod (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_22, "fmod", "fmod (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_23, "fmod", "fmod (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_24, "fmod", "fmod (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_25, "fmod", "fmod (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_fmod_26, "fmod", "fmod (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_27, "fmod", "fmod (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_28, "fmod", "fmod (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_fmod_29, "fmod", "fmod (float, double)", DBL_MANT_DIG, 0 },
    { test_fmod_30, "fmod", "fmod (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_31, "fmod", "fmod (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_32, "fmod", "fmod (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_33, "fmod", "fmod (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_34, "fmod", "fmod (float, char)", DBL_MANT_DIG, 0 },
    { test_fmod_35, "fmod", "fmod (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_36, "fmod", "fmod (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_37, "fmod", "fmod (float, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_38, "fmod", "fmod (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_39, "fmod", "fmod (float, int)", DBL_MANT_DIG, 0 },
    { test_fmod_40, "fmod", "fmod (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_41, "fmod", "fmod (float, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_42, "fmod", "fmod (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_43, "fmod", "fmod (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_44, "fmod", "fmod (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_45, "fmod", "fmod (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_46, "fmod", "fmod (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_47, "fmod", "fmod (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_48, "fmod", "fmod (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_49, "fmod", "fmod (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmod_50, "fmod", "fmod (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_51, "fmod", "fmod (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_52, "fmod", "fmod (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmod_53, "fmod", "fmod (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_54, "fmod", "fmod (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_55, "fmod", "fmod (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmod_56, "fmod", "fmod (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmod_57, "fmod", "fmod (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmod_58, "fmod", "fmod (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_59, "fmod", "fmod (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_60, "fmod", "fmod (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_61, "fmod", "fmod (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_62, "fmod", "fmod (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_63, "fmod", "fmod (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_64, "fmod", "fmod (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_65, "fmod", "fmod (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_66, "fmod", "fmod (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_67, "fmod", "fmod (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_68, "fmod", "fmod (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_69, "fmod", "fmod (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmod_70, "fmod", "fmod (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmod_71, "fmod", "fmod (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_72, "fmod", "fmod (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_73, "fmod", "fmod (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmod_74, "fmod", "fmod (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmod_75, "fmod", "fmod (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_76, "fmod", "fmod (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmod_77, "fmod", "fmod (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_78, "fmod", "fmod (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_79, "fmod", "fmod (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_80, "fmod", "fmod (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmod_81, "fmod", "fmod (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmod_82, "fmod", "fmod (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmod_83, "fmod", "fmod (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_84, "fmod", "fmod (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_85, "fmod", "fmod (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_86, "fmod", "fmod (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_87, "fmod", "fmod (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_88, "fmod", "fmod (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_89, "fmod", "fmod (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_90, "fmod", "fmod (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_91, "fmod", "fmod (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_92, "fmod", "fmod (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_93, "fmod", "fmod (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_94, "fmod", "fmod (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmod_95, "fmod", "fmod (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmod_96, "fmod", "fmod (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_97, "fmod", "fmod (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_98, "fmod", "fmod (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_99, "fmod", "fmod (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_100, "fmod", "fmod (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_101, "fmod", "fmod (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_102, "fmod", "fmod (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_103, "fmod", "fmod (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_104, "fmod", "fmod (double, double)", DBL_MANT_DIG, 0 },
    { test_fmod_105, "fmod", "fmod (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_106, "fmod", "fmod (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_107, "fmod", "fmod (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_108, "fmod", "fmod (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_109, "fmod", "fmod (double, char)", DBL_MANT_DIG, 0 },
    { test_fmod_110, "fmod", "fmod (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_111, "fmod", "fmod (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_112, "fmod", "fmod (double, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_113, "fmod", "fmod (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_114, "fmod", "fmod (double, int)", DBL_MANT_DIG, 0 },
    { test_fmod_115, "fmod", "fmod (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_116, "fmod", "fmod (double, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_117, "fmod", "fmod (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_118, "fmod", "fmod (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_119, "fmod", "fmod (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_120, "fmod", "fmod (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_121, "fmod", "fmod (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_122, "fmod", "fmod (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_123, "fmod", "fmod (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_124, "fmod", "fmod (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_125, "fmod", "fmod (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmod_126, "fmod", "fmod (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_127, "fmod", "fmod (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_128, "fmod", "fmod (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmod_129, "fmod", "fmod (long double, double)", LDBL_MANT_DIG, 0 },
    { test_fmod_130, "fmod", "fmod (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_131, "fmod", "fmod (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmod_132, "fmod", "fmod (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmod_133, "fmod", "fmod (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_134, "fmod", "fmod (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fmod_135, "fmod", "fmod (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fmod_136, "fmod", "fmod (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fmod_137, "fmod", "fmod (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fmod_138, "fmod", "fmod (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fmod_139, "fmod", "fmod (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fmod_140, "fmod", "fmod (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fmod_141, "fmod", "fmod (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fmod_142, "fmod", "fmod (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fmod_143, "fmod", "fmod (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fmod_144, "fmod", "fmod (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_145, "fmod", "fmod (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_146, "fmod", "fmod (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmod_147, "fmod", "fmod (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fmod_148, "fmod", "fmod (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fmod_149, "fmod", "fmod (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmod_150, "fmod", "fmod (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_151, "fmod", "fmod (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmod_152, "fmod", "fmod (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmod_153, "fmod", "fmod (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_154, "fmod", "fmod (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_155, "fmod", "fmod (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_156, "fmod", "fmod (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmod_157, "fmod", "fmod (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmod_158, "fmod", "fmod (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_159, "fmod", "fmod (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_160, "fmod", "fmod (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_161, "fmod", "fmod (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_162, "fmod", "fmod (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_163, "fmod", "fmod (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_164, "fmod", "fmod (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_165, "fmod", "fmod (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_166, "fmod", "fmod (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_167, "fmod", "fmod (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_168, "fmod", "fmod (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_169, "fmod", "fmod (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmod_170, "fmod", "fmod (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmod_171, "fmod", "fmod (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_172, "fmod", "fmod (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_173, "fmod", "fmod (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmod_174, "fmod", "fmod (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmod_175, "fmod", "fmod (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_176, "fmod", "fmod (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmod_177, "fmod", "fmod (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmod_178, "fmod", "fmod (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_179, "fmod", "fmod (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmod_180, "fmod", "fmod (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmod_181, "fmod", "fmod (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_182, "fmod", "fmod (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmod_183, "fmod", "fmod (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_184, "fmod", "fmod (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_185, "fmod", "fmod (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_186, "fmod", "fmod (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_187, "fmod", "fmod (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_188, "fmod", "fmod (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_189, "fmod", "fmod (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_190, "fmod", "fmod (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_191, "fmod", "fmod (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_192, "fmod", "fmod (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_193, "fmod", "fmod (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_194, "fmod", "fmod (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmod_195, "fmod", "fmod (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmod_196, "fmod", "fmod (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_197, "fmod", "fmod (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_198, "fmod", "fmod (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_199, "fmod", "fmod (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmod_200, "fmod", "fmod (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_201, "fmod", "fmod (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmod_202, "fmod", "fmod (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmod_203, "fmod", "fmod (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_204, "fmod", "fmod (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmod_205, "fmod", "fmod (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmod_206, "fmod", "fmod (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmod_207, "fmod", "fmod (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_208, "fmod", "fmod (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_209, "fmod", "fmod (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_210, "fmod", "fmod (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_211, "fmod", "fmod (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_212, "fmod", "fmod (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_213, "fmod", "fmod (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_214, "fmod", "fmod (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_215, "fmod", "fmod (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_216, "fmod", "fmod (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_217, "fmod", "fmod (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_218, "fmod", "fmod (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_219, "fmod", "fmod (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmod_220, "fmod", "fmod (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmod_221, "fmod", "fmod (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_222, "fmod", "fmod (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_223, "fmod", "fmod (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_224, "fmod", "fmod (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_225, "fmod", "fmod (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_226, "fmod", "fmod (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_227, "fmod", "fmod (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_228, "fmod", "fmod (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_229, "fmod", "fmod (char, double)", DBL_MANT_DIG, 0 },
    { test_fmod_230, "fmod", "fmod (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_231, "fmod", "fmod (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_232, "fmod", "fmod (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_233, "fmod", "fmod (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_234, "fmod", "fmod (char, char)", DBL_MANT_DIG, 0 },
    { test_fmod_235, "fmod", "fmod (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_236, "fmod", "fmod (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_237, "fmod", "fmod (char, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_238, "fmod", "fmod (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_239, "fmod", "fmod (char, int)", DBL_MANT_DIG, 0 },
    { test_fmod_240, "fmod", "fmod (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_241, "fmod", "fmod (char, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_242, "fmod", "fmod (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_243, "fmod", "fmod (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_244, "fmod", "fmod (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_245, "fmod", "fmod (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_246, "fmod", "fmod (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_247, "fmod", "fmod (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_248, "fmod", "fmod (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_249, "fmod", "fmod (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_250, "fmod", "fmod (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_251, "fmod", "fmod (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_252, "fmod", "fmod (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_253, "fmod", "fmod (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_254, "fmod", "fmod (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fmod_255, "fmod", "fmod (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_256, "fmod", "fmod (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_257, "fmod", "fmod (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_258, "fmod", "fmod (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_259, "fmod", "fmod (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fmod_260, "fmod", "fmod (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_261, "fmod", "fmod (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_262, "fmod", "fmod (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_263, "fmod", "fmod (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_264, "fmod", "fmod (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fmod_265, "fmod", "fmod (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_266, "fmod", "fmod (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_267, "fmod", "fmod (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_268, "fmod", "fmod (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_269, "fmod", "fmod (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_270, "fmod", "fmod (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_271, "fmod", "fmod (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_272, "fmod", "fmod (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_273, "fmod", "fmod (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_274, "fmod", "fmod (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_275, "fmod", "fmod (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_276, "fmod", "fmod (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_277, "fmod", "fmod (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_278, "fmod", "fmod (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_279, "fmod", "fmod (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fmod_280, "fmod", "fmod (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_281, "fmod", "fmod (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_282, "fmod", "fmod (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_283, "fmod", "fmod (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_284, "fmod", "fmod (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fmod_285, "fmod", "fmod (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_286, "fmod", "fmod (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_287, "fmod", "fmod (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_288, "fmod", "fmod (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_289, "fmod", "fmod (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fmod_290, "fmod", "fmod (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_291, "fmod", "fmod (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_292, "fmod", "fmod (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_293, "fmod", "fmod (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_294, "fmod", "fmod (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_295, "fmod", "fmod (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_296, "fmod", "fmod (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_297, "fmod", "fmod (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_298, "fmod", "fmod (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_299, "fmod", "fmod (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_300, "fmod", "fmod (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_301, "fmod", "fmod (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_302, "fmod", "fmod (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_303, "fmod", "fmod (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_304, "fmod", "fmod (short int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_305, "fmod", "fmod (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_306, "fmod", "fmod (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_307, "fmod", "fmod (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_308, "fmod", "fmod (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_309, "fmod", "fmod (short int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_310, "fmod", "fmod (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_311, "fmod", "fmod (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_312, "fmod", "fmod (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_313, "fmod", "fmod (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_314, "fmod", "fmod (short int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_315, "fmod", "fmod (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_316, "fmod", "fmod (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_317, "fmod", "fmod (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_318, "fmod", "fmod (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_319, "fmod", "fmod (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_320, "fmod", "fmod (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_321, "fmod", "fmod (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_322, "fmod", "fmod (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_323, "fmod", "fmod (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_324, "fmod", "fmod (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_325, "fmod", "fmod (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_326, "fmod", "fmod (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_327, "fmod", "fmod (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_328, "fmod", "fmod (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_329, "fmod", "fmod (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_330, "fmod", "fmod (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_331, "fmod", "fmod (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_332, "fmod", "fmod (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_333, "fmod", "fmod (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_334, "fmod", "fmod (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_335, "fmod", "fmod (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_336, "fmod", "fmod (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_337, "fmod", "fmod (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_338, "fmod", "fmod (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_339, "fmod", "fmod (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_340, "fmod", "fmod (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_341, "fmod", "fmod (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_342, "fmod", "fmod (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_343, "fmod", "fmod (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_344, "fmod", "fmod (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_345, "fmod", "fmod (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_346, "fmod", "fmod (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_347, "fmod", "fmod (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_348, "fmod", "fmod (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_349, "fmod", "fmod (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_350, "fmod", "fmod (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_351, "fmod", "fmod (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_352, "fmod", "fmod (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_353, "fmod", "fmod (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_354, "fmod", "fmod (int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_355, "fmod", "fmod (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_356, "fmod", "fmod (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_357, "fmod", "fmod (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_358, "fmod", "fmod (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_359, "fmod", "fmod (int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_360, "fmod", "fmod (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_361, "fmod", "fmod (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_362, "fmod", "fmod (int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_363, "fmod", "fmod (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_364, "fmod", "fmod (int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_365, "fmod", "fmod (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_366, "fmod", "fmod (int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_367, "fmod", "fmod (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_368, "fmod", "fmod (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_369, "fmod", "fmod (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_370, "fmod", "fmod (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_371, "fmod", "fmod (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_372, "fmod", "fmod (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_373, "fmod", "fmod (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_374, "fmod", "fmod (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_375, "fmod", "fmod (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_376, "fmod", "fmod (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_377, "fmod", "fmod (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_378, "fmod", "fmod (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_379, "fmod", "fmod (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_380, "fmod", "fmod (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_381, "fmod", "fmod (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_382, "fmod", "fmod (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_383, "fmod", "fmod (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_384, "fmod", "fmod (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_385, "fmod", "fmod (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_386, "fmod", "fmod (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_387, "fmod", "fmod (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_388, "fmod", "fmod (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_389, "fmod", "fmod (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_390, "fmod", "fmod (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_391, "fmod", "fmod (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_392, "fmod", "fmod (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_393, "fmod", "fmod (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_394, "fmod", "fmod (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_395, "fmod", "fmod (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_396, "fmod", "fmod (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_397, "fmod", "fmod (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_398, "fmod", "fmod (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_399, "fmod", "fmod (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_400, "fmod", "fmod (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_401, "fmod", "fmod (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_402, "fmod", "fmod (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_403, "fmod", "fmod (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_404, "fmod", "fmod (long int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_405, "fmod", "fmod (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_406, "fmod", "fmod (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_407, "fmod", "fmod (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_408, "fmod", "fmod (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_409, "fmod", "fmod (long int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_410, "fmod", "fmod (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_411, "fmod", "fmod (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_412, "fmod", "fmod (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_413, "fmod", "fmod (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_414, "fmod", "fmod (long int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_415, "fmod", "fmod (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_416, "fmod", "fmod (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_417, "fmod", "fmod (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_418, "fmod", "fmod (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_419, "fmod", "fmod (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_420, "fmod", "fmod (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_421, "fmod", "fmod (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_422, "fmod", "fmod (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_423, "fmod", "fmod (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_424, "fmod", "fmod (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_425, "fmod", "fmod (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_426, "fmod", "fmod (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_427, "fmod", "fmod (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_428, "fmod", "fmod (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_429, "fmod", "fmod (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_430, "fmod", "fmod (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_431, "fmod", "fmod (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_432, "fmod", "fmod (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_433, "fmod", "fmod (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_434, "fmod", "fmod (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_435, "fmod", "fmod (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_436, "fmod", "fmod (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_437, "fmod", "fmod (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_438, "fmod", "fmod (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_439, "fmod", "fmod (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_440, "fmod", "fmod (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_441, "fmod", "fmod (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_442, "fmod", "fmod (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_443, "fmod", "fmod (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_444, "fmod", "fmod (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_445, "fmod", "fmod (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_446, "fmod", "fmod (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_447, "fmod", "fmod (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_448, "fmod", "fmod (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_449, "fmod", "fmod (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_450, "fmod", "fmod (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_451, "fmod", "fmod (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_452, "fmod", "fmod (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_453, "fmod", "fmod (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_454, "fmod", "fmod (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_455, "fmod", "fmod (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_456, "fmod", "fmod (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_457, "fmod", "fmod (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_458, "fmod", "fmod (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_459, "fmod", "fmod (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_460, "fmod", "fmod (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_461, "fmod", "fmod (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_462, "fmod", "fmod (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_463, "fmod", "fmod (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_464, "fmod", "fmod (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_465, "fmod", "fmod (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_466, "fmod", "fmod (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_467, "fmod", "fmod (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_468, "fmod", "fmod (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_469, "fmod", "fmod (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_470, "fmod", "fmod (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_471, "fmod", "fmod (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_472, "fmod", "fmod (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_473, "fmod", "fmod (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_474, "fmod", "fmod (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_475, "fmod", "fmod (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_476, "fmod", "fmod (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_477, "fmod", "fmod (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_478, "fmod", "fmod (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_479, "fmod", "fmod (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmod_480, "fmod", "fmod (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_481, "fmod", "fmod (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_482, "fmod", "fmod (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_483, "fmod", "fmod (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_484, "fmod", "fmod (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmod_485, "fmod", "fmod (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_486, "fmod", "fmod (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_487, "fmod", "fmod (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_488, "fmod", "fmod (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_489, "fmod", "fmod (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmod_490, "fmod", "fmod (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_491, "fmod", "fmod (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_492, "fmod", "fmod (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_493, "fmod", "fmod (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_494, "fmod", "fmod (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_495, "fmod", "fmod (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_496, "fmod", "fmod (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_497, "fmod", "fmod (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_498, "fmod", "fmod (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_499, "fmod", "fmod (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmod_500, "fmod", "fmod (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_501, "fmod", "fmod (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmod_502, "fmod", "fmod (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmod_503, "fmod", "fmod (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_504, "fmod", "fmod (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_505, "fmod", "fmod (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmod_506, "fmod", "fmod (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmod_507, "fmod", "fmod (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmod_508, "fmod", "fmod (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_509, "fmod", "fmod (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_510, "fmod", "fmod (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_511, "fmod", "fmod (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_512, "fmod", "fmod (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_513, "fmod", "fmod (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_514, "fmod", "fmod (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_515, "fmod", "fmod (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_516, "fmod", "fmod (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_517, "fmod", "fmod (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_518, "fmod", "fmod (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_519, "fmod", "fmod (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_520, "fmod", "fmod (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_521, "fmod", "fmod (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_522, "fmod", "fmod (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_523, "fmod", "fmod (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_524, "fmod", "fmod (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmod_525, "fmod", "fmod (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_526, "fmod", "fmod (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmod_527, "fmod", "fmod (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmod_528, "fmod", "fmod (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_529, "fmod", "fmod (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_530, "fmod", "fmod (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmod_531, "fmod", "fmod (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmod_532, "fmod", "fmod (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmod_533, "fmod", "fmod (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_534, "fmod", "fmod (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_535, "fmod", "fmod (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_536, "fmod", "fmod (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_537, "fmod", "fmod (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_538, "fmod", "fmod (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_539, "fmod", "fmod (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_540, "fmod", "fmod (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_541, "fmod", "fmod (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_542, "fmod", "fmod (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_543, "fmod", "fmod (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_544, "fmod", "fmod (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_545, "fmod", "fmod (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_546, "fmod", "fmod (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_547, "fmod", "fmod (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_548, "fmod", "fmod (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_549, "fmod", "fmod (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmod_550, "fmod", "fmod (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_551, "fmod", "fmod (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_552, "fmod", "fmod (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_553, "fmod", "fmod (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_554, "fmod", "fmod (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fmod_555, "fmod", "fmod (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_556, "fmod", "fmod (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_557, "fmod", "fmod (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_558, "fmod", "fmod (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_559, "fmod", "fmod (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fmod_560, "fmod", "fmod (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_561, "fmod", "fmod (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_562, "fmod", "fmod (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_563, "fmod", "fmod (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_564, "fmod", "fmod (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fmod_565, "fmod", "fmod (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_566, "fmod", "fmod (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_567, "fmod", "fmod (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_568, "fmod", "fmod (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_569, "fmod", "fmod (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_570, "fmod", "fmod (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_571, "fmod", "fmod (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_572, "fmod", "fmod (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_573, "fmod", "fmod (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_574, "fmod", "fmod (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_575, "fmod", "fmod (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_576, "fmod", "fmod (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_577, "fmod", "fmod (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_578, "fmod", "fmod (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_579, "fmod", "fmod (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fmod_580, "fmod", "fmod (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_581, "fmod", "fmod (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_582, "fmod", "fmod (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_583, "fmod", "fmod (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_584, "fmod", "fmod (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fmod_585, "fmod", "fmod (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_586, "fmod", "fmod (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_587, "fmod", "fmod (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_588, "fmod", "fmod (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_589, "fmod", "fmod (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fmod_590, "fmod", "fmod (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_591, "fmod", "fmod (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_592, "fmod", "fmod (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_593, "fmod", "fmod (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_594, "fmod", "fmod (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_595, "fmod", "fmod (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_596, "fmod", "fmod (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_597, "fmod", "fmod (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_598, "fmod", "fmod (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_599, "fmod", "fmod (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmod_600, "fmod", "fmod (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_601, "fmod", "fmod (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmod_602, "fmod", "fmod (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmod_603, "fmod", "fmod (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_604, "fmod", "fmod (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fmod_605, "fmod", "fmod (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmod_606, "fmod", "fmod (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmod_607, "fmod", "fmod (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmod_608, "fmod", "fmod (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmod_609, "fmod", "fmod (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fmod_610, "fmod", "fmod (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fmod_611, "fmod", "fmod (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmod_612, "fmod", "fmod (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fmod_613, "fmod", "fmod (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmod_614, "fmod", "fmod (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fmod_615, "fmod", "fmod (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmod_616, "fmod", "fmod (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fmod_617, "fmod", "fmod (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmod_618, "fmod", "fmod (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fmod_619, "fmod", "fmod (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmod_620, "fmod", "fmod (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmod_621, "fmod", "fmod (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmod_622, "fmod", "fmod (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fmod_623, "fmod", "fmod (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmod_624, "fmod", "fmod (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
