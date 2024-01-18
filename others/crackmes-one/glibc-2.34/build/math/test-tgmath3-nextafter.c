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
(nextafterf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#endif
float
(nextafterf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(nextafterf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(nextafterf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#endif
double
(nextafter) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
long double
(nextafterl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(nextafterf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(nextafterf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(nextafterf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "nextafter";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_0 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = nextafter (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_1 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = nextafter (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_nextafter_2 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = nextafter (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_nextafter_3 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = nextafter (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_4 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_5 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_nextafter_6 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_nextafter_7 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_nextafter_8 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_9 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_10 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_11 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_12 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_13 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_14 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_15 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_16 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_17 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_18 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_19 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_nextafter_20 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_nextafter_21 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_22 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_23 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_24 (void)
{
  extern typeof (nextafter (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_25 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = nextafter (vol_var_float, vol_var__Float16);
}
#endif
static void
test_nextafter_26 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = nextafter (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_27 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = nextafter (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_28 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = nextafter (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_nextafter_29 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_double);
}
static void
test_nextafter_30 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_31 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_32 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_33 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_float, vol_var__Float128);
}
#endif
static void
test_nextafter_34 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_char);
}
static void
test_nextafter_35 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_signed_char);
}
static void
test_nextafter_36 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_unsigned_char);
}
static void
test_nextafter_37 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_short_int);
}
static void
test_nextafter_38 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_nextafter_39 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_int);
}
static void
test_nextafter_40 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_unsigned_int);
}
static void
test_nextafter_41 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_long_int);
}
static void
test_nextafter_42 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_nextafter_43 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_long_long_int);
}
static void
test_nextafter_44 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_45 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_46 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_47 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_enum_e);
}
static void
test_nextafter_48 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var__Bool);
}
static void
test_nextafter_49 (void)
{
  extern typeof (nextafter (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_nextafter_50 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = nextafter (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_51 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = nextafter (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_52 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = nextafter (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_nextafter_53 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = nextafter (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_54 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_55 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_nextafter_56 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_nextafter_57 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_nextafter_58 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_59 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_60 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_61 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_62 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_63 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_64 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_65 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_66 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_67 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_68 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_69 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_nextafter_70 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_nextafter_71 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_72 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_73 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_nextafter_74 (void)
{
  extern typeof (nextafter (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_nextafter_75 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = nextafter (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_76 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = nextafter (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_nextafter_77 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = nextafter (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_78 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = nextafter (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_79 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_80 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_nextafter_81 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_nextafter_82 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_nextafter_83 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_84 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_85 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_86 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_87 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_88 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_89 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_90 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_91 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_92 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_93 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_94 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_nextafter_95 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_nextafter_96 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_97 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_98 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_99 (void)
{
  extern typeof (nextafter (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_100 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var__Float16);
}
#endif
static void
test_nextafter_101 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_102 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_103 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_nextafter_104 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_double);
}
static void
test_nextafter_105 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_106 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_107 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_108 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_double, vol_var__Float128);
}
#endif
static void
test_nextafter_109 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_char);
}
static void
test_nextafter_110 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_signed_char);
}
static void
test_nextafter_111 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_unsigned_char);
}
static void
test_nextafter_112 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_short_int);
}
static void
test_nextafter_113 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_nextafter_114 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_int);
}
static void
test_nextafter_115 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_unsigned_int);
}
static void
test_nextafter_116 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_long_int);
}
static void
test_nextafter_117 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_nextafter_118 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_long_long_int);
}
static void
test_nextafter_119 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_120 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_121 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_122 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_enum_e);
}
static void
test_nextafter_123 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var__Bool);
}
static void
test_nextafter_124 (void)
{
  extern typeof (nextafter (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_125 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_nextafter_126 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_127 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_128 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_nextafter_129 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_double);
}
static void
test_nextafter_130 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_131 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = nextafter (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_nextafter_132 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = nextafter (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_nextafter_133 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_nextafter_134 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_char);
}
static void
test_nextafter_135 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_signed_char);
}
static void
test_nextafter_136 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_nextafter_137 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_short_int);
}
static void
test_nextafter_138 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_nextafter_139 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_int);
}
static void
test_nextafter_140 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_nextafter_141 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_long_int);
}
static void
test_nextafter_142 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_nextafter_143 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_long_long_int);
}
static void
test_nextafter_144 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_145 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_146 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_147 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_enum_e);
}
static void
test_nextafter_148 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var__Bool);
}
static void
test_nextafter_149 (void)
{
  extern typeof (nextafter (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_nextafter_150 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_151 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_nextafter_152 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_nextafter_153 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_154 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_155 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = nextafter (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_156 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_nextafter_157 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_nextafter_158 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_159 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_160 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_161 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_162 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_163 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_164 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_165 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_166 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_167 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_168 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_169 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_nextafter_170 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_nextafter_171 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_172 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_173 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_nextafter_174 (void)
{
  extern typeof (nextafter (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_nextafter_175 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_176 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_nextafter_177 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_nextafter_178 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_179 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_nextafter_180 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = nextafter (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_nextafter_181 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_182 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_nextafter_183 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_184 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_185 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_186 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_187 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_188 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_189 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_190 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_191 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_192 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_193 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_194 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_nextafter_195 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_nextafter_196 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_197 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_198 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_199 (void)
{
  extern typeof (nextafter (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_nextafter_200 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_201 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_nextafter_202 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_nextafter_203 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_204 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_nextafter_205 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_nextafter_206 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_nextafter_207 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_208 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_209 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_210 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_211 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_212 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_213 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_214 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_215 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_216 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_217 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_218 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_219 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_nextafter_220 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_nextafter_221 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_222 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_223 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_224 (void)
{
  extern typeof (nextafter (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_225 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var__Float16);
}
#endif
static void
test_nextafter_226 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_227 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_228 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_nextafter_229 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_double);
}
static void
test_nextafter_230 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_231 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_232 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_233 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_char, vol_var__Float128);
}
#endif
static void
test_nextafter_234 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_char);
}
static void
test_nextafter_235 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_signed_char);
}
static void
test_nextafter_236 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_unsigned_char);
}
static void
test_nextafter_237 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_short_int);
}
static void
test_nextafter_238 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_nextafter_239 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_int);
}
static void
test_nextafter_240 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_unsigned_int);
}
static void
test_nextafter_241 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_long_int);
}
static void
test_nextafter_242 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_nextafter_243 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_long_long_int);
}
static void
test_nextafter_244 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_245 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_246 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_247 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_enum_e);
}
static void
test_nextafter_248 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var__Bool);
}
static void
test_nextafter_249 (void)
{
  extern typeof (nextafter (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_250 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_nextafter_251 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_252 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_253 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_nextafter_254 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_double);
}
static void
test_nextafter_255 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_256 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_257 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_258 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_nextafter_259 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_char);
}
static void
test_nextafter_260 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_signed_char);
}
static void
test_nextafter_261 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_nextafter_262 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_short_int);
}
static void
test_nextafter_263 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_nextafter_264 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_int);
}
static void
test_nextafter_265 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_nextafter_266 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_long_int);
}
static void
test_nextafter_267 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_nextafter_268 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_nextafter_269 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_270 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_271 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_272 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_enum_e);
}
static void
test_nextafter_273 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var__Bool);
}
static void
test_nextafter_274 (void)
{
  extern typeof (nextafter (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_275 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_nextafter_276 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_277 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_278 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_nextafter_279 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_double);
}
static void
test_nextafter_280 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_281 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_282 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_283 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_nextafter_284 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_char);
}
static void
test_nextafter_285 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_nextafter_286 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_nextafter_287 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_nextafter_288 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_nextafter_289 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_int);
}
static void
test_nextafter_290 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_nextafter_291 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_nextafter_292 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_nextafter_293 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_nextafter_294 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_295 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_296 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_297 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_nextafter_298 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_nextafter_299 (void)
{
  extern typeof (nextafter (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_300 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_nextafter_301 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_302 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_303 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_304 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_double);
}
static void
test_nextafter_305 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_306 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_307 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_308 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_nextafter_309 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_char);
}
static void
test_nextafter_310 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_signed_char);
}
static void
test_nextafter_311 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_nextafter_312 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_short_int);
}
static void
test_nextafter_313 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_314 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_int);
}
static void
test_nextafter_315 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_nextafter_316 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_long_int);
}
static void
test_nextafter_317 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_318 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_long_long_int);
}
static void
test_nextafter_319 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_320 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_321 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_322 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_enum_e);
}
static void
test_nextafter_323 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var__Bool);
}
static void
test_nextafter_324 (void)
{
  extern typeof (nextafter (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_325 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_nextafter_326 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_327 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_328 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_329 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_nextafter_330 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_331 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_332 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_333 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_nextafter_334 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_nextafter_335 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_nextafter_336 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_nextafter_337 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_nextafter_338 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_339 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_nextafter_340 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_nextafter_341 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_nextafter_342 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_343 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_nextafter_344 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_345 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_346 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_347 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_nextafter_348 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_nextafter_349 (void)
{
  extern typeof (nextafter (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_350 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var__Float16);
}
#endif
static void
test_nextafter_351 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_352 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_353 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_354 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_double);
}
static void
test_nextafter_355 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_356 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_357 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_358 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_int, vol_var__Float128);
}
#endif
static void
test_nextafter_359 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_char);
}
static void
test_nextafter_360 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_signed_char);
}
static void
test_nextafter_361 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_unsigned_char);
}
static void
test_nextafter_362 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_short_int);
}
static void
test_nextafter_363 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_364 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_int);
}
static void
test_nextafter_365 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_unsigned_int);
}
static void
test_nextafter_366 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_long_int);
}
static void
test_nextafter_367 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_368 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_long_long_int);
}
static void
test_nextafter_369 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_370 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_371 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_372 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_enum_e);
}
static void
test_nextafter_373 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var__Bool);
}
static void
test_nextafter_374 (void)
{
  extern typeof (nextafter (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_375 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_nextafter_376 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_377 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_378 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_379 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_double);
}
static void
test_nextafter_380 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_381 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_382 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_383 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_nextafter_384 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_char);
}
static void
test_nextafter_385 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_nextafter_386 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_nextafter_387 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_nextafter_388 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_389 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_int);
}
static void
test_nextafter_390 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_nextafter_391 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_nextafter_392 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_393 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_nextafter_394 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_395 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_396 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_397 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_nextafter_398 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_nextafter_399 (void)
{
  extern typeof (nextafter (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_400 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_nextafter_401 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_402 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_403 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_404 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_double);
}
static void
test_nextafter_405 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_406 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_407 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_408 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_nextafter_409 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_char);
}
static void
test_nextafter_410 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_signed_char);
}
static void
test_nextafter_411 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_nextafter_412 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_short_int);
}
static void
test_nextafter_413 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_414 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_int);
}
static void
test_nextafter_415 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_nextafter_416 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_long_int);
}
static void
test_nextafter_417 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_418 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_long_long_int);
}
static void
test_nextafter_419 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_420 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_421 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_422 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_enum_e);
}
static void
test_nextafter_423 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var__Bool);
}
static void
test_nextafter_424 (void)
{
  extern typeof (nextafter (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_425 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_nextafter_426 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_427 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_428 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_429 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_nextafter_430 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_431 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_432 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_433 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_nextafter_434 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_nextafter_435 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_nextafter_436 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_nextafter_437 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_nextafter_438 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_439 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_nextafter_440 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_nextafter_441 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_nextafter_442 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_443 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_nextafter_444 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_445 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_446 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_447 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_nextafter_448 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_nextafter_449 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_450 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_nextafter_451 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_452 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_453 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_454 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_double);
}
static void
test_nextafter_455 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_456 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_457 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_458 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_nextafter_459 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_char);
}
static void
test_nextafter_460 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_nextafter_461 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_nextafter_462 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_short_int);
}
static void
test_nextafter_463 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_464 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_int);
}
static void
test_nextafter_465 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_nextafter_466 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_long_int);
}
static void
test_nextafter_467 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_468 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_nextafter_469 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_470 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_471 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_472 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_nextafter_473 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var__Bool);
}
static void
test_nextafter_474 (void)
{
  extern typeof (nextafter (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_475 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_nextafter_476 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_477 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_478 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_nextafter_479 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_nextafter_480 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_481 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_482 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_483 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_nextafter_484 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_nextafter_485 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_nextafter_486 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_nextafter_487 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_nextafter_488 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_nextafter_489 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_nextafter_490 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_nextafter_491 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_nextafter_492 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_nextafter_493 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_nextafter_494 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_495 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_496 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_497 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_nextafter_498 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_nextafter_499 (void)
{
  extern typeof (nextafter (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_nextafter_500 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_501 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_nextafter_502 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_nextafter_503 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_504 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_505 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_nextafter_506 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_nextafter_507 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_nextafter_508 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_509 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_510 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_511 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_512 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_513 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_514 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_515 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_516 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_517 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_518 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_519 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_520 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_521 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_522 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_523 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_524 (void)
{
  extern typeof (nextafter (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_nextafter_525 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_526 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_nextafter_527 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_nextafter_528 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_529 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_530 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_nextafter_531 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_nextafter_532 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_nextafter_533 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_534 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_535 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_536 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_537 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_538 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_539 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_540 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_541 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_542 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_543 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_544 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_545 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_546 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_547 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_548 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_549 (void)
{
  extern typeof (nextafter (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_nextafter_550 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_nextafter_551 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_552 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_553 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_nextafter_554 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_double);
}
static void
test_nextafter_555 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_556 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_557 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_558 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_nextafter_559 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_char);
}
static void
test_nextafter_560 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_signed_char);
}
static void
test_nextafter_561 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_nextafter_562 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_short_int);
}
static void
test_nextafter_563 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_nextafter_564 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_int);
}
static void
test_nextafter_565 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_nextafter_566 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_long_int);
}
static void
test_nextafter_567 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_nextafter_568 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_nextafter_569 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_570 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_571 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_572 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_enum_e);
}
static void
test_nextafter_573 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var__Bool);
}
static void
test_nextafter_574 (void)
{
  extern typeof (nextafter (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_575 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_nextafter_576 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_577 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_578 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_nextafter_579 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_double);
}
static void
test_nextafter_580 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_581 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_582 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_583 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_nextafter_584 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_char);
}
static void
test_nextafter_585 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_signed_char);
}
static void
test_nextafter_586 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_nextafter_587 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_short_int);
}
static void
test_nextafter_588 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_nextafter_589 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_int);
}
static void
test_nextafter_590 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_nextafter_591 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_long_int);
}
static void
test_nextafter_592 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_nextafter_593 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_long_long_int);
}
static void
test_nextafter_594 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_595 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_596 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_597 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_enum_e);
}
static void
test_nextafter_598 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var__Bool);
}
static void
test_nextafter_599 (void)
{
  extern typeof (nextafter (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_nextafter_600 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_nextafter_601 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_nextafter_602 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_nextafter_603 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_nextafter_604 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_double);
}
static void
test_nextafter_605 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = nextafter (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_nextafter_606 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = nextafter (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_nextafter_607 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = nextafter (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_nextafter_608 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = nextafter (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_nextafter_609 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_char);
}
static void
test_nextafter_610 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_signed_char);
}
static void
test_nextafter_611 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_nextafter_612 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_short_int);
}
static void
test_nextafter_613 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_nextafter_614 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_int);
}
static void
test_nextafter_615 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_nextafter_616 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_long_int);
}
static void
test_nextafter_617 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_nextafter_618 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_nextafter_619 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_nextafter_620 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_nextafter_621 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_nextafter_622 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_enum_e);
}
static void
test_nextafter_623 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var__Bool);
}
static void
test_nextafter_624 (void)
{
  extern typeof (nextafter (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = nextafter (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_nextafter_0, "nextafter", "nextafter (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_1, "nextafter", "nextafter (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_nextafter_2, "nextafter", "nextafter (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_nextafter_3, "nextafter", "nextafter (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_4, "nextafter", "nextafter (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_5, "nextafter", "nextafter (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_nextafter_6, "nextafter", "nextafter (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_nextafter_7, "nextafter", "nextafter (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_nextafter_8, "nextafter", "nextafter (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_9, "nextafter", "nextafter (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_10, "nextafter", "nextafter (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_11, "nextafter", "nextafter (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_12, "nextafter", "nextafter (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_13, "nextafter", "nextafter (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_14, "nextafter", "nextafter (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_15, "nextafter", "nextafter (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_16, "nextafter", "nextafter (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_17, "nextafter", "nextafter (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_18, "nextafter", "nextafter (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_19, "nextafter", "nextafter (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_nextafter_20, "nextafter", "nextafter (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_nextafter_21, "nextafter", "nextafter (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_22, "nextafter", "nextafter (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_23, "nextafter", "nextafter (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_24, "nextafter", "nextafter (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_25, "nextafter", "nextafter (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_nextafter_26, "nextafter", "nextafter (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_27, "nextafter", "nextafter (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_28, "nextafter", "nextafter (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_nextafter_29, "nextafter", "nextafter (float, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_30, "nextafter", "nextafter (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_31, "nextafter", "nextafter (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_32, "nextafter", "nextafter (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_33, "nextafter", "nextafter (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_34, "nextafter", "nextafter (float, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_35, "nextafter", "nextafter (float, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_36, "nextafter", "nextafter (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_37, "nextafter", "nextafter (float, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_38, "nextafter", "nextafter (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_39, "nextafter", "nextafter (float, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_40, "nextafter", "nextafter (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_41, "nextafter", "nextafter (float, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_42, "nextafter", "nextafter (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_43, "nextafter", "nextafter (float, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_44, "nextafter", "nextafter (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_45, "nextafter", "nextafter (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_46, "nextafter", "nextafter (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_47, "nextafter", "nextafter (float, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_48, "nextafter", "nextafter (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_49, "nextafter", "nextafter (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_nextafter_50, "nextafter", "nextafter (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_51, "nextafter", "nextafter (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_52, "nextafter", "nextafter (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_nextafter_53, "nextafter", "nextafter (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_54, "nextafter", "nextafter (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_55, "nextafter", "nextafter (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_nextafter_56, "nextafter", "nextafter (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_nextafter_57, "nextafter", "nextafter (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_nextafter_58, "nextafter", "nextafter (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_59, "nextafter", "nextafter (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_60, "nextafter", "nextafter (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_61, "nextafter", "nextafter (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_62, "nextafter", "nextafter (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_63, "nextafter", "nextafter (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_64, "nextafter", "nextafter (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_65, "nextafter", "nextafter (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_66, "nextafter", "nextafter (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_67, "nextafter", "nextafter (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_68, "nextafter", "nextafter (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_69, "nextafter", "nextafter (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_nextafter_70, "nextafter", "nextafter (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_nextafter_71, "nextafter", "nextafter (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_72, "nextafter", "nextafter (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_73, "nextafter", "nextafter (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_nextafter_74, "nextafter", "nextafter (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_nextafter_75, "nextafter", "nextafter (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_76, "nextafter", "nextafter (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_nextafter_77, "nextafter", "nextafter (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_78, "nextafter", "nextafter (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_79, "nextafter", "nextafter (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_80, "nextafter", "nextafter (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_nextafter_81, "nextafter", "nextafter (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_nextafter_82, "nextafter", "nextafter (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_nextafter_83, "nextafter", "nextafter (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_84, "nextafter", "nextafter (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_85, "nextafter", "nextafter (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_86, "nextafter", "nextafter (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_87, "nextafter", "nextafter (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_88, "nextafter", "nextafter (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_89, "nextafter", "nextafter (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_90, "nextafter", "nextafter (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_91, "nextafter", "nextafter (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_92, "nextafter", "nextafter (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_93, "nextafter", "nextafter (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_94, "nextafter", "nextafter (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_nextafter_95, "nextafter", "nextafter (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_nextafter_96, "nextafter", "nextafter (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_97, "nextafter", "nextafter (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_98, "nextafter", "nextafter (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_99, "nextafter", "nextafter (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_100, "nextafter", "nextafter (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_101, "nextafter", "nextafter (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_102, "nextafter", "nextafter (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_103, "nextafter", "nextafter (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_104, "nextafter", "nextafter (double, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_105, "nextafter", "nextafter (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_106, "nextafter", "nextafter (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_107, "nextafter", "nextafter (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_108, "nextafter", "nextafter (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_109, "nextafter", "nextafter (double, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_110, "nextafter", "nextafter (double, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_111, "nextafter", "nextafter (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_112, "nextafter", "nextafter (double, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_113, "nextafter", "nextafter (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_114, "nextafter", "nextafter (double, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_115, "nextafter", "nextafter (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_116, "nextafter", "nextafter (double, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_117, "nextafter", "nextafter (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_118, "nextafter", "nextafter (double, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_119, "nextafter", "nextafter (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_120, "nextafter", "nextafter (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_121, "nextafter", "nextafter (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_122, "nextafter", "nextafter (double, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_123, "nextafter", "nextafter (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_124, "nextafter", "nextafter (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_125, "nextafter", "nextafter (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_nextafter_126, "nextafter", "nextafter (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_127, "nextafter", "nextafter (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_128, "nextafter", "nextafter (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_nextafter_129, "nextafter", "nextafter (long double, double)", LDBL_MANT_DIG, 0 },
    { test_nextafter_130, "nextafter", "nextafter (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_131, "nextafter", "nextafter (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_nextafter_132, "nextafter", "nextafter (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_nextafter_133, "nextafter", "nextafter (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_134, "nextafter", "nextafter (long double, char)", LDBL_MANT_DIG, 0 },
    { test_nextafter_135, "nextafter", "nextafter (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_nextafter_136, "nextafter", "nextafter (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_nextafter_137, "nextafter", "nextafter (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_nextafter_138, "nextafter", "nextafter (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_nextafter_139, "nextafter", "nextafter (long double, int)", LDBL_MANT_DIG, 0 },
    { test_nextafter_140, "nextafter", "nextafter (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_nextafter_141, "nextafter", "nextafter (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_nextafter_142, "nextafter", "nextafter (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_nextafter_143, "nextafter", "nextafter (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_nextafter_144, "nextafter", "nextafter (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_145, "nextafter", "nextafter (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_146, "nextafter", "nextafter (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_nextafter_147, "nextafter", "nextafter (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_nextafter_148, "nextafter", "nextafter (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_nextafter_149, "nextafter", "nextafter (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_nextafter_150, "nextafter", "nextafter (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_151, "nextafter", "nextafter (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_nextafter_152, "nextafter", "nextafter (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_nextafter_153, "nextafter", "nextafter (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_154, "nextafter", "nextafter (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_155, "nextafter", "nextafter (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_156, "nextafter", "nextafter (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_nextafter_157, "nextafter", "nextafter (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_nextafter_158, "nextafter", "nextafter (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_159, "nextafter", "nextafter (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_160, "nextafter", "nextafter (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_161, "nextafter", "nextafter (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_162, "nextafter", "nextafter (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_163, "nextafter", "nextafter (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_164, "nextafter", "nextafter (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_165, "nextafter", "nextafter (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_166, "nextafter", "nextafter (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_167, "nextafter", "nextafter (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_168, "nextafter", "nextafter (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_169, "nextafter", "nextafter (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_nextafter_170, "nextafter", "nextafter (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_nextafter_171, "nextafter", "nextafter (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_172, "nextafter", "nextafter (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_173, "nextafter", "nextafter (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_nextafter_174, "nextafter", "nextafter (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_nextafter_175, "nextafter", "nextafter (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_176, "nextafter", "nextafter (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_nextafter_177, "nextafter", "nextafter (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_nextafter_178, "nextafter", "nextafter (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_179, "nextafter", "nextafter (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_nextafter_180, "nextafter", "nextafter (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_nextafter_181, "nextafter", "nextafter (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_182, "nextafter", "nextafter (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_nextafter_183, "nextafter", "nextafter (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_184, "nextafter", "nextafter (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_185, "nextafter", "nextafter (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_186, "nextafter", "nextafter (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_187, "nextafter", "nextafter (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_188, "nextafter", "nextafter (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_189, "nextafter", "nextafter (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_190, "nextafter", "nextafter (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_191, "nextafter", "nextafter (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_192, "nextafter", "nextafter (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_193, "nextafter", "nextafter (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_194, "nextafter", "nextafter (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_nextafter_195, "nextafter", "nextafter (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_nextafter_196, "nextafter", "nextafter (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_197, "nextafter", "nextafter (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_198, "nextafter", "nextafter (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_199, "nextafter", "nextafter (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_nextafter_200, "nextafter", "nextafter (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_201, "nextafter", "nextafter (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_nextafter_202, "nextafter", "nextafter (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_nextafter_203, "nextafter", "nextafter (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_204, "nextafter", "nextafter (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_nextafter_205, "nextafter", "nextafter (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_nextafter_206, "nextafter", "nextafter (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_nextafter_207, "nextafter", "nextafter (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_208, "nextafter", "nextafter (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_209, "nextafter", "nextafter (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_210, "nextafter", "nextafter (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_211, "nextafter", "nextafter (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_212, "nextafter", "nextafter (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_213, "nextafter", "nextafter (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_214, "nextafter", "nextafter (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_215, "nextafter", "nextafter (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_216, "nextafter", "nextafter (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_217, "nextafter", "nextafter (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_218, "nextafter", "nextafter (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_219, "nextafter", "nextafter (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_nextafter_220, "nextafter", "nextafter (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_nextafter_221, "nextafter", "nextafter (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_222, "nextafter", "nextafter (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_223, "nextafter", "nextafter (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_224, "nextafter", "nextafter (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_225, "nextafter", "nextafter (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_226, "nextafter", "nextafter (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_227, "nextafter", "nextafter (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_228, "nextafter", "nextafter (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_229, "nextafter", "nextafter (char, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_230, "nextafter", "nextafter (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_231, "nextafter", "nextafter (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_232, "nextafter", "nextafter (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_233, "nextafter", "nextafter (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_234, "nextafter", "nextafter (char, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_235, "nextafter", "nextafter (char, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_236, "nextafter", "nextafter (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_237, "nextafter", "nextafter (char, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_238, "nextafter", "nextafter (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_239, "nextafter", "nextafter (char, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_240, "nextafter", "nextafter (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_241, "nextafter", "nextafter (char, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_242, "nextafter", "nextafter (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_243, "nextafter", "nextafter (char, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_244, "nextafter", "nextafter (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_245, "nextafter", "nextafter (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_246, "nextafter", "nextafter (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_247, "nextafter", "nextafter (char, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_248, "nextafter", "nextafter (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_249, "nextafter", "nextafter (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_250, "nextafter", "nextafter (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_251, "nextafter", "nextafter (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_252, "nextafter", "nextafter (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_253, "nextafter", "nextafter (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_254, "nextafter", "nextafter (signed char, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_255, "nextafter", "nextafter (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_256, "nextafter", "nextafter (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_257, "nextafter", "nextafter (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_258, "nextafter", "nextafter (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_259, "nextafter", "nextafter (signed char, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_260, "nextafter", "nextafter (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_261, "nextafter", "nextafter (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_262, "nextafter", "nextafter (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_263, "nextafter", "nextafter (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_264, "nextafter", "nextafter (signed char, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_265, "nextafter", "nextafter (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_266, "nextafter", "nextafter (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_267, "nextafter", "nextafter (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_268, "nextafter", "nextafter (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_269, "nextafter", "nextafter (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_270, "nextafter", "nextafter (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_271, "nextafter", "nextafter (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_272, "nextafter", "nextafter (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_273, "nextafter", "nextafter (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_274, "nextafter", "nextafter (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_275, "nextafter", "nextafter (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_276, "nextafter", "nextafter (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_277, "nextafter", "nextafter (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_278, "nextafter", "nextafter (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_279, "nextafter", "nextafter (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_280, "nextafter", "nextafter (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_281, "nextafter", "nextafter (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_282, "nextafter", "nextafter (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_283, "nextafter", "nextafter (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_284, "nextafter", "nextafter (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_285, "nextafter", "nextafter (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_286, "nextafter", "nextafter (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_287, "nextafter", "nextafter (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_288, "nextafter", "nextafter (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_289, "nextafter", "nextafter (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_290, "nextafter", "nextafter (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_291, "nextafter", "nextafter (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_292, "nextafter", "nextafter (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_293, "nextafter", "nextafter (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_294, "nextafter", "nextafter (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_295, "nextafter", "nextafter (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_296, "nextafter", "nextafter (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_297, "nextafter", "nextafter (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_298, "nextafter", "nextafter (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_299, "nextafter", "nextafter (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_300, "nextafter", "nextafter (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_301, "nextafter", "nextafter (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_302, "nextafter", "nextafter (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_303, "nextafter", "nextafter (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_304, "nextafter", "nextafter (short int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_305, "nextafter", "nextafter (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_306, "nextafter", "nextafter (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_307, "nextafter", "nextafter (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_308, "nextafter", "nextafter (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_309, "nextafter", "nextafter (short int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_310, "nextafter", "nextafter (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_311, "nextafter", "nextafter (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_312, "nextafter", "nextafter (short int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_313, "nextafter", "nextafter (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_314, "nextafter", "nextafter (short int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_315, "nextafter", "nextafter (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_316, "nextafter", "nextafter (short int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_317, "nextafter", "nextafter (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_318, "nextafter", "nextafter (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_319, "nextafter", "nextafter (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_320, "nextafter", "nextafter (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_321, "nextafter", "nextafter (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_322, "nextafter", "nextafter (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_323, "nextafter", "nextafter (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_324, "nextafter", "nextafter (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_325, "nextafter", "nextafter (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_326, "nextafter", "nextafter (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_327, "nextafter", "nextafter (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_328, "nextafter", "nextafter (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_329, "nextafter", "nextafter (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_330, "nextafter", "nextafter (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_331, "nextafter", "nextafter (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_332, "nextafter", "nextafter (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_333, "nextafter", "nextafter (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_334, "nextafter", "nextafter (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_335, "nextafter", "nextafter (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_336, "nextafter", "nextafter (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_337, "nextafter", "nextafter (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_338, "nextafter", "nextafter (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_339, "nextafter", "nextafter (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_340, "nextafter", "nextafter (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_341, "nextafter", "nextafter (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_342, "nextafter", "nextafter (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_343, "nextafter", "nextafter (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_344, "nextafter", "nextafter (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_345, "nextafter", "nextafter (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_346, "nextafter", "nextafter (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_347, "nextafter", "nextafter (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_348, "nextafter", "nextafter (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_349, "nextafter", "nextafter (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_350, "nextafter", "nextafter (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_351, "nextafter", "nextafter (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_352, "nextafter", "nextafter (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_353, "nextafter", "nextafter (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_354, "nextafter", "nextafter (int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_355, "nextafter", "nextafter (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_356, "nextafter", "nextafter (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_357, "nextafter", "nextafter (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_358, "nextafter", "nextafter (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_359, "nextafter", "nextafter (int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_360, "nextafter", "nextafter (int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_361, "nextafter", "nextafter (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_362, "nextafter", "nextafter (int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_363, "nextafter", "nextafter (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_364, "nextafter", "nextafter (int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_365, "nextafter", "nextafter (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_366, "nextafter", "nextafter (int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_367, "nextafter", "nextafter (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_368, "nextafter", "nextafter (int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_369, "nextafter", "nextafter (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_370, "nextafter", "nextafter (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_371, "nextafter", "nextafter (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_372, "nextafter", "nextafter (int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_373, "nextafter", "nextafter (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_374, "nextafter", "nextafter (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_375, "nextafter", "nextafter (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_376, "nextafter", "nextafter (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_377, "nextafter", "nextafter (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_378, "nextafter", "nextafter (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_379, "nextafter", "nextafter (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_380, "nextafter", "nextafter (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_381, "nextafter", "nextafter (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_382, "nextafter", "nextafter (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_383, "nextafter", "nextafter (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_384, "nextafter", "nextafter (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_385, "nextafter", "nextafter (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_386, "nextafter", "nextafter (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_387, "nextafter", "nextafter (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_388, "nextafter", "nextafter (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_389, "nextafter", "nextafter (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_390, "nextafter", "nextafter (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_391, "nextafter", "nextafter (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_392, "nextafter", "nextafter (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_393, "nextafter", "nextafter (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_394, "nextafter", "nextafter (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_395, "nextafter", "nextafter (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_396, "nextafter", "nextafter (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_397, "nextafter", "nextafter (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_398, "nextafter", "nextafter (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_399, "nextafter", "nextafter (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_400, "nextafter", "nextafter (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_401, "nextafter", "nextafter (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_402, "nextafter", "nextafter (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_403, "nextafter", "nextafter (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_404, "nextafter", "nextafter (long int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_405, "nextafter", "nextafter (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_406, "nextafter", "nextafter (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_407, "nextafter", "nextafter (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_408, "nextafter", "nextafter (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_409, "nextafter", "nextafter (long int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_410, "nextafter", "nextafter (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_411, "nextafter", "nextafter (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_412, "nextafter", "nextafter (long int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_413, "nextafter", "nextafter (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_414, "nextafter", "nextafter (long int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_415, "nextafter", "nextafter (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_416, "nextafter", "nextafter (long int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_417, "nextafter", "nextafter (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_418, "nextafter", "nextafter (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_419, "nextafter", "nextafter (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_420, "nextafter", "nextafter (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_421, "nextafter", "nextafter (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_422, "nextafter", "nextafter (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_423, "nextafter", "nextafter (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_424, "nextafter", "nextafter (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_425, "nextafter", "nextafter (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_426, "nextafter", "nextafter (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_427, "nextafter", "nextafter (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_428, "nextafter", "nextafter (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_429, "nextafter", "nextafter (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_430, "nextafter", "nextafter (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_431, "nextafter", "nextafter (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_432, "nextafter", "nextafter (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_433, "nextafter", "nextafter (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_434, "nextafter", "nextafter (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_435, "nextafter", "nextafter (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_436, "nextafter", "nextafter (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_437, "nextafter", "nextafter (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_438, "nextafter", "nextafter (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_439, "nextafter", "nextafter (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_440, "nextafter", "nextafter (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_441, "nextafter", "nextafter (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_442, "nextafter", "nextafter (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_443, "nextafter", "nextafter (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_444, "nextafter", "nextafter (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_445, "nextafter", "nextafter (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_446, "nextafter", "nextafter (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_447, "nextafter", "nextafter (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_448, "nextafter", "nextafter (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_449, "nextafter", "nextafter (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_450, "nextafter", "nextafter (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_451, "nextafter", "nextafter (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_452, "nextafter", "nextafter (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_453, "nextafter", "nextafter (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_454, "nextafter", "nextafter (long long int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_455, "nextafter", "nextafter (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_456, "nextafter", "nextafter (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_457, "nextafter", "nextafter (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_458, "nextafter", "nextafter (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_459, "nextafter", "nextafter (long long int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_460, "nextafter", "nextafter (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_461, "nextafter", "nextafter (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_462, "nextafter", "nextafter (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_463, "nextafter", "nextafter (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_464, "nextafter", "nextafter (long long int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_465, "nextafter", "nextafter (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_466, "nextafter", "nextafter (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_467, "nextafter", "nextafter (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_468, "nextafter", "nextafter (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_469, "nextafter", "nextafter (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_470, "nextafter", "nextafter (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_471, "nextafter", "nextafter (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_472, "nextafter", "nextafter (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_473, "nextafter", "nextafter (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_474, "nextafter", "nextafter (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_475, "nextafter", "nextafter (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_476, "nextafter", "nextafter (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_477, "nextafter", "nextafter (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_478, "nextafter", "nextafter (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_479, "nextafter", "nextafter (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_480, "nextafter", "nextafter (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_481, "nextafter", "nextafter (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_482, "nextafter", "nextafter (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_483, "nextafter", "nextafter (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_484, "nextafter", "nextafter (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_485, "nextafter", "nextafter (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_486, "nextafter", "nextafter (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_487, "nextafter", "nextafter (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_488, "nextafter", "nextafter (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_489, "nextafter", "nextafter (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_490, "nextafter", "nextafter (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_491, "nextafter", "nextafter (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_492, "nextafter", "nextafter (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_493, "nextafter", "nextafter (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_494, "nextafter", "nextafter (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_495, "nextafter", "nextafter (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_496, "nextafter", "nextafter (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_497, "nextafter", "nextafter (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_498, "nextafter", "nextafter (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_499, "nextafter", "nextafter (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_nextafter_500, "nextafter", "nextafter (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_501, "nextafter", "nextafter (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_nextafter_502, "nextafter", "nextafter (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_nextafter_503, "nextafter", "nextafter (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_504, "nextafter", "nextafter (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_505, "nextafter", "nextafter (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_nextafter_506, "nextafter", "nextafter (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_nextafter_507, "nextafter", "nextafter (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_nextafter_508, "nextafter", "nextafter (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_509, "nextafter", "nextafter (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_510, "nextafter", "nextafter (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_511, "nextafter", "nextafter (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_512, "nextafter", "nextafter (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_513, "nextafter", "nextafter (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_514, "nextafter", "nextafter (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_515, "nextafter", "nextafter (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_516, "nextafter", "nextafter (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_517, "nextafter", "nextafter (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_518, "nextafter", "nextafter (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_519, "nextafter", "nextafter (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_520, "nextafter", "nextafter (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_521, "nextafter", "nextafter (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_522, "nextafter", "nextafter (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_523, "nextafter", "nextafter (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_524, "nextafter", "nextafter (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_nextafter_525, "nextafter", "nextafter (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_526, "nextafter", "nextafter (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_nextafter_527, "nextafter", "nextafter (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_nextafter_528, "nextafter", "nextafter (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_529, "nextafter", "nextafter (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_530, "nextafter", "nextafter (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_nextafter_531, "nextafter", "nextafter (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_nextafter_532, "nextafter", "nextafter (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_nextafter_533, "nextafter", "nextafter (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_534, "nextafter", "nextafter (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_535, "nextafter", "nextafter (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_536, "nextafter", "nextafter (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_537, "nextafter", "nextafter (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_538, "nextafter", "nextafter (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_539, "nextafter", "nextafter (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_540, "nextafter", "nextafter (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_541, "nextafter", "nextafter (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_542, "nextafter", "nextafter (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_543, "nextafter", "nextafter (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_544, "nextafter", "nextafter (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_545, "nextafter", "nextafter (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_546, "nextafter", "nextafter (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_547, "nextafter", "nextafter (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_548, "nextafter", "nextafter (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_549, "nextafter", "nextafter (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_nextafter_550, "nextafter", "nextafter (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_551, "nextafter", "nextafter (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_552, "nextafter", "nextafter (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_553, "nextafter", "nextafter (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_554, "nextafter", "nextafter (enum e, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_555, "nextafter", "nextafter (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_556, "nextafter", "nextafter (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_557, "nextafter", "nextafter (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_558, "nextafter", "nextafter (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_559, "nextafter", "nextafter (enum e, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_560, "nextafter", "nextafter (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_561, "nextafter", "nextafter (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_562, "nextafter", "nextafter (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_563, "nextafter", "nextafter (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_564, "nextafter", "nextafter (enum e, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_565, "nextafter", "nextafter (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_566, "nextafter", "nextafter (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_567, "nextafter", "nextafter (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_568, "nextafter", "nextafter (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_569, "nextafter", "nextafter (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_570, "nextafter", "nextafter (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_571, "nextafter", "nextafter (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_572, "nextafter", "nextafter (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_573, "nextafter", "nextafter (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_574, "nextafter", "nextafter (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_575, "nextafter", "nextafter (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_576, "nextafter", "nextafter (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_577, "nextafter", "nextafter (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_578, "nextafter", "nextafter (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_579, "nextafter", "nextafter (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_580, "nextafter", "nextafter (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_581, "nextafter", "nextafter (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_582, "nextafter", "nextafter (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_583, "nextafter", "nextafter (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_584, "nextafter", "nextafter (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_585, "nextafter", "nextafter (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_586, "nextafter", "nextafter (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_587, "nextafter", "nextafter (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_588, "nextafter", "nextafter (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_589, "nextafter", "nextafter (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_590, "nextafter", "nextafter (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_591, "nextafter", "nextafter (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_592, "nextafter", "nextafter (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_593, "nextafter", "nextafter (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_594, "nextafter", "nextafter (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_595, "nextafter", "nextafter (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_596, "nextafter", "nextafter (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_597, "nextafter", "nextafter (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_598, "nextafter", "nextafter (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_599, "nextafter", "nextafter (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_nextafter_600, "nextafter", "nextafter (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_601, "nextafter", "nextafter (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_nextafter_602, "nextafter", "nextafter (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_nextafter_603, "nextafter", "nextafter (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_604, "nextafter", "nextafter (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_nextafter_605, "nextafter", "nextafter (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_nextafter_606, "nextafter", "nextafter (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_nextafter_607, "nextafter", "nextafter (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_nextafter_608, "nextafter", "nextafter (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_nextafter_609, "nextafter", "nextafter (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_nextafter_610, "nextafter", "nextafter (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_nextafter_611, "nextafter", "nextafter (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_nextafter_612, "nextafter", "nextafter (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_613, "nextafter", "nextafter (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_nextafter_614, "nextafter", "nextafter (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_nextafter_615, "nextafter", "nextafter (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_nextafter_616, "nextafter", "nextafter (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_617, "nextafter", "nextafter (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_618, "nextafter", "nextafter (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_nextafter_619, "nextafter", "nextafter (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_nextafter_620, "nextafter", "nextafter (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_nextafter_621, "nextafter", "nextafter (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_nextafter_622, "nextafter", "nextafter (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_nextafter_623, "nextafter", "nextafter (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_nextafter_624, "nextafter", "nextafter (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
