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
(f64xdivf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64xdiv";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_0 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xdiv_1 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xdiv_2 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xdiv_3 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xdiv_4 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xdiv_5 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_6 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_7 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_8 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_9 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_10 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_11 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_12 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_13 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_14 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_15 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_16 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xdiv_17 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xdiv_18 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_19 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_20 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_21 (void)
{
  extern typeof (f64xdiv (vol_var__Float16, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xdiv_22 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_23 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xdiv_24 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xdiv_25 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xdiv_26 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xdiv_27 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_28 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_29 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_30 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_31 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_32 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_33 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_34 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_35 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_36 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_37 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_38 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xdiv_39 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xdiv_40 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_41 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_42 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_43 (void)
{
  extern typeof (f64xdiv (vol_var__Float32, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xdiv_44 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xdiv_45 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_46 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xdiv_47 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xdiv_48 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xdiv_49 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_50 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_51 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_52 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_53 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_54 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_55 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_56 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_57 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_58 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_59 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_60 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xdiv_61 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xdiv_62 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_63 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_64 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_65 (void)
{
  extern typeof (f64xdiv (vol_var__Float32x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xdiv_66 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xdiv_67 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xdiv_68 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_69 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xdiv_70 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xdiv_71 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_72 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_73 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_74 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_75 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_76 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_77 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_78 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_79 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_80 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_81 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_82 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xdiv_83 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xdiv_84 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_85 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_86 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_87 (void)
{
  extern typeof (f64xdiv (vol_var__Float64, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xdiv_88 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xdiv_89 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xdiv_90 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xdiv_91 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_92 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xdiv_93 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_94 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_95 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_96 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_97 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_98 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_99 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_100 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_101 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_102 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_103 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_104 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xdiv_105 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xdiv_106 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_107 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_108 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_109 (void)
{
  extern typeof (f64xdiv (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xdiv_110 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xdiv_111 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xdiv_112 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xdiv_113 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xdiv_114 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_115 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_116 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_117 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_118 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_119 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_120 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_121 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_122 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_123 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_124 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_125 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_126 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xdiv_127 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xdiv_128 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_129 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_130 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_131 (void)
{
  extern typeof (f64xdiv (vol_var__Float128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_132 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_133 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_134 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_135 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_136 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_137 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_138 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_139 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_140 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_141 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_142 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_143 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_144 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_145 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_146 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_147 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_148 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_149 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_150 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_151 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_152 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_153 (void)
{
  extern typeof (f64xdiv (vol_var_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_154 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_155 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_156 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_157 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_158 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_159 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_160 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_161 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_162 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_163 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_164 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_165 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_166 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_167 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_168 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_169 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_170 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_171 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_172 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_173 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_174 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_175 (void)
{
  extern typeof (f64xdiv (vol_var_signed_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_176 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_177 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_178 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_179 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_180 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_181 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_182 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_183 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_184 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_185 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_186 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_187 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_188 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_189 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_190 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_191 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_192 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_193 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_194 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_195 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_196 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_197 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_198 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_199 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_200 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_201 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_202 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_203 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_204 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_205 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_206 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_207 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_208 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_209 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_210 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_211 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_212 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_213 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_214 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_215 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_216 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_217 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_218 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_219 (void)
{
  extern typeof (f64xdiv (vol_var_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_220 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_221 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_222 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_223 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_224 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_225 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_226 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_227 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_228 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_229 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_230 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_231 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_232 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_233 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_234 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_235 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_236 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_237 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_238 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_239 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_240 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_241 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_242 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_243 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_244 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_245 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_246 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_247 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_248 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_249 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_250 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_251 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_252 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_253 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_254 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_255 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_256 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_257 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_258 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_259 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_260 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_261 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_262 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_263 (void)
{
  extern typeof (f64xdiv (vol_var_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_264 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_265 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_266 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_267 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_268 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_269 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_270 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_271 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_272 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_273 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_274 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_275 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_276 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_277 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_278 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_279 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_280 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_281 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_282 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_283 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_284 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_285 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_286 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_287 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_288 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_289 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_290 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_291 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_292 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_293 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_294 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_295 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_296 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_297 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_298 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_299 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_300 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_301 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_302 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_303 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_304 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_305 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_306 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_307 (void)
{
  extern typeof (f64xdiv (vol_var_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_308 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_309 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_310 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_311 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_312 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_313 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_314 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_315 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_316 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_317 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_318 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_319 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_320 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_321 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_322 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_323 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_324 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_325 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_326 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_327 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_328 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_329 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_330 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_331 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_332 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_333 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_334 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_335 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_336 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_337 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_338 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_339 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_340 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_341 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_342 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_343 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_344 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_345 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_346 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_347 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_348 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_349 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_350 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_351 (void)
{
  extern typeof (f64xdiv (vol_var_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_352 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_353 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_354 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_355 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_356 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_357 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_358 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_359 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_360 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_361 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_362 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_363 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_364 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_365 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_366 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_367 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_368 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_369 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_370 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_371 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_372 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_373 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xdiv_374 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xdiv_375 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xdiv_376 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xdiv_377 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xdiv_378 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xdiv_379 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_380 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_381 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_382 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_383 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_384 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_385 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_386 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_387 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_388 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_389 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_390 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_391 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_392 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_393 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_394 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_395 (void)
{
  extern typeof (f64xdiv (vol_var___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xdiv_396 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xdiv_397 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xdiv_398 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xdiv_399 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xdiv_400 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xdiv_401 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_402 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_403 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_404 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_405 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_406 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_407 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_408 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_409 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_410 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_411 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_412 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_413 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_414 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_415 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_416 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_417 (void)
{
  extern typeof (f64xdiv (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_418 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_419 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_420 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_421 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_422 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_423 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_424 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_425 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_426 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_427 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_428 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_429 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_430 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_431 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_432 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_433 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_434 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_435 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_436 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_437 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_438 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_439 (void)
{
  extern typeof (f64xdiv (vol_var_enum_e, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_440 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_441 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_442 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_443 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_444 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_445 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_446 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_447 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_448 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_449 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_450 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_451 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_452 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_453 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_454 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_455 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_456 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_457 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_458 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_459 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_460 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_461 (void)
{
  extern typeof (f64xdiv (vol_var__Bool, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xdiv_462 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xdiv_463 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xdiv_464 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xdiv_465 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xdiv_466 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xdiv_467 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_468 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_469 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_470 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_471 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_472 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_473 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_474 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_475 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_476 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_477 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_478 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_479 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xdiv_480 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_481 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_482 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xdiv_483 (void)
{
  extern typeof (f64xdiv (vol_var_bit_field, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xdiv (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_0, "f64xdiv", "f64xdiv (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xdiv_1, "f64xdiv", "f64xdiv (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xdiv_2, "f64xdiv", "f64xdiv (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xdiv_3, "f64xdiv", "f64xdiv (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xdiv_4, "f64xdiv", "f64xdiv (_Float16, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xdiv_5, "f64xdiv", "f64xdiv (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_6, "f64xdiv", "f64xdiv (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_7, "f64xdiv", "f64xdiv (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_8, "f64xdiv", "f64xdiv (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_9, "f64xdiv", "f64xdiv (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_10, "f64xdiv", "f64xdiv (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_11, "f64xdiv", "f64xdiv (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_12, "f64xdiv", "f64xdiv (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_13, "f64xdiv", "f64xdiv (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_14, "f64xdiv", "f64xdiv (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_15, "f64xdiv", "f64xdiv (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_16, "f64xdiv", "f64xdiv (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xdiv_17, "f64xdiv", "f64xdiv (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xdiv_18, "f64xdiv", "f64xdiv (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_19, "f64xdiv", "f64xdiv (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_20, "f64xdiv", "f64xdiv (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_21, "f64xdiv", "f64xdiv (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xdiv_22, "f64xdiv", "f64xdiv (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_23, "f64xdiv", "f64xdiv (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xdiv_24, "f64xdiv", "f64xdiv (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xdiv_25, "f64xdiv", "f64xdiv (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xdiv_26, "f64xdiv", "f64xdiv (_Float32, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xdiv_27, "f64xdiv", "f64xdiv (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_28, "f64xdiv", "f64xdiv (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_29, "f64xdiv", "f64xdiv (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_30, "f64xdiv", "f64xdiv (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_31, "f64xdiv", "f64xdiv (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_32, "f64xdiv", "f64xdiv (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_33, "f64xdiv", "f64xdiv (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_34, "f64xdiv", "f64xdiv (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_35, "f64xdiv", "f64xdiv (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_36, "f64xdiv", "f64xdiv (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_37, "f64xdiv", "f64xdiv (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_38, "f64xdiv", "f64xdiv (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xdiv_39, "f64xdiv", "f64xdiv (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xdiv_40, "f64xdiv", "f64xdiv (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_41, "f64xdiv", "f64xdiv (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_42, "f64xdiv", "f64xdiv (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_43, "f64xdiv", "f64xdiv (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xdiv_44, "f64xdiv", "f64xdiv (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xdiv_45, "f64xdiv", "f64xdiv (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_46, "f64xdiv", "f64xdiv (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xdiv_47, "f64xdiv", "f64xdiv (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xdiv_48, "f64xdiv", "f64xdiv (_Float32x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xdiv_49, "f64xdiv", "f64xdiv (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_50, "f64xdiv", "f64xdiv (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_51, "f64xdiv", "f64xdiv (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_52, "f64xdiv", "f64xdiv (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_53, "f64xdiv", "f64xdiv (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_54, "f64xdiv", "f64xdiv (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_55, "f64xdiv", "f64xdiv (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_56, "f64xdiv", "f64xdiv (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_57, "f64xdiv", "f64xdiv (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_58, "f64xdiv", "f64xdiv (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_59, "f64xdiv", "f64xdiv (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_60, "f64xdiv", "f64xdiv (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xdiv_61, "f64xdiv", "f64xdiv (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xdiv_62, "f64xdiv", "f64xdiv (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_63, "f64xdiv", "f64xdiv (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_64, "f64xdiv", "f64xdiv (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_65, "f64xdiv", "f64xdiv (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xdiv_66, "f64xdiv", "f64xdiv (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xdiv_67, "f64xdiv", "f64xdiv (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xdiv_68, "f64xdiv", "f64xdiv (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_69, "f64xdiv", "f64xdiv (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xdiv_70, "f64xdiv", "f64xdiv (_Float64, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xdiv_71, "f64xdiv", "f64xdiv (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_72, "f64xdiv", "f64xdiv (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_73, "f64xdiv", "f64xdiv (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_74, "f64xdiv", "f64xdiv (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_75, "f64xdiv", "f64xdiv (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_76, "f64xdiv", "f64xdiv (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_77, "f64xdiv", "f64xdiv (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_78, "f64xdiv", "f64xdiv (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_79, "f64xdiv", "f64xdiv (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_80, "f64xdiv", "f64xdiv (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_81, "f64xdiv", "f64xdiv (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_82, "f64xdiv", "f64xdiv (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xdiv_83, "f64xdiv", "f64xdiv (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xdiv_84, "f64xdiv", "f64xdiv (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_85, "f64xdiv", "f64xdiv (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_86, "f64xdiv", "f64xdiv (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_87, "f64xdiv", "f64xdiv (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xdiv_88, "f64xdiv", "f64xdiv (_Float64x, _Float16)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xdiv_89, "f64xdiv", "f64xdiv (_Float64x, _Float32)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xdiv_90, "f64xdiv", "f64xdiv (_Float64x, _Float32x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xdiv_91, "f64xdiv", "f64xdiv (_Float64x, _Float64)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_92, "f64xdiv", "f64xdiv (_Float64x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xdiv_93, "f64xdiv", "f64xdiv (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_94, "f64xdiv", "f64xdiv (_Float64x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_95, "f64xdiv", "f64xdiv (_Float64x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_96, "f64xdiv", "f64xdiv (_Float64x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_97, "f64xdiv", "f64xdiv (_Float64x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_98, "f64xdiv", "f64xdiv (_Float64x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_99, "f64xdiv", "f64xdiv (_Float64x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_100, "f64xdiv", "f64xdiv (_Float64x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_101, "f64xdiv", "f64xdiv (_Float64x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_102, "f64xdiv", "f64xdiv (_Float64x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_103, "f64xdiv", "f64xdiv (_Float64x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_104, "f64xdiv", "f64xdiv (_Float64x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xdiv_105, "f64xdiv", "f64xdiv (_Float64x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xdiv_106, "f64xdiv", "f64xdiv (_Float64x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_107, "f64xdiv", "f64xdiv (_Float64x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_108, "f64xdiv", "f64xdiv (_Float64x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_109, "f64xdiv", "f64xdiv (_Float64x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xdiv_110, "f64xdiv", "f64xdiv (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xdiv_111, "f64xdiv", "f64xdiv (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xdiv_112, "f64xdiv", "f64xdiv (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xdiv_113, "f64xdiv", "f64xdiv (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xdiv_114, "f64xdiv", "f64xdiv (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_115, "f64xdiv", "f64xdiv (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_116, "f64xdiv", "f64xdiv (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_117, "f64xdiv", "f64xdiv (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_118, "f64xdiv", "f64xdiv (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_119, "f64xdiv", "f64xdiv (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_120, "f64xdiv", "f64xdiv (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_121, "f64xdiv", "f64xdiv (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_122, "f64xdiv", "f64xdiv (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_123, "f64xdiv", "f64xdiv (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_124, "f64xdiv", "f64xdiv (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_125, "f64xdiv", "f64xdiv (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_126, "f64xdiv", "f64xdiv (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xdiv_127, "f64xdiv", "f64xdiv (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xdiv_128, "f64xdiv", "f64xdiv (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_129, "f64xdiv", "f64xdiv (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_130, "f64xdiv", "f64xdiv (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_131, "f64xdiv", "f64xdiv (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_132, "f64xdiv", "f64xdiv (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_133, "f64xdiv", "f64xdiv (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_134, "f64xdiv", "f64xdiv (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_135, "f64xdiv", "f64xdiv (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_136, "f64xdiv", "f64xdiv (char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_137, "f64xdiv", "f64xdiv (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_138, "f64xdiv", "f64xdiv (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_139, "f64xdiv", "f64xdiv (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_140, "f64xdiv", "f64xdiv (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_141, "f64xdiv", "f64xdiv (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_142, "f64xdiv", "f64xdiv (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_143, "f64xdiv", "f64xdiv (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_144, "f64xdiv", "f64xdiv (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_145, "f64xdiv", "f64xdiv (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_146, "f64xdiv", "f64xdiv (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_147, "f64xdiv", "f64xdiv (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_148, "f64xdiv", "f64xdiv (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_149, "f64xdiv", "f64xdiv (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_150, "f64xdiv", "f64xdiv (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_151, "f64xdiv", "f64xdiv (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_152, "f64xdiv", "f64xdiv (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_153, "f64xdiv", "f64xdiv (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_154, "f64xdiv", "f64xdiv (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_155, "f64xdiv", "f64xdiv (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_156, "f64xdiv", "f64xdiv (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_157, "f64xdiv", "f64xdiv (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_158, "f64xdiv", "f64xdiv (signed char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_159, "f64xdiv", "f64xdiv (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_160, "f64xdiv", "f64xdiv (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_161, "f64xdiv", "f64xdiv (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_162, "f64xdiv", "f64xdiv (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_163, "f64xdiv", "f64xdiv (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_164, "f64xdiv", "f64xdiv (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_165, "f64xdiv", "f64xdiv (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_166, "f64xdiv", "f64xdiv (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_167, "f64xdiv", "f64xdiv (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_168, "f64xdiv", "f64xdiv (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_169, "f64xdiv", "f64xdiv (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_170, "f64xdiv", "f64xdiv (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_171, "f64xdiv", "f64xdiv (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_172, "f64xdiv", "f64xdiv (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_173, "f64xdiv", "f64xdiv (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_174, "f64xdiv", "f64xdiv (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_175, "f64xdiv", "f64xdiv (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_176, "f64xdiv", "f64xdiv (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_177, "f64xdiv", "f64xdiv (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_178, "f64xdiv", "f64xdiv (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_179, "f64xdiv", "f64xdiv (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_180, "f64xdiv", "f64xdiv (unsigned char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_181, "f64xdiv", "f64xdiv (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_182, "f64xdiv", "f64xdiv (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_183, "f64xdiv", "f64xdiv (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_184, "f64xdiv", "f64xdiv (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_185, "f64xdiv", "f64xdiv (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_186, "f64xdiv", "f64xdiv (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_187, "f64xdiv", "f64xdiv (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_188, "f64xdiv", "f64xdiv (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_189, "f64xdiv", "f64xdiv (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_190, "f64xdiv", "f64xdiv (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_191, "f64xdiv", "f64xdiv (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_192, "f64xdiv", "f64xdiv (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_193, "f64xdiv", "f64xdiv (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_194, "f64xdiv", "f64xdiv (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_195, "f64xdiv", "f64xdiv (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_196, "f64xdiv", "f64xdiv (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_197, "f64xdiv", "f64xdiv (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_198, "f64xdiv", "f64xdiv (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_199, "f64xdiv", "f64xdiv (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_200, "f64xdiv", "f64xdiv (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_201, "f64xdiv", "f64xdiv (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_202, "f64xdiv", "f64xdiv (short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_203, "f64xdiv", "f64xdiv (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_204, "f64xdiv", "f64xdiv (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_205, "f64xdiv", "f64xdiv (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_206, "f64xdiv", "f64xdiv (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_207, "f64xdiv", "f64xdiv (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_208, "f64xdiv", "f64xdiv (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_209, "f64xdiv", "f64xdiv (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_210, "f64xdiv", "f64xdiv (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_211, "f64xdiv", "f64xdiv (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_212, "f64xdiv", "f64xdiv (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_213, "f64xdiv", "f64xdiv (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_214, "f64xdiv", "f64xdiv (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_215, "f64xdiv", "f64xdiv (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_216, "f64xdiv", "f64xdiv (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_217, "f64xdiv", "f64xdiv (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_218, "f64xdiv", "f64xdiv (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_219, "f64xdiv", "f64xdiv (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_220, "f64xdiv", "f64xdiv (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_221, "f64xdiv", "f64xdiv (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_222, "f64xdiv", "f64xdiv (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_223, "f64xdiv", "f64xdiv (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_224, "f64xdiv", "f64xdiv (unsigned short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_225, "f64xdiv", "f64xdiv (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_226, "f64xdiv", "f64xdiv (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_227, "f64xdiv", "f64xdiv (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_228, "f64xdiv", "f64xdiv (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_229, "f64xdiv", "f64xdiv (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_230, "f64xdiv", "f64xdiv (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_231, "f64xdiv", "f64xdiv (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_232, "f64xdiv", "f64xdiv (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_233, "f64xdiv", "f64xdiv (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_234, "f64xdiv", "f64xdiv (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_235, "f64xdiv", "f64xdiv (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_236, "f64xdiv", "f64xdiv (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_237, "f64xdiv", "f64xdiv (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_238, "f64xdiv", "f64xdiv (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_239, "f64xdiv", "f64xdiv (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_240, "f64xdiv", "f64xdiv (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_241, "f64xdiv", "f64xdiv (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_242, "f64xdiv", "f64xdiv (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_243, "f64xdiv", "f64xdiv (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_244, "f64xdiv", "f64xdiv (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_245, "f64xdiv", "f64xdiv (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_246, "f64xdiv", "f64xdiv (int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_247, "f64xdiv", "f64xdiv (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_248, "f64xdiv", "f64xdiv (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_249, "f64xdiv", "f64xdiv (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_250, "f64xdiv", "f64xdiv (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_251, "f64xdiv", "f64xdiv (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_252, "f64xdiv", "f64xdiv (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_253, "f64xdiv", "f64xdiv (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_254, "f64xdiv", "f64xdiv (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_255, "f64xdiv", "f64xdiv (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_256, "f64xdiv", "f64xdiv (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_257, "f64xdiv", "f64xdiv (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_258, "f64xdiv", "f64xdiv (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_259, "f64xdiv", "f64xdiv (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_260, "f64xdiv", "f64xdiv (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_261, "f64xdiv", "f64xdiv (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_262, "f64xdiv", "f64xdiv (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_263, "f64xdiv", "f64xdiv (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_264, "f64xdiv", "f64xdiv (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_265, "f64xdiv", "f64xdiv (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_266, "f64xdiv", "f64xdiv (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_267, "f64xdiv", "f64xdiv (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_268, "f64xdiv", "f64xdiv (unsigned int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_269, "f64xdiv", "f64xdiv (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_270, "f64xdiv", "f64xdiv (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_271, "f64xdiv", "f64xdiv (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_272, "f64xdiv", "f64xdiv (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_273, "f64xdiv", "f64xdiv (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_274, "f64xdiv", "f64xdiv (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_275, "f64xdiv", "f64xdiv (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_276, "f64xdiv", "f64xdiv (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_277, "f64xdiv", "f64xdiv (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_278, "f64xdiv", "f64xdiv (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_279, "f64xdiv", "f64xdiv (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_280, "f64xdiv", "f64xdiv (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_281, "f64xdiv", "f64xdiv (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_282, "f64xdiv", "f64xdiv (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_283, "f64xdiv", "f64xdiv (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_284, "f64xdiv", "f64xdiv (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_285, "f64xdiv", "f64xdiv (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_286, "f64xdiv", "f64xdiv (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_287, "f64xdiv", "f64xdiv (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_288, "f64xdiv", "f64xdiv (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_289, "f64xdiv", "f64xdiv (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_290, "f64xdiv", "f64xdiv (long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_291, "f64xdiv", "f64xdiv (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_292, "f64xdiv", "f64xdiv (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_293, "f64xdiv", "f64xdiv (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_294, "f64xdiv", "f64xdiv (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_295, "f64xdiv", "f64xdiv (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_296, "f64xdiv", "f64xdiv (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_297, "f64xdiv", "f64xdiv (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_298, "f64xdiv", "f64xdiv (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_299, "f64xdiv", "f64xdiv (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_300, "f64xdiv", "f64xdiv (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_301, "f64xdiv", "f64xdiv (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_302, "f64xdiv", "f64xdiv (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_303, "f64xdiv", "f64xdiv (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_304, "f64xdiv", "f64xdiv (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_305, "f64xdiv", "f64xdiv (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_306, "f64xdiv", "f64xdiv (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_307, "f64xdiv", "f64xdiv (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_308, "f64xdiv", "f64xdiv (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_309, "f64xdiv", "f64xdiv (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_310, "f64xdiv", "f64xdiv (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_311, "f64xdiv", "f64xdiv (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_312, "f64xdiv", "f64xdiv (unsigned long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_313, "f64xdiv", "f64xdiv (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_314, "f64xdiv", "f64xdiv (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_315, "f64xdiv", "f64xdiv (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_316, "f64xdiv", "f64xdiv (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_317, "f64xdiv", "f64xdiv (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_318, "f64xdiv", "f64xdiv (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_319, "f64xdiv", "f64xdiv (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_320, "f64xdiv", "f64xdiv (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_321, "f64xdiv", "f64xdiv (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_322, "f64xdiv", "f64xdiv (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_323, "f64xdiv", "f64xdiv (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_324, "f64xdiv", "f64xdiv (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_325, "f64xdiv", "f64xdiv (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_326, "f64xdiv", "f64xdiv (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_327, "f64xdiv", "f64xdiv (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_328, "f64xdiv", "f64xdiv (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_329, "f64xdiv", "f64xdiv (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_330, "f64xdiv", "f64xdiv (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_331, "f64xdiv", "f64xdiv (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_332, "f64xdiv", "f64xdiv (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_333, "f64xdiv", "f64xdiv (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_334, "f64xdiv", "f64xdiv (long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_335, "f64xdiv", "f64xdiv (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_336, "f64xdiv", "f64xdiv (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_337, "f64xdiv", "f64xdiv (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_338, "f64xdiv", "f64xdiv (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_339, "f64xdiv", "f64xdiv (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_340, "f64xdiv", "f64xdiv (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_341, "f64xdiv", "f64xdiv (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_342, "f64xdiv", "f64xdiv (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_343, "f64xdiv", "f64xdiv (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_344, "f64xdiv", "f64xdiv (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_345, "f64xdiv", "f64xdiv (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_346, "f64xdiv", "f64xdiv (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_347, "f64xdiv", "f64xdiv (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_348, "f64xdiv", "f64xdiv (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_349, "f64xdiv", "f64xdiv (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_350, "f64xdiv", "f64xdiv (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_351, "f64xdiv", "f64xdiv (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_352, "f64xdiv", "f64xdiv (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_353, "f64xdiv", "f64xdiv (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_354, "f64xdiv", "f64xdiv (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_355, "f64xdiv", "f64xdiv (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_356, "f64xdiv", "f64xdiv (unsigned long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_357, "f64xdiv", "f64xdiv (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_358, "f64xdiv", "f64xdiv (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_359, "f64xdiv", "f64xdiv (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_360, "f64xdiv", "f64xdiv (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_361, "f64xdiv", "f64xdiv (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_362, "f64xdiv", "f64xdiv (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_363, "f64xdiv", "f64xdiv (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_364, "f64xdiv", "f64xdiv (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_365, "f64xdiv", "f64xdiv (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_366, "f64xdiv", "f64xdiv (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_367, "f64xdiv", "f64xdiv (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_368, "f64xdiv", "f64xdiv (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_369, "f64xdiv", "f64xdiv (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_370, "f64xdiv", "f64xdiv (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_371, "f64xdiv", "f64xdiv (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_372, "f64xdiv", "f64xdiv (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_373, "f64xdiv", "f64xdiv (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xdiv_374, "f64xdiv", "f64xdiv (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xdiv_375, "f64xdiv", "f64xdiv (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xdiv_376, "f64xdiv", "f64xdiv (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xdiv_377, "f64xdiv", "f64xdiv (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xdiv_378, "f64xdiv", "f64xdiv (__int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xdiv_379, "f64xdiv", "f64xdiv (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_380, "f64xdiv", "f64xdiv (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_381, "f64xdiv", "f64xdiv (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_382, "f64xdiv", "f64xdiv (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_383, "f64xdiv", "f64xdiv (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_384, "f64xdiv", "f64xdiv (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_385, "f64xdiv", "f64xdiv (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_386, "f64xdiv", "f64xdiv (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_387, "f64xdiv", "f64xdiv (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_388, "f64xdiv", "f64xdiv (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_389, "f64xdiv", "f64xdiv (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_390, "f64xdiv", "f64xdiv (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_391, "f64xdiv", "f64xdiv (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_392, "f64xdiv", "f64xdiv (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_393, "f64xdiv", "f64xdiv (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_394, "f64xdiv", "f64xdiv (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_395, "f64xdiv", "f64xdiv (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xdiv_396, "f64xdiv", "f64xdiv (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xdiv_397, "f64xdiv", "f64xdiv (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xdiv_398, "f64xdiv", "f64xdiv (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xdiv_399, "f64xdiv", "f64xdiv (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xdiv_400, "f64xdiv", "f64xdiv (unsigned __int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xdiv_401, "f64xdiv", "f64xdiv (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_402, "f64xdiv", "f64xdiv (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_403, "f64xdiv", "f64xdiv (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_404, "f64xdiv", "f64xdiv (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_405, "f64xdiv", "f64xdiv (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_406, "f64xdiv", "f64xdiv (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_407, "f64xdiv", "f64xdiv (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_408, "f64xdiv", "f64xdiv (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_409, "f64xdiv", "f64xdiv (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_410, "f64xdiv", "f64xdiv (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_411, "f64xdiv", "f64xdiv (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_412, "f64xdiv", "f64xdiv (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_413, "f64xdiv", "f64xdiv (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_414, "f64xdiv", "f64xdiv (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_415, "f64xdiv", "f64xdiv (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_416, "f64xdiv", "f64xdiv (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_417, "f64xdiv", "f64xdiv (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_418, "f64xdiv", "f64xdiv (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_419, "f64xdiv", "f64xdiv (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_420, "f64xdiv", "f64xdiv (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_421, "f64xdiv", "f64xdiv (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_422, "f64xdiv", "f64xdiv (enum e, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_423, "f64xdiv", "f64xdiv (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_424, "f64xdiv", "f64xdiv (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_425, "f64xdiv", "f64xdiv (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_426, "f64xdiv", "f64xdiv (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_427, "f64xdiv", "f64xdiv (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_428, "f64xdiv", "f64xdiv (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_429, "f64xdiv", "f64xdiv (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_430, "f64xdiv", "f64xdiv (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_431, "f64xdiv", "f64xdiv (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_432, "f64xdiv", "f64xdiv (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_433, "f64xdiv", "f64xdiv (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_434, "f64xdiv", "f64xdiv (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_435, "f64xdiv", "f64xdiv (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_436, "f64xdiv", "f64xdiv (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_437, "f64xdiv", "f64xdiv (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_438, "f64xdiv", "f64xdiv (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_439, "f64xdiv", "f64xdiv (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_440, "f64xdiv", "f64xdiv (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_441, "f64xdiv", "f64xdiv (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_442, "f64xdiv", "f64xdiv (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_443, "f64xdiv", "f64xdiv (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_444, "f64xdiv", "f64xdiv (_Bool, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_445, "f64xdiv", "f64xdiv (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_446, "f64xdiv", "f64xdiv (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_447, "f64xdiv", "f64xdiv (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_448, "f64xdiv", "f64xdiv (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_449, "f64xdiv", "f64xdiv (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_450, "f64xdiv", "f64xdiv (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_451, "f64xdiv", "f64xdiv (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_452, "f64xdiv", "f64xdiv (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_453, "f64xdiv", "f64xdiv (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_454, "f64xdiv", "f64xdiv (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_455, "f64xdiv", "f64xdiv (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_456, "f64xdiv", "f64xdiv (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_457, "f64xdiv", "f64xdiv (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_458, "f64xdiv", "f64xdiv (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_459, "f64xdiv", "f64xdiv (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_460, "f64xdiv", "f64xdiv (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_461, "f64xdiv", "f64xdiv (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xdiv_462, "f64xdiv", "f64xdiv (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xdiv_463, "f64xdiv", "f64xdiv (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xdiv_464, "f64xdiv", "f64xdiv (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xdiv_465, "f64xdiv", "f64xdiv (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xdiv_466, "f64xdiv", "f64xdiv (bit_field, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xdiv_467, "f64xdiv", "f64xdiv (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_468, "f64xdiv", "f64xdiv (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_469, "f64xdiv", "f64xdiv (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_470, "f64xdiv", "f64xdiv (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_471, "f64xdiv", "f64xdiv (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_472, "f64xdiv", "f64xdiv (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_473, "f64xdiv", "f64xdiv (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_474, "f64xdiv", "f64xdiv (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_475, "f64xdiv", "f64xdiv (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_476, "f64xdiv", "f64xdiv (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_477, "f64xdiv", "f64xdiv (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_478, "f64xdiv", "f64xdiv (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_479, "f64xdiv", "f64xdiv (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xdiv_480, "f64xdiv", "f64xdiv (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_481, "f64xdiv", "f64xdiv (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_482, "f64xdiv", "f64xdiv (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xdiv_483, "f64xdiv", "f64xdiv (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
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
