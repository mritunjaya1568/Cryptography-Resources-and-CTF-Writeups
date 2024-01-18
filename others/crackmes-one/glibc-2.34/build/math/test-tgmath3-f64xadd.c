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
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float64x
(f64xaddf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64xadd";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_0 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xadd_1 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xadd_2 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xadd_3 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xadd_4 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xadd_5 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_6 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_7 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_8 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_9 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_10 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_11 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_12 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_13 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_14 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_15 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_16 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xadd_17 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xadd_18 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_19 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_20 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_21 (void)
{
  extern typeof (f64xadd (vol_var__Float16, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xadd_22 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_23 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xadd_24 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xadd_25 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xadd_26 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xadd_27 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_28 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_29 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_30 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_31 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_32 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_33 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_34 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_35 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_36 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_37 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_38 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xadd_39 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xadd_40 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_41 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_42 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_43 (void)
{
  extern typeof (f64xadd (vol_var__Float32, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xadd_44 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xadd_45 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_46 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xadd_47 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xadd_48 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xadd_49 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_50 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_51 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_52 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_53 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_54 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_55 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_56 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_57 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_58 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_59 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_60 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xadd_61 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xadd_62 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_63 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_64 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_65 (void)
{
  extern typeof (f64xadd (vol_var__Float32x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xadd_66 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xadd_67 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xadd_68 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_69 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xadd_70 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xadd_71 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_72 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_73 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_74 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_75 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_76 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_77 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_78 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_79 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_80 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_81 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_82 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xadd_83 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xadd_84 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_85 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_86 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_87 (void)
{
  extern typeof (f64xadd (vol_var__Float64, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xadd_88 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xadd_89 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xadd_90 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xadd_91 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_92 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xadd_93 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_94 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_95 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_96 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_97 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_98 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_99 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_100 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_101 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_102 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_103 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_104 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xadd_105 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xadd_106 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_107 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_108 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_109 (void)
{
  extern typeof (f64xadd (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xadd_110 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xadd_111 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xadd_112 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xadd_113 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xadd_114 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_115 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_116 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_117 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_118 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_119 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_120 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_121 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_122 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_123 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_124 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_125 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_126 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xadd_127 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xadd_128 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_129 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_130 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_131 (void)
{
  extern typeof (f64xadd (vol_var__Float128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_132 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_133 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_134 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_135 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_136 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_137 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_138 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_139 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_140 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_141 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_142 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_143 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_144 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_145 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_146 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_147 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_148 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_149 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_150 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_151 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_152 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_153 (void)
{
  extern typeof (f64xadd (vol_var_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_154 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_155 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_156 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_157 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_158 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_159 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_160 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_161 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_162 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_163 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_164 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_165 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_166 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_167 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_168 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_169 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_170 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_171 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_172 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_173 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_174 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_175 (void)
{
  extern typeof (f64xadd (vol_var_signed_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_176 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_177 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_178 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_179 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_180 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_181 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_182 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_183 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_184 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_185 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_186 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_187 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_188 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_189 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_190 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_191 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_192 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_193 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_194 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_195 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_196 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_197 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_198 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_199 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_200 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_201 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_202 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_203 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_204 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_205 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_206 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_207 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_208 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_209 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_210 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_211 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_212 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_213 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_214 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_215 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_216 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_217 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_218 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_219 (void)
{
  extern typeof (f64xadd (vol_var_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_220 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_221 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_222 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_223 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_224 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_225 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_226 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_227 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_228 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_229 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_230 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_231 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_232 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_233 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_234 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_235 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_236 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_237 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_238 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_239 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_240 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_241 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_242 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_243 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_244 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_245 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_246 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_247 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_248 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_249 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_250 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_251 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_252 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_253 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_254 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_255 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_256 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_257 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_258 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_259 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_260 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_261 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_262 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_263 (void)
{
  extern typeof (f64xadd (vol_var_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_264 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_265 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_266 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_267 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_268 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_269 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_270 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_271 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_272 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_273 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_274 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_275 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_276 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_277 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_278 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_279 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_280 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_281 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_282 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_283 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_284 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_285 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_286 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_287 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_288 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_289 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_290 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_291 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_292 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_293 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_294 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_295 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_296 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_297 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_298 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_299 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_300 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_301 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_302 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_303 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_304 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_305 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_306 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_307 (void)
{
  extern typeof (f64xadd (vol_var_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_308 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_309 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_310 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_311 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_312 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_313 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_314 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_315 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_316 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_317 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_318 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_319 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_320 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_321 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_322 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_323 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_324 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_325 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_326 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_327 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_328 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_329 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_330 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_331 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_332 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_333 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_334 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_335 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_336 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_337 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_338 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_339 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_340 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_341 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_342 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_343 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_344 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_345 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_346 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_347 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_348 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_349 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_350 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_351 (void)
{
  extern typeof (f64xadd (vol_var_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_352 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_353 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_354 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_355 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_356 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_357 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_358 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_359 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_360 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_361 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_362 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_363 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_364 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_365 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_366 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_367 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_368 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_369 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_370 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_371 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_372 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_373 (void)
{
  extern typeof (f64xadd (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xadd_374 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xadd_375 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xadd_376 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xadd_377 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xadd_378 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xadd_379 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_380 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_381 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_382 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_383 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_384 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_385 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_386 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_387 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_388 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_389 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_390 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_391 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_392 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_393 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_394 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_395 (void)
{
  extern typeof (f64xadd (vol_var___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xadd_396 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xadd_397 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xadd_398 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xadd_399 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xadd_400 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xadd_401 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_402 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_403 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_404 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_405 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_406 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_407 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_408 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_409 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_410 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_411 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_412 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_413 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_414 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_415 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_416 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_417 (void)
{
  extern typeof (f64xadd (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_418 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_419 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_420 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_421 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_422 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_423 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_424 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_425 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_426 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_427 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_428 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_429 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_430 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_431 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_432 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_433 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_434 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_435 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_436 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_437 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_438 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_439 (void)
{
  extern typeof (f64xadd (vol_var_enum_e, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_440 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_441 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_442 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_443 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_444 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_445 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_446 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_447 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_448 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_449 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_450 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_451 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_452 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_453 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_454 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_455 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_456 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_457 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_458 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_459 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_460 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_461 (void)
{
  extern typeof (f64xadd (vol_var__Bool, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xadd_462 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xadd_463 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xadd_464 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xadd_465 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xadd_466 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xadd_467 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_468 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_469 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_470 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_471 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_472 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_473 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_474 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_475 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_476 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_477 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_478 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_479 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xadd_480 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_481 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_482 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xadd_483 (void)
{
  extern typeof (f64xadd (vol_var_bit_field, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xadd (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_0, "f64xadd", "f64xadd (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xadd_1, "f64xadd", "f64xadd (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xadd_2, "f64xadd", "f64xadd (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xadd_3, "f64xadd", "f64xadd (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xadd_4, "f64xadd", "f64xadd (_Float16, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xadd_5, "f64xadd", "f64xadd (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_6, "f64xadd", "f64xadd (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_7, "f64xadd", "f64xadd (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_8, "f64xadd", "f64xadd (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_9, "f64xadd", "f64xadd (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_10, "f64xadd", "f64xadd (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_11, "f64xadd", "f64xadd (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_12, "f64xadd", "f64xadd (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_13, "f64xadd", "f64xadd (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_14, "f64xadd", "f64xadd (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_15, "f64xadd", "f64xadd (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_16, "f64xadd", "f64xadd (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xadd_17, "f64xadd", "f64xadd (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xadd_18, "f64xadd", "f64xadd (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_19, "f64xadd", "f64xadd (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_20, "f64xadd", "f64xadd (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_21, "f64xadd", "f64xadd (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xadd_22, "f64xadd", "f64xadd (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_23, "f64xadd", "f64xadd (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xadd_24, "f64xadd", "f64xadd (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xadd_25, "f64xadd", "f64xadd (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xadd_26, "f64xadd", "f64xadd (_Float32, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xadd_27, "f64xadd", "f64xadd (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_28, "f64xadd", "f64xadd (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_29, "f64xadd", "f64xadd (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_30, "f64xadd", "f64xadd (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_31, "f64xadd", "f64xadd (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_32, "f64xadd", "f64xadd (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_33, "f64xadd", "f64xadd (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_34, "f64xadd", "f64xadd (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_35, "f64xadd", "f64xadd (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_36, "f64xadd", "f64xadd (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_37, "f64xadd", "f64xadd (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_38, "f64xadd", "f64xadd (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xadd_39, "f64xadd", "f64xadd (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xadd_40, "f64xadd", "f64xadd (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_41, "f64xadd", "f64xadd (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_42, "f64xadd", "f64xadd (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_43, "f64xadd", "f64xadd (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xadd_44, "f64xadd", "f64xadd (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xadd_45, "f64xadd", "f64xadd (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_46, "f64xadd", "f64xadd (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xadd_47, "f64xadd", "f64xadd (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xadd_48, "f64xadd", "f64xadd (_Float32x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xadd_49, "f64xadd", "f64xadd (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_50, "f64xadd", "f64xadd (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_51, "f64xadd", "f64xadd (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_52, "f64xadd", "f64xadd (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_53, "f64xadd", "f64xadd (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_54, "f64xadd", "f64xadd (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_55, "f64xadd", "f64xadd (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_56, "f64xadd", "f64xadd (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_57, "f64xadd", "f64xadd (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_58, "f64xadd", "f64xadd (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_59, "f64xadd", "f64xadd (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_60, "f64xadd", "f64xadd (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xadd_61, "f64xadd", "f64xadd (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xadd_62, "f64xadd", "f64xadd (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_63, "f64xadd", "f64xadd (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_64, "f64xadd", "f64xadd (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_65, "f64xadd", "f64xadd (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xadd_66, "f64xadd", "f64xadd (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xadd_67, "f64xadd", "f64xadd (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xadd_68, "f64xadd", "f64xadd (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_69, "f64xadd", "f64xadd (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xadd_70, "f64xadd", "f64xadd (_Float64, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xadd_71, "f64xadd", "f64xadd (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_72, "f64xadd", "f64xadd (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_73, "f64xadd", "f64xadd (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_74, "f64xadd", "f64xadd (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_75, "f64xadd", "f64xadd (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_76, "f64xadd", "f64xadd (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_77, "f64xadd", "f64xadd (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_78, "f64xadd", "f64xadd (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_79, "f64xadd", "f64xadd (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_80, "f64xadd", "f64xadd (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_81, "f64xadd", "f64xadd (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_82, "f64xadd", "f64xadd (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xadd_83, "f64xadd", "f64xadd (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xadd_84, "f64xadd", "f64xadd (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_85, "f64xadd", "f64xadd (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_86, "f64xadd", "f64xadd (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_87, "f64xadd", "f64xadd (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xadd_88, "f64xadd", "f64xadd (_Float64x, _Float16)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xadd_89, "f64xadd", "f64xadd (_Float64x, _Float32)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xadd_90, "f64xadd", "f64xadd (_Float64x, _Float32x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xadd_91, "f64xadd", "f64xadd (_Float64x, _Float64)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_92, "f64xadd", "f64xadd (_Float64x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xadd_93, "f64xadd", "f64xadd (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_94, "f64xadd", "f64xadd (_Float64x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_95, "f64xadd", "f64xadd (_Float64x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_96, "f64xadd", "f64xadd (_Float64x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_97, "f64xadd", "f64xadd (_Float64x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_98, "f64xadd", "f64xadd (_Float64x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_99, "f64xadd", "f64xadd (_Float64x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_100, "f64xadd", "f64xadd (_Float64x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_101, "f64xadd", "f64xadd (_Float64x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_102, "f64xadd", "f64xadd (_Float64x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_103, "f64xadd", "f64xadd (_Float64x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_104, "f64xadd", "f64xadd (_Float64x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xadd_105, "f64xadd", "f64xadd (_Float64x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xadd_106, "f64xadd", "f64xadd (_Float64x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_107, "f64xadd", "f64xadd (_Float64x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_108, "f64xadd", "f64xadd (_Float64x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_109, "f64xadd", "f64xadd (_Float64x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xadd_110, "f64xadd", "f64xadd (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xadd_111, "f64xadd", "f64xadd (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xadd_112, "f64xadd", "f64xadd (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xadd_113, "f64xadd", "f64xadd (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xadd_114, "f64xadd", "f64xadd (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_115, "f64xadd", "f64xadd (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_116, "f64xadd", "f64xadd (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_117, "f64xadd", "f64xadd (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_118, "f64xadd", "f64xadd (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_119, "f64xadd", "f64xadd (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_120, "f64xadd", "f64xadd (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_121, "f64xadd", "f64xadd (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_122, "f64xadd", "f64xadd (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_123, "f64xadd", "f64xadd (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_124, "f64xadd", "f64xadd (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_125, "f64xadd", "f64xadd (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_126, "f64xadd", "f64xadd (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xadd_127, "f64xadd", "f64xadd (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xadd_128, "f64xadd", "f64xadd (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_129, "f64xadd", "f64xadd (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_130, "f64xadd", "f64xadd (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_131, "f64xadd", "f64xadd (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_132, "f64xadd", "f64xadd (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_133, "f64xadd", "f64xadd (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_134, "f64xadd", "f64xadd (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_135, "f64xadd", "f64xadd (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_136, "f64xadd", "f64xadd (char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_137, "f64xadd", "f64xadd (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_138, "f64xadd", "f64xadd (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_139, "f64xadd", "f64xadd (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_140, "f64xadd", "f64xadd (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_141, "f64xadd", "f64xadd (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_142, "f64xadd", "f64xadd (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_143, "f64xadd", "f64xadd (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_144, "f64xadd", "f64xadd (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_145, "f64xadd", "f64xadd (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_146, "f64xadd", "f64xadd (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_147, "f64xadd", "f64xadd (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_148, "f64xadd", "f64xadd (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_149, "f64xadd", "f64xadd (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_150, "f64xadd", "f64xadd (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_151, "f64xadd", "f64xadd (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_152, "f64xadd", "f64xadd (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_153, "f64xadd", "f64xadd (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_154, "f64xadd", "f64xadd (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_155, "f64xadd", "f64xadd (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_156, "f64xadd", "f64xadd (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_157, "f64xadd", "f64xadd (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_158, "f64xadd", "f64xadd (signed char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_159, "f64xadd", "f64xadd (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_160, "f64xadd", "f64xadd (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_161, "f64xadd", "f64xadd (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_162, "f64xadd", "f64xadd (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_163, "f64xadd", "f64xadd (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_164, "f64xadd", "f64xadd (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_165, "f64xadd", "f64xadd (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_166, "f64xadd", "f64xadd (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_167, "f64xadd", "f64xadd (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_168, "f64xadd", "f64xadd (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_169, "f64xadd", "f64xadd (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_170, "f64xadd", "f64xadd (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_171, "f64xadd", "f64xadd (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_172, "f64xadd", "f64xadd (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_173, "f64xadd", "f64xadd (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_174, "f64xadd", "f64xadd (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_175, "f64xadd", "f64xadd (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_176, "f64xadd", "f64xadd (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_177, "f64xadd", "f64xadd (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_178, "f64xadd", "f64xadd (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_179, "f64xadd", "f64xadd (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_180, "f64xadd", "f64xadd (unsigned char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_181, "f64xadd", "f64xadd (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_182, "f64xadd", "f64xadd (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_183, "f64xadd", "f64xadd (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_184, "f64xadd", "f64xadd (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_185, "f64xadd", "f64xadd (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_186, "f64xadd", "f64xadd (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_187, "f64xadd", "f64xadd (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_188, "f64xadd", "f64xadd (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_189, "f64xadd", "f64xadd (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_190, "f64xadd", "f64xadd (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_191, "f64xadd", "f64xadd (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_192, "f64xadd", "f64xadd (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_193, "f64xadd", "f64xadd (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_194, "f64xadd", "f64xadd (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_195, "f64xadd", "f64xadd (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_196, "f64xadd", "f64xadd (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_197, "f64xadd", "f64xadd (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_198, "f64xadd", "f64xadd (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_199, "f64xadd", "f64xadd (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_200, "f64xadd", "f64xadd (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_201, "f64xadd", "f64xadd (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_202, "f64xadd", "f64xadd (short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_203, "f64xadd", "f64xadd (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_204, "f64xadd", "f64xadd (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_205, "f64xadd", "f64xadd (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_206, "f64xadd", "f64xadd (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_207, "f64xadd", "f64xadd (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_208, "f64xadd", "f64xadd (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_209, "f64xadd", "f64xadd (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_210, "f64xadd", "f64xadd (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_211, "f64xadd", "f64xadd (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_212, "f64xadd", "f64xadd (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_213, "f64xadd", "f64xadd (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_214, "f64xadd", "f64xadd (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_215, "f64xadd", "f64xadd (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_216, "f64xadd", "f64xadd (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_217, "f64xadd", "f64xadd (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_218, "f64xadd", "f64xadd (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_219, "f64xadd", "f64xadd (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_220, "f64xadd", "f64xadd (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_221, "f64xadd", "f64xadd (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_222, "f64xadd", "f64xadd (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_223, "f64xadd", "f64xadd (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_224, "f64xadd", "f64xadd (unsigned short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_225, "f64xadd", "f64xadd (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_226, "f64xadd", "f64xadd (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_227, "f64xadd", "f64xadd (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_228, "f64xadd", "f64xadd (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_229, "f64xadd", "f64xadd (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_230, "f64xadd", "f64xadd (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_231, "f64xadd", "f64xadd (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_232, "f64xadd", "f64xadd (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_233, "f64xadd", "f64xadd (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_234, "f64xadd", "f64xadd (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_235, "f64xadd", "f64xadd (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_236, "f64xadd", "f64xadd (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_237, "f64xadd", "f64xadd (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_238, "f64xadd", "f64xadd (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_239, "f64xadd", "f64xadd (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_240, "f64xadd", "f64xadd (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_241, "f64xadd", "f64xadd (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_242, "f64xadd", "f64xadd (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_243, "f64xadd", "f64xadd (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_244, "f64xadd", "f64xadd (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_245, "f64xadd", "f64xadd (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_246, "f64xadd", "f64xadd (int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_247, "f64xadd", "f64xadd (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_248, "f64xadd", "f64xadd (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_249, "f64xadd", "f64xadd (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_250, "f64xadd", "f64xadd (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_251, "f64xadd", "f64xadd (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_252, "f64xadd", "f64xadd (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_253, "f64xadd", "f64xadd (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_254, "f64xadd", "f64xadd (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_255, "f64xadd", "f64xadd (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_256, "f64xadd", "f64xadd (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_257, "f64xadd", "f64xadd (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_258, "f64xadd", "f64xadd (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_259, "f64xadd", "f64xadd (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_260, "f64xadd", "f64xadd (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_261, "f64xadd", "f64xadd (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_262, "f64xadd", "f64xadd (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_263, "f64xadd", "f64xadd (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_264, "f64xadd", "f64xadd (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_265, "f64xadd", "f64xadd (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_266, "f64xadd", "f64xadd (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_267, "f64xadd", "f64xadd (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_268, "f64xadd", "f64xadd (unsigned int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_269, "f64xadd", "f64xadd (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_270, "f64xadd", "f64xadd (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_271, "f64xadd", "f64xadd (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_272, "f64xadd", "f64xadd (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_273, "f64xadd", "f64xadd (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_274, "f64xadd", "f64xadd (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_275, "f64xadd", "f64xadd (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_276, "f64xadd", "f64xadd (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_277, "f64xadd", "f64xadd (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_278, "f64xadd", "f64xadd (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_279, "f64xadd", "f64xadd (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_280, "f64xadd", "f64xadd (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_281, "f64xadd", "f64xadd (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_282, "f64xadd", "f64xadd (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_283, "f64xadd", "f64xadd (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_284, "f64xadd", "f64xadd (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_285, "f64xadd", "f64xadd (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_286, "f64xadd", "f64xadd (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_287, "f64xadd", "f64xadd (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_288, "f64xadd", "f64xadd (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_289, "f64xadd", "f64xadd (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_290, "f64xadd", "f64xadd (long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_291, "f64xadd", "f64xadd (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_292, "f64xadd", "f64xadd (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_293, "f64xadd", "f64xadd (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_294, "f64xadd", "f64xadd (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_295, "f64xadd", "f64xadd (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_296, "f64xadd", "f64xadd (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_297, "f64xadd", "f64xadd (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_298, "f64xadd", "f64xadd (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_299, "f64xadd", "f64xadd (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_300, "f64xadd", "f64xadd (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_301, "f64xadd", "f64xadd (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_302, "f64xadd", "f64xadd (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_303, "f64xadd", "f64xadd (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_304, "f64xadd", "f64xadd (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_305, "f64xadd", "f64xadd (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_306, "f64xadd", "f64xadd (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_307, "f64xadd", "f64xadd (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_308, "f64xadd", "f64xadd (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_309, "f64xadd", "f64xadd (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_310, "f64xadd", "f64xadd (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_311, "f64xadd", "f64xadd (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_312, "f64xadd", "f64xadd (unsigned long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_313, "f64xadd", "f64xadd (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_314, "f64xadd", "f64xadd (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_315, "f64xadd", "f64xadd (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_316, "f64xadd", "f64xadd (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_317, "f64xadd", "f64xadd (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_318, "f64xadd", "f64xadd (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_319, "f64xadd", "f64xadd (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_320, "f64xadd", "f64xadd (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_321, "f64xadd", "f64xadd (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_322, "f64xadd", "f64xadd (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_323, "f64xadd", "f64xadd (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_324, "f64xadd", "f64xadd (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_325, "f64xadd", "f64xadd (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_326, "f64xadd", "f64xadd (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_327, "f64xadd", "f64xadd (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_328, "f64xadd", "f64xadd (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_329, "f64xadd", "f64xadd (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_330, "f64xadd", "f64xadd (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_331, "f64xadd", "f64xadd (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_332, "f64xadd", "f64xadd (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_333, "f64xadd", "f64xadd (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_334, "f64xadd", "f64xadd (long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_335, "f64xadd", "f64xadd (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_336, "f64xadd", "f64xadd (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_337, "f64xadd", "f64xadd (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_338, "f64xadd", "f64xadd (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_339, "f64xadd", "f64xadd (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_340, "f64xadd", "f64xadd (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_341, "f64xadd", "f64xadd (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_342, "f64xadd", "f64xadd (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_343, "f64xadd", "f64xadd (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_344, "f64xadd", "f64xadd (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_345, "f64xadd", "f64xadd (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_346, "f64xadd", "f64xadd (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_347, "f64xadd", "f64xadd (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_348, "f64xadd", "f64xadd (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_349, "f64xadd", "f64xadd (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_350, "f64xadd", "f64xadd (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_351, "f64xadd", "f64xadd (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_352, "f64xadd", "f64xadd (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_353, "f64xadd", "f64xadd (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_354, "f64xadd", "f64xadd (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_355, "f64xadd", "f64xadd (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_356, "f64xadd", "f64xadd (unsigned long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_357, "f64xadd", "f64xadd (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_358, "f64xadd", "f64xadd (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_359, "f64xadd", "f64xadd (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_360, "f64xadd", "f64xadd (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_361, "f64xadd", "f64xadd (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_362, "f64xadd", "f64xadd (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_363, "f64xadd", "f64xadd (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_364, "f64xadd", "f64xadd (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_365, "f64xadd", "f64xadd (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_366, "f64xadd", "f64xadd (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_367, "f64xadd", "f64xadd (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_368, "f64xadd", "f64xadd (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_369, "f64xadd", "f64xadd (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_370, "f64xadd", "f64xadd (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_371, "f64xadd", "f64xadd (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_372, "f64xadd", "f64xadd (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_373, "f64xadd", "f64xadd (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xadd_374, "f64xadd", "f64xadd (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xadd_375, "f64xadd", "f64xadd (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xadd_376, "f64xadd", "f64xadd (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xadd_377, "f64xadd", "f64xadd (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xadd_378, "f64xadd", "f64xadd (__int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xadd_379, "f64xadd", "f64xadd (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_380, "f64xadd", "f64xadd (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_381, "f64xadd", "f64xadd (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_382, "f64xadd", "f64xadd (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_383, "f64xadd", "f64xadd (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_384, "f64xadd", "f64xadd (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_385, "f64xadd", "f64xadd (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_386, "f64xadd", "f64xadd (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_387, "f64xadd", "f64xadd (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_388, "f64xadd", "f64xadd (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_389, "f64xadd", "f64xadd (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_390, "f64xadd", "f64xadd (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_391, "f64xadd", "f64xadd (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_392, "f64xadd", "f64xadd (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_393, "f64xadd", "f64xadd (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_394, "f64xadd", "f64xadd (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_395, "f64xadd", "f64xadd (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xadd_396, "f64xadd", "f64xadd (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xadd_397, "f64xadd", "f64xadd (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xadd_398, "f64xadd", "f64xadd (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xadd_399, "f64xadd", "f64xadd (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xadd_400, "f64xadd", "f64xadd (unsigned __int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xadd_401, "f64xadd", "f64xadd (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_402, "f64xadd", "f64xadd (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_403, "f64xadd", "f64xadd (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_404, "f64xadd", "f64xadd (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_405, "f64xadd", "f64xadd (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_406, "f64xadd", "f64xadd (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_407, "f64xadd", "f64xadd (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_408, "f64xadd", "f64xadd (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_409, "f64xadd", "f64xadd (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_410, "f64xadd", "f64xadd (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_411, "f64xadd", "f64xadd (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_412, "f64xadd", "f64xadd (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_413, "f64xadd", "f64xadd (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_414, "f64xadd", "f64xadd (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_415, "f64xadd", "f64xadd (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_416, "f64xadd", "f64xadd (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_417, "f64xadd", "f64xadd (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_418, "f64xadd", "f64xadd (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_419, "f64xadd", "f64xadd (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_420, "f64xadd", "f64xadd (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_421, "f64xadd", "f64xadd (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_422, "f64xadd", "f64xadd (enum e, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_423, "f64xadd", "f64xadd (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_424, "f64xadd", "f64xadd (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_425, "f64xadd", "f64xadd (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_426, "f64xadd", "f64xadd (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_427, "f64xadd", "f64xadd (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_428, "f64xadd", "f64xadd (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_429, "f64xadd", "f64xadd (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_430, "f64xadd", "f64xadd (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_431, "f64xadd", "f64xadd (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_432, "f64xadd", "f64xadd (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_433, "f64xadd", "f64xadd (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_434, "f64xadd", "f64xadd (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_435, "f64xadd", "f64xadd (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_436, "f64xadd", "f64xadd (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_437, "f64xadd", "f64xadd (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_438, "f64xadd", "f64xadd (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_439, "f64xadd", "f64xadd (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_440, "f64xadd", "f64xadd (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_441, "f64xadd", "f64xadd (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_442, "f64xadd", "f64xadd (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_443, "f64xadd", "f64xadd (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_444, "f64xadd", "f64xadd (_Bool, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_445, "f64xadd", "f64xadd (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_446, "f64xadd", "f64xadd (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_447, "f64xadd", "f64xadd (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_448, "f64xadd", "f64xadd (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_449, "f64xadd", "f64xadd (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_450, "f64xadd", "f64xadd (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_451, "f64xadd", "f64xadd (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_452, "f64xadd", "f64xadd (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_453, "f64xadd", "f64xadd (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_454, "f64xadd", "f64xadd (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_455, "f64xadd", "f64xadd (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_456, "f64xadd", "f64xadd (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_457, "f64xadd", "f64xadd (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_458, "f64xadd", "f64xadd (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_459, "f64xadd", "f64xadd (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_460, "f64xadd", "f64xadd (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_461, "f64xadd", "f64xadd (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xadd_462, "f64xadd", "f64xadd (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xadd_463, "f64xadd", "f64xadd (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xadd_464, "f64xadd", "f64xadd (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xadd_465, "f64xadd", "f64xadd (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xadd_466, "f64xadd", "f64xadd (bit_field, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xadd_467, "f64xadd", "f64xadd (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_468, "f64xadd", "f64xadd (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_469, "f64xadd", "f64xadd (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_470, "f64xadd", "f64xadd (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_471, "f64xadd", "f64xadd (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_472, "f64xadd", "f64xadd (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_473, "f64xadd", "f64xadd (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_474, "f64xadd", "f64xadd (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_475, "f64xadd", "f64xadd (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_476, "f64xadd", "f64xadd (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_477, "f64xadd", "f64xadd (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_478, "f64xadd", "f64xadd (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_479, "f64xadd", "f64xadd (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xadd_480, "f64xadd", "f64xadd (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_481, "f64xadd", "f64xadd (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_482, "f64xadd", "f64xadd (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xadd_483, "f64xadd", "f64xadd (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
#endif
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
