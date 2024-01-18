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
(f64xsubf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64xsub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_0 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xsub_1 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xsub_2 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xsub_3 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xsub_4 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xsub_5 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_6 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_7 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_8 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_9 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_10 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_11 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_12 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_13 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_14 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_15 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_16 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xsub_17 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xsub_18 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_19 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_20 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_21 (void)
{
  extern typeof (f64xsub (vol_var__Float16, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xsub_22 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_23 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xsub_24 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xsub_25 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xsub_26 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xsub_27 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_28 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_29 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_30 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_31 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_32 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_33 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_34 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_35 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_36 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_37 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_38 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xsub_39 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xsub_40 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_41 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_42 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_43 (void)
{
  extern typeof (f64xsub (vol_var__Float32, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xsub_44 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xsub_45 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_46 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xsub_47 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xsub_48 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xsub_49 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_50 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_51 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_52 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_53 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_54 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_55 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_56 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_57 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_58 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_59 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_60 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xsub_61 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xsub_62 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_63 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_64 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_65 (void)
{
  extern typeof (f64xsub (vol_var__Float32x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xsub_66 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xsub_67 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xsub_68 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_69 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xsub_70 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xsub_71 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_72 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_73 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_74 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_75 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_76 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_77 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_78 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_79 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_80 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_81 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_82 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xsub_83 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xsub_84 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_85 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_86 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_87 (void)
{
  extern typeof (f64xsub (vol_var__Float64, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xsub_88 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xsub_89 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xsub_90 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xsub_91 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_92 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xsub_93 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_94 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_95 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_96 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_97 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_98 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_99 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_100 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_101 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_102 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_103 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_104 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xsub_105 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xsub_106 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_107 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_108 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_109 (void)
{
  extern typeof (f64xsub (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xsub_110 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xsub_111 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xsub_112 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xsub_113 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xsub_114 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_115 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_116 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_117 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_118 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_119 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_120 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_121 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_122 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_123 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_124 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_125 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_126 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xsub_127 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xsub_128 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_129 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_130 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_131 (void)
{
  extern typeof (f64xsub (vol_var__Float128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_132 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_133 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_134 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_135 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_136 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_137 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_138 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_139 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_140 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_141 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_142 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_143 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_144 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_145 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_146 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_147 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_148 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_149 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_150 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_151 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_152 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_153 (void)
{
  extern typeof (f64xsub (vol_var_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_154 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_155 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_156 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_157 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_158 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_159 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_160 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_161 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_162 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_163 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_164 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_165 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_166 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_167 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_168 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_169 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_170 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_171 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_172 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_173 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_174 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_175 (void)
{
  extern typeof (f64xsub (vol_var_signed_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_176 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_177 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_178 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_179 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_180 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_181 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_182 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_183 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_184 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_185 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_186 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_187 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_188 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_189 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_190 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_191 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_192 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_193 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_194 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_195 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_196 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_197 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_198 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_199 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_200 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_201 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_202 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_203 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_204 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_205 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_206 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_207 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_208 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_209 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_210 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_211 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_212 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_213 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_214 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_215 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_216 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_217 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_218 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_219 (void)
{
  extern typeof (f64xsub (vol_var_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_220 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_221 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_222 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_223 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_224 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_225 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_226 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_227 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_228 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_229 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_230 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_231 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_232 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_233 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_234 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_235 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_236 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_237 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_238 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_239 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_240 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_241 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_242 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_243 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_244 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_245 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_246 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_247 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_248 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_249 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_250 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_251 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_252 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_253 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_254 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_255 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_256 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_257 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_258 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_259 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_260 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_261 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_262 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_263 (void)
{
  extern typeof (f64xsub (vol_var_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_264 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_265 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_266 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_267 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_268 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_269 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_270 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_271 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_272 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_273 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_274 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_275 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_276 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_277 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_278 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_279 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_280 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_281 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_282 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_283 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_284 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_285 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_286 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_287 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_288 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_289 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_290 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_291 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_292 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_293 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_294 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_295 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_296 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_297 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_298 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_299 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_300 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_301 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_302 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_303 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_304 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_305 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_306 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_307 (void)
{
  extern typeof (f64xsub (vol_var_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_308 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_309 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_310 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_311 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_312 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_313 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_314 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_315 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_316 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_317 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_318 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_319 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_320 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_321 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_322 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_323 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_324 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_325 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_326 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_327 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_328 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_329 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_330 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_331 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_332 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_333 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_334 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_335 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_336 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_337 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_338 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_339 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_340 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_341 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_342 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_343 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_344 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_345 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_346 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_347 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_348 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_349 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_350 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_351 (void)
{
  extern typeof (f64xsub (vol_var_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_352 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_353 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_354 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_355 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_356 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_357 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_358 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_359 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_360 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_361 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_362 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_363 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_364 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_365 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_366 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_367 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_368 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_369 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_370 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_371 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_372 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_373 (void)
{
  extern typeof (f64xsub (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xsub_374 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xsub_375 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xsub_376 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xsub_377 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xsub_378 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xsub_379 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_380 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_381 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_382 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_383 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_384 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_385 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_386 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_387 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_388 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_389 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_390 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_391 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_392 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_393 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_394 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_395 (void)
{
  extern typeof (f64xsub (vol_var___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xsub_396 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xsub_397 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xsub_398 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xsub_399 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xsub_400 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xsub_401 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_402 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_403 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_404 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_405 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_406 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_407 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_408 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_409 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_410 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_411 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_412 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_413 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_414 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_415 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_416 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_417 (void)
{
  extern typeof (f64xsub (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_418 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_419 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_420 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_421 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_422 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_423 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_424 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_425 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_426 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_427 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_428 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_429 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_430 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_431 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_432 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_433 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_434 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_435 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_436 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_437 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_438 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_439 (void)
{
  extern typeof (f64xsub (vol_var_enum_e, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_440 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_441 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_442 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_443 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_444 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_445 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_446 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_447 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_448 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_449 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_450 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_451 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_452 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_453 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_454 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_455 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_456 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_457 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_458 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_459 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_460 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_461 (void)
{
  extern typeof (f64xsub (vol_var__Bool, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xsub_462 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xsub_463 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xsub_464 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xsub_465 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xsub_466 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xsub_467 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_468 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_469 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_470 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_471 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_472 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_473 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_474 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_475 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_476 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_477 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_478 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_479 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xsub_480 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_481 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_482 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xsub_483 (void)
{
  extern typeof (f64xsub (vol_var_bit_field, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xsub (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_0, "f64xsub", "f64xsub (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xsub_1, "f64xsub", "f64xsub (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xsub_2, "f64xsub", "f64xsub (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xsub_3, "f64xsub", "f64xsub (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xsub_4, "f64xsub", "f64xsub (_Float16, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xsub_5, "f64xsub", "f64xsub (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_6, "f64xsub", "f64xsub (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_7, "f64xsub", "f64xsub (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_8, "f64xsub", "f64xsub (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_9, "f64xsub", "f64xsub (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_10, "f64xsub", "f64xsub (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_11, "f64xsub", "f64xsub (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_12, "f64xsub", "f64xsub (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_13, "f64xsub", "f64xsub (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_14, "f64xsub", "f64xsub (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_15, "f64xsub", "f64xsub (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_16, "f64xsub", "f64xsub (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xsub_17, "f64xsub", "f64xsub (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xsub_18, "f64xsub", "f64xsub (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_19, "f64xsub", "f64xsub (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_20, "f64xsub", "f64xsub (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_21, "f64xsub", "f64xsub (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xsub_22, "f64xsub", "f64xsub (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_23, "f64xsub", "f64xsub (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xsub_24, "f64xsub", "f64xsub (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xsub_25, "f64xsub", "f64xsub (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xsub_26, "f64xsub", "f64xsub (_Float32, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xsub_27, "f64xsub", "f64xsub (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_28, "f64xsub", "f64xsub (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_29, "f64xsub", "f64xsub (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_30, "f64xsub", "f64xsub (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_31, "f64xsub", "f64xsub (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_32, "f64xsub", "f64xsub (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_33, "f64xsub", "f64xsub (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_34, "f64xsub", "f64xsub (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_35, "f64xsub", "f64xsub (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_36, "f64xsub", "f64xsub (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_37, "f64xsub", "f64xsub (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_38, "f64xsub", "f64xsub (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xsub_39, "f64xsub", "f64xsub (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xsub_40, "f64xsub", "f64xsub (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_41, "f64xsub", "f64xsub (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_42, "f64xsub", "f64xsub (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_43, "f64xsub", "f64xsub (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xsub_44, "f64xsub", "f64xsub (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xsub_45, "f64xsub", "f64xsub (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_46, "f64xsub", "f64xsub (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xsub_47, "f64xsub", "f64xsub (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xsub_48, "f64xsub", "f64xsub (_Float32x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xsub_49, "f64xsub", "f64xsub (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_50, "f64xsub", "f64xsub (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_51, "f64xsub", "f64xsub (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_52, "f64xsub", "f64xsub (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_53, "f64xsub", "f64xsub (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_54, "f64xsub", "f64xsub (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_55, "f64xsub", "f64xsub (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_56, "f64xsub", "f64xsub (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_57, "f64xsub", "f64xsub (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_58, "f64xsub", "f64xsub (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_59, "f64xsub", "f64xsub (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_60, "f64xsub", "f64xsub (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xsub_61, "f64xsub", "f64xsub (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xsub_62, "f64xsub", "f64xsub (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_63, "f64xsub", "f64xsub (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_64, "f64xsub", "f64xsub (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_65, "f64xsub", "f64xsub (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xsub_66, "f64xsub", "f64xsub (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xsub_67, "f64xsub", "f64xsub (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xsub_68, "f64xsub", "f64xsub (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_69, "f64xsub", "f64xsub (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xsub_70, "f64xsub", "f64xsub (_Float64, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xsub_71, "f64xsub", "f64xsub (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_72, "f64xsub", "f64xsub (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_73, "f64xsub", "f64xsub (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_74, "f64xsub", "f64xsub (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_75, "f64xsub", "f64xsub (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_76, "f64xsub", "f64xsub (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_77, "f64xsub", "f64xsub (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_78, "f64xsub", "f64xsub (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_79, "f64xsub", "f64xsub (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_80, "f64xsub", "f64xsub (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_81, "f64xsub", "f64xsub (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_82, "f64xsub", "f64xsub (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xsub_83, "f64xsub", "f64xsub (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xsub_84, "f64xsub", "f64xsub (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_85, "f64xsub", "f64xsub (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_86, "f64xsub", "f64xsub (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_87, "f64xsub", "f64xsub (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xsub_88, "f64xsub", "f64xsub (_Float64x, _Float16)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xsub_89, "f64xsub", "f64xsub (_Float64x, _Float32)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xsub_90, "f64xsub", "f64xsub (_Float64x, _Float32x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xsub_91, "f64xsub", "f64xsub (_Float64x, _Float64)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_92, "f64xsub", "f64xsub (_Float64x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xsub_93, "f64xsub", "f64xsub (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_94, "f64xsub", "f64xsub (_Float64x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_95, "f64xsub", "f64xsub (_Float64x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_96, "f64xsub", "f64xsub (_Float64x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_97, "f64xsub", "f64xsub (_Float64x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_98, "f64xsub", "f64xsub (_Float64x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_99, "f64xsub", "f64xsub (_Float64x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_100, "f64xsub", "f64xsub (_Float64x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_101, "f64xsub", "f64xsub (_Float64x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_102, "f64xsub", "f64xsub (_Float64x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_103, "f64xsub", "f64xsub (_Float64x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_104, "f64xsub", "f64xsub (_Float64x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xsub_105, "f64xsub", "f64xsub (_Float64x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xsub_106, "f64xsub", "f64xsub (_Float64x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_107, "f64xsub", "f64xsub (_Float64x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_108, "f64xsub", "f64xsub (_Float64x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_109, "f64xsub", "f64xsub (_Float64x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xsub_110, "f64xsub", "f64xsub (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xsub_111, "f64xsub", "f64xsub (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xsub_112, "f64xsub", "f64xsub (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xsub_113, "f64xsub", "f64xsub (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xsub_114, "f64xsub", "f64xsub (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_115, "f64xsub", "f64xsub (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_116, "f64xsub", "f64xsub (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_117, "f64xsub", "f64xsub (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_118, "f64xsub", "f64xsub (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_119, "f64xsub", "f64xsub (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_120, "f64xsub", "f64xsub (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_121, "f64xsub", "f64xsub (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_122, "f64xsub", "f64xsub (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_123, "f64xsub", "f64xsub (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_124, "f64xsub", "f64xsub (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_125, "f64xsub", "f64xsub (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_126, "f64xsub", "f64xsub (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xsub_127, "f64xsub", "f64xsub (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xsub_128, "f64xsub", "f64xsub (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_129, "f64xsub", "f64xsub (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_130, "f64xsub", "f64xsub (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_131, "f64xsub", "f64xsub (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_132, "f64xsub", "f64xsub (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_133, "f64xsub", "f64xsub (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_134, "f64xsub", "f64xsub (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_135, "f64xsub", "f64xsub (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_136, "f64xsub", "f64xsub (char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_137, "f64xsub", "f64xsub (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_138, "f64xsub", "f64xsub (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_139, "f64xsub", "f64xsub (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_140, "f64xsub", "f64xsub (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_141, "f64xsub", "f64xsub (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_142, "f64xsub", "f64xsub (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_143, "f64xsub", "f64xsub (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_144, "f64xsub", "f64xsub (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_145, "f64xsub", "f64xsub (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_146, "f64xsub", "f64xsub (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_147, "f64xsub", "f64xsub (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_148, "f64xsub", "f64xsub (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_149, "f64xsub", "f64xsub (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_150, "f64xsub", "f64xsub (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_151, "f64xsub", "f64xsub (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_152, "f64xsub", "f64xsub (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_153, "f64xsub", "f64xsub (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_154, "f64xsub", "f64xsub (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_155, "f64xsub", "f64xsub (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_156, "f64xsub", "f64xsub (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_157, "f64xsub", "f64xsub (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_158, "f64xsub", "f64xsub (signed char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_159, "f64xsub", "f64xsub (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_160, "f64xsub", "f64xsub (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_161, "f64xsub", "f64xsub (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_162, "f64xsub", "f64xsub (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_163, "f64xsub", "f64xsub (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_164, "f64xsub", "f64xsub (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_165, "f64xsub", "f64xsub (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_166, "f64xsub", "f64xsub (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_167, "f64xsub", "f64xsub (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_168, "f64xsub", "f64xsub (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_169, "f64xsub", "f64xsub (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_170, "f64xsub", "f64xsub (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_171, "f64xsub", "f64xsub (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_172, "f64xsub", "f64xsub (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_173, "f64xsub", "f64xsub (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_174, "f64xsub", "f64xsub (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_175, "f64xsub", "f64xsub (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_176, "f64xsub", "f64xsub (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_177, "f64xsub", "f64xsub (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_178, "f64xsub", "f64xsub (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_179, "f64xsub", "f64xsub (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_180, "f64xsub", "f64xsub (unsigned char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_181, "f64xsub", "f64xsub (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_182, "f64xsub", "f64xsub (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_183, "f64xsub", "f64xsub (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_184, "f64xsub", "f64xsub (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_185, "f64xsub", "f64xsub (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_186, "f64xsub", "f64xsub (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_187, "f64xsub", "f64xsub (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_188, "f64xsub", "f64xsub (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_189, "f64xsub", "f64xsub (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_190, "f64xsub", "f64xsub (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_191, "f64xsub", "f64xsub (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_192, "f64xsub", "f64xsub (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_193, "f64xsub", "f64xsub (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_194, "f64xsub", "f64xsub (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_195, "f64xsub", "f64xsub (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_196, "f64xsub", "f64xsub (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_197, "f64xsub", "f64xsub (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_198, "f64xsub", "f64xsub (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_199, "f64xsub", "f64xsub (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_200, "f64xsub", "f64xsub (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_201, "f64xsub", "f64xsub (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_202, "f64xsub", "f64xsub (short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_203, "f64xsub", "f64xsub (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_204, "f64xsub", "f64xsub (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_205, "f64xsub", "f64xsub (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_206, "f64xsub", "f64xsub (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_207, "f64xsub", "f64xsub (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_208, "f64xsub", "f64xsub (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_209, "f64xsub", "f64xsub (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_210, "f64xsub", "f64xsub (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_211, "f64xsub", "f64xsub (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_212, "f64xsub", "f64xsub (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_213, "f64xsub", "f64xsub (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_214, "f64xsub", "f64xsub (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_215, "f64xsub", "f64xsub (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_216, "f64xsub", "f64xsub (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_217, "f64xsub", "f64xsub (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_218, "f64xsub", "f64xsub (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_219, "f64xsub", "f64xsub (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_220, "f64xsub", "f64xsub (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_221, "f64xsub", "f64xsub (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_222, "f64xsub", "f64xsub (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_223, "f64xsub", "f64xsub (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_224, "f64xsub", "f64xsub (unsigned short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_225, "f64xsub", "f64xsub (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_226, "f64xsub", "f64xsub (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_227, "f64xsub", "f64xsub (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_228, "f64xsub", "f64xsub (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_229, "f64xsub", "f64xsub (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_230, "f64xsub", "f64xsub (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_231, "f64xsub", "f64xsub (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_232, "f64xsub", "f64xsub (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_233, "f64xsub", "f64xsub (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_234, "f64xsub", "f64xsub (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_235, "f64xsub", "f64xsub (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_236, "f64xsub", "f64xsub (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_237, "f64xsub", "f64xsub (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_238, "f64xsub", "f64xsub (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_239, "f64xsub", "f64xsub (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_240, "f64xsub", "f64xsub (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_241, "f64xsub", "f64xsub (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_242, "f64xsub", "f64xsub (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_243, "f64xsub", "f64xsub (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_244, "f64xsub", "f64xsub (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_245, "f64xsub", "f64xsub (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_246, "f64xsub", "f64xsub (int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_247, "f64xsub", "f64xsub (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_248, "f64xsub", "f64xsub (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_249, "f64xsub", "f64xsub (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_250, "f64xsub", "f64xsub (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_251, "f64xsub", "f64xsub (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_252, "f64xsub", "f64xsub (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_253, "f64xsub", "f64xsub (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_254, "f64xsub", "f64xsub (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_255, "f64xsub", "f64xsub (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_256, "f64xsub", "f64xsub (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_257, "f64xsub", "f64xsub (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_258, "f64xsub", "f64xsub (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_259, "f64xsub", "f64xsub (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_260, "f64xsub", "f64xsub (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_261, "f64xsub", "f64xsub (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_262, "f64xsub", "f64xsub (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_263, "f64xsub", "f64xsub (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_264, "f64xsub", "f64xsub (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_265, "f64xsub", "f64xsub (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_266, "f64xsub", "f64xsub (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_267, "f64xsub", "f64xsub (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_268, "f64xsub", "f64xsub (unsigned int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_269, "f64xsub", "f64xsub (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_270, "f64xsub", "f64xsub (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_271, "f64xsub", "f64xsub (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_272, "f64xsub", "f64xsub (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_273, "f64xsub", "f64xsub (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_274, "f64xsub", "f64xsub (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_275, "f64xsub", "f64xsub (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_276, "f64xsub", "f64xsub (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_277, "f64xsub", "f64xsub (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_278, "f64xsub", "f64xsub (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_279, "f64xsub", "f64xsub (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_280, "f64xsub", "f64xsub (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_281, "f64xsub", "f64xsub (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_282, "f64xsub", "f64xsub (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_283, "f64xsub", "f64xsub (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_284, "f64xsub", "f64xsub (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_285, "f64xsub", "f64xsub (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_286, "f64xsub", "f64xsub (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_287, "f64xsub", "f64xsub (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_288, "f64xsub", "f64xsub (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_289, "f64xsub", "f64xsub (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_290, "f64xsub", "f64xsub (long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_291, "f64xsub", "f64xsub (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_292, "f64xsub", "f64xsub (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_293, "f64xsub", "f64xsub (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_294, "f64xsub", "f64xsub (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_295, "f64xsub", "f64xsub (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_296, "f64xsub", "f64xsub (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_297, "f64xsub", "f64xsub (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_298, "f64xsub", "f64xsub (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_299, "f64xsub", "f64xsub (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_300, "f64xsub", "f64xsub (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_301, "f64xsub", "f64xsub (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_302, "f64xsub", "f64xsub (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_303, "f64xsub", "f64xsub (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_304, "f64xsub", "f64xsub (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_305, "f64xsub", "f64xsub (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_306, "f64xsub", "f64xsub (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_307, "f64xsub", "f64xsub (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_308, "f64xsub", "f64xsub (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_309, "f64xsub", "f64xsub (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_310, "f64xsub", "f64xsub (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_311, "f64xsub", "f64xsub (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_312, "f64xsub", "f64xsub (unsigned long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_313, "f64xsub", "f64xsub (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_314, "f64xsub", "f64xsub (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_315, "f64xsub", "f64xsub (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_316, "f64xsub", "f64xsub (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_317, "f64xsub", "f64xsub (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_318, "f64xsub", "f64xsub (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_319, "f64xsub", "f64xsub (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_320, "f64xsub", "f64xsub (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_321, "f64xsub", "f64xsub (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_322, "f64xsub", "f64xsub (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_323, "f64xsub", "f64xsub (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_324, "f64xsub", "f64xsub (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_325, "f64xsub", "f64xsub (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_326, "f64xsub", "f64xsub (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_327, "f64xsub", "f64xsub (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_328, "f64xsub", "f64xsub (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_329, "f64xsub", "f64xsub (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_330, "f64xsub", "f64xsub (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_331, "f64xsub", "f64xsub (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_332, "f64xsub", "f64xsub (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_333, "f64xsub", "f64xsub (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_334, "f64xsub", "f64xsub (long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_335, "f64xsub", "f64xsub (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_336, "f64xsub", "f64xsub (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_337, "f64xsub", "f64xsub (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_338, "f64xsub", "f64xsub (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_339, "f64xsub", "f64xsub (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_340, "f64xsub", "f64xsub (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_341, "f64xsub", "f64xsub (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_342, "f64xsub", "f64xsub (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_343, "f64xsub", "f64xsub (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_344, "f64xsub", "f64xsub (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_345, "f64xsub", "f64xsub (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_346, "f64xsub", "f64xsub (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_347, "f64xsub", "f64xsub (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_348, "f64xsub", "f64xsub (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_349, "f64xsub", "f64xsub (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_350, "f64xsub", "f64xsub (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_351, "f64xsub", "f64xsub (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_352, "f64xsub", "f64xsub (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_353, "f64xsub", "f64xsub (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_354, "f64xsub", "f64xsub (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_355, "f64xsub", "f64xsub (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_356, "f64xsub", "f64xsub (unsigned long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_357, "f64xsub", "f64xsub (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_358, "f64xsub", "f64xsub (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_359, "f64xsub", "f64xsub (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_360, "f64xsub", "f64xsub (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_361, "f64xsub", "f64xsub (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_362, "f64xsub", "f64xsub (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_363, "f64xsub", "f64xsub (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_364, "f64xsub", "f64xsub (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_365, "f64xsub", "f64xsub (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_366, "f64xsub", "f64xsub (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_367, "f64xsub", "f64xsub (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_368, "f64xsub", "f64xsub (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_369, "f64xsub", "f64xsub (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_370, "f64xsub", "f64xsub (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_371, "f64xsub", "f64xsub (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_372, "f64xsub", "f64xsub (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_373, "f64xsub", "f64xsub (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xsub_374, "f64xsub", "f64xsub (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xsub_375, "f64xsub", "f64xsub (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xsub_376, "f64xsub", "f64xsub (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xsub_377, "f64xsub", "f64xsub (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xsub_378, "f64xsub", "f64xsub (__int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xsub_379, "f64xsub", "f64xsub (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_380, "f64xsub", "f64xsub (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_381, "f64xsub", "f64xsub (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_382, "f64xsub", "f64xsub (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_383, "f64xsub", "f64xsub (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_384, "f64xsub", "f64xsub (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_385, "f64xsub", "f64xsub (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_386, "f64xsub", "f64xsub (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_387, "f64xsub", "f64xsub (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_388, "f64xsub", "f64xsub (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_389, "f64xsub", "f64xsub (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_390, "f64xsub", "f64xsub (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_391, "f64xsub", "f64xsub (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_392, "f64xsub", "f64xsub (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_393, "f64xsub", "f64xsub (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_394, "f64xsub", "f64xsub (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_395, "f64xsub", "f64xsub (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xsub_396, "f64xsub", "f64xsub (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xsub_397, "f64xsub", "f64xsub (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xsub_398, "f64xsub", "f64xsub (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xsub_399, "f64xsub", "f64xsub (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xsub_400, "f64xsub", "f64xsub (unsigned __int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xsub_401, "f64xsub", "f64xsub (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_402, "f64xsub", "f64xsub (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_403, "f64xsub", "f64xsub (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_404, "f64xsub", "f64xsub (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_405, "f64xsub", "f64xsub (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_406, "f64xsub", "f64xsub (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_407, "f64xsub", "f64xsub (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_408, "f64xsub", "f64xsub (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_409, "f64xsub", "f64xsub (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_410, "f64xsub", "f64xsub (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_411, "f64xsub", "f64xsub (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_412, "f64xsub", "f64xsub (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_413, "f64xsub", "f64xsub (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_414, "f64xsub", "f64xsub (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_415, "f64xsub", "f64xsub (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_416, "f64xsub", "f64xsub (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_417, "f64xsub", "f64xsub (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_418, "f64xsub", "f64xsub (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_419, "f64xsub", "f64xsub (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_420, "f64xsub", "f64xsub (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_421, "f64xsub", "f64xsub (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_422, "f64xsub", "f64xsub (enum e, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_423, "f64xsub", "f64xsub (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_424, "f64xsub", "f64xsub (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_425, "f64xsub", "f64xsub (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_426, "f64xsub", "f64xsub (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_427, "f64xsub", "f64xsub (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_428, "f64xsub", "f64xsub (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_429, "f64xsub", "f64xsub (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_430, "f64xsub", "f64xsub (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_431, "f64xsub", "f64xsub (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_432, "f64xsub", "f64xsub (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_433, "f64xsub", "f64xsub (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_434, "f64xsub", "f64xsub (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_435, "f64xsub", "f64xsub (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_436, "f64xsub", "f64xsub (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_437, "f64xsub", "f64xsub (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_438, "f64xsub", "f64xsub (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_439, "f64xsub", "f64xsub (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_440, "f64xsub", "f64xsub (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_441, "f64xsub", "f64xsub (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_442, "f64xsub", "f64xsub (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_443, "f64xsub", "f64xsub (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_444, "f64xsub", "f64xsub (_Bool, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_445, "f64xsub", "f64xsub (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_446, "f64xsub", "f64xsub (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_447, "f64xsub", "f64xsub (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_448, "f64xsub", "f64xsub (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_449, "f64xsub", "f64xsub (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_450, "f64xsub", "f64xsub (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_451, "f64xsub", "f64xsub (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_452, "f64xsub", "f64xsub (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_453, "f64xsub", "f64xsub (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_454, "f64xsub", "f64xsub (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_455, "f64xsub", "f64xsub (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_456, "f64xsub", "f64xsub (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_457, "f64xsub", "f64xsub (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_458, "f64xsub", "f64xsub (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_459, "f64xsub", "f64xsub (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_460, "f64xsub", "f64xsub (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_461, "f64xsub", "f64xsub (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xsub_462, "f64xsub", "f64xsub (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xsub_463, "f64xsub", "f64xsub (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xsub_464, "f64xsub", "f64xsub (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xsub_465, "f64xsub", "f64xsub (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xsub_466, "f64xsub", "f64xsub (bit_field, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xsub_467, "f64xsub", "f64xsub (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_468, "f64xsub", "f64xsub (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_469, "f64xsub", "f64xsub (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_470, "f64xsub", "f64xsub (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_471, "f64xsub", "f64xsub (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_472, "f64xsub", "f64xsub (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_473, "f64xsub", "f64xsub (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_474, "f64xsub", "f64xsub (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_475, "f64xsub", "f64xsub (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_476, "f64xsub", "f64xsub (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_477, "f64xsub", "f64xsub (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_478, "f64xsub", "f64xsub (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_479, "f64xsub", "f64xsub (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xsub_480, "f64xsub", "f64xsub (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_481, "f64xsub", "f64xsub (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_482, "f64xsub", "f64xsub (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xsub_483, "f64xsub", "f64xsub (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
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
