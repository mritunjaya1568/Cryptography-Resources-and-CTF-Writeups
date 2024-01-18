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
(f64xmulf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64xmul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_0 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xmul_1 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xmul_2 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xmul_3 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xmul_4 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xmul_5 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_6 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_7 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_8 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_9 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_10 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_11 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_12 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_13 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_14 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_15 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_16 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xmul_17 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xmul_18 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_19 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_20 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_21 (void)
{
  extern typeof (f64xmul (vol_var__Float16, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64xmul_22 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_23 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xmul_24 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xmul_25 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xmul_26 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xmul_27 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_28 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_29 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_30 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_31 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_32 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_33 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_34 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_35 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_36 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_37 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_38 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xmul_39 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xmul_40 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_41 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_42 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_43 (void)
{
  extern typeof (f64xmul (vol_var__Float32, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64xmul_44 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64xmul_45 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_46 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xmul_47 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xmul_48 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xmul_49 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_50 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_51 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_52 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_53 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_54 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_55 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_56 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_57 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_58 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_59 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_60 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xmul_61 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xmul_62 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_63 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_64 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_65 (void)
{
  extern typeof (f64xmul (vol_var__Float32x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64xmul_66 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64xmul_67 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64xmul_68 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_69 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xmul_70 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xmul_71 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_72 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_73 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_74 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_75 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_76 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_77 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_78 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_79 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_80 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_81 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_82 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xmul_83 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xmul_84 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_85 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_86 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_87 (void)
{
  extern typeof (f64xmul (vol_var__Float64, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64xmul_88 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64xmul_89 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64xmul_90 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64xmul_91 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_92 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xmul_93 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_94 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_95 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_96 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_97 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_98 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_99 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_100 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_101 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_102 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_103 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_104 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xmul_105 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xmul_106 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_107 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_108 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_109 (void)
{
  extern typeof (f64xmul (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64xmul_110 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64xmul_111 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64xmul_112 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64xmul_113 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64xmul_114 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_115 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_116 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_117 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_118 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_119 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_120 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_121 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_122 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_123 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_124 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_125 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_126 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xmul_127 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xmul_128 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_129 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_130 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_131 (void)
{
  extern typeof (f64xmul (vol_var__Float128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_132 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_133 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_134 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_135 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_136 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_137 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_138 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_139 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_140 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_141 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_142 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_143 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_144 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_145 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_146 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_147 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_148 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_149 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_150 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_151 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_152 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_153 (void)
{
  extern typeof (f64xmul (vol_var_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_154 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_155 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_156 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_157 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_158 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_159 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_160 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_161 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_162 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_163 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_164 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_165 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_166 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_167 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_168 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_169 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_170 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_171 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_172 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_173 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_174 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_175 (void)
{
  extern typeof (f64xmul (vol_var_signed_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_176 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_177 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_178 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_179 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_180 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_181 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_182 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_183 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_184 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_185 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_186 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_187 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_188 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_189 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_190 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_191 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_192 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_193 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_194 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_195 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_196 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_197 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_char, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_198 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_199 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_200 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_201 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_202 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_203 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_204 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_205 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_206 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_207 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_208 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_209 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_210 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_211 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_212 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_213 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_214 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_215 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_216 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_217 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_218 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_219 (void)
{
  extern typeof (f64xmul (vol_var_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_220 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_221 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_222 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_223 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_224 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_225 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_226 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_227 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_228 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_229 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_230 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_231 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_232 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_233 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_234 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_235 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_236 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_237 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_238 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_239 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_240 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_241 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_242 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_243 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_244 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_245 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_246 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_247 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_248 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_249 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_250 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_251 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_252 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_253 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_254 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_255 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_256 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_257 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_258 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_259 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_260 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_261 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_262 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_263 (void)
{
  extern typeof (f64xmul (vol_var_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_264 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_265 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_266 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_267 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_268 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_269 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_270 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_271 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_272 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_273 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_274 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_275 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_276 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_277 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_278 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_279 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_280 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_281 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_282 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_283 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_284 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_285 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_286 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_287 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_288 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_289 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_290 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_291 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_292 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_293 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_294 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_295 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_296 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_297 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_298 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_299 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_300 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_301 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_302 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_303 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_304 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_305 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_306 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_307 (void)
{
  extern typeof (f64xmul (vol_var_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_308 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_309 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_310 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_311 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_312 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_313 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_314 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_315 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_316 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_317 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_318 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_319 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_320 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_321 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_322 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_323 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_324 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_325 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_326 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_327 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_328 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_329 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_330 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_331 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_332 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_333 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_334 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_335 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_336 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_337 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_338 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_339 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_340 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_341 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_342 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_343 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_344 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_345 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_346 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_347 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_348 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_349 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_350 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_351 (void)
{
  extern typeof (f64xmul (vol_var_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_352 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_353 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_354 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_355 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_356 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_357 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_358 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_359 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_360 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_361 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_362 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_363 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_364 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_365 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_366 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_367 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_368 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_369 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_370 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_371 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_372 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_373 (void)
{
  extern typeof (f64xmul (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xmul_374 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xmul_375 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xmul_376 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xmul_377 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xmul_378 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xmul_379 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_380 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_381 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_382 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_383 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_384 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_385 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_386 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_387 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_388 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_389 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_390 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_391 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_392 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_393 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_394 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_395 (void)
{
  extern typeof (f64xmul (vol_var___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64xmul_396 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64xmul_397 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64xmul_398 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64xmul_399 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64xmul_400 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64xmul_401 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_402 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_403 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_404 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_405 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_406 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_407 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_408 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_409 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_410 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_411 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_412 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_413 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_414 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_415 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_416 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_417 (void)
{
  extern typeof (f64xmul (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_418 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_419 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_420 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_421 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_422 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_423 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_424 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_425 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_426 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_427 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_428 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_429 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_430 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_431 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_432 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_433 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_434 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_435 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_436 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_437 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_438 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_439 (void)
{
  extern typeof (f64xmul (vol_var_enum_e, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_440 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_441 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_442 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_443 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_444 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_445 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_446 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_447 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_448 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_449 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_450 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_451 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_452 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_453 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_454 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_455 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_456 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_457 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_458 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_459 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_460 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_461 (void)
{
  extern typeof (f64xmul (vol_var__Bool, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64xmul_462 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64xmul_463 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64xmul_464 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64xmul_465 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64xmul_466 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64xmul_467 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var__Float128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_468 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_469 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_470 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_471 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_472 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_473 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_474 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_475 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_476 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_477 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_478 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_479 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64xmul_480 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_481 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_482 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
static void
test_f64xmul_483 (void)
{
  extern typeof (f64xmul (vol_var_bit_field, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = f64xmul (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_0, "f64xmul", "f64xmul (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xmul_1, "f64xmul", "f64xmul (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xmul_2, "f64xmul", "f64xmul (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xmul_3, "f64xmul", "f64xmul (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xmul_4, "f64xmul", "f64xmul (_Float16, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xmul_5, "f64xmul", "f64xmul (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_6, "f64xmul", "f64xmul (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_7, "f64xmul", "f64xmul (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_8, "f64xmul", "f64xmul (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_9, "f64xmul", "f64xmul (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_10, "f64xmul", "f64xmul (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_11, "f64xmul", "f64xmul (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_12, "f64xmul", "f64xmul (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_13, "f64xmul", "f64xmul (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_14, "f64xmul", "f64xmul (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_15, "f64xmul", "f64xmul (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_16, "f64xmul", "f64xmul (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xmul_17, "f64xmul", "f64xmul (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xmul_18, "f64xmul", "f64xmul (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_19, "f64xmul", "f64xmul (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_20, "f64xmul", "f64xmul (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_21, "f64xmul", "f64xmul (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64xmul_22, "f64xmul", "f64xmul (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_23, "f64xmul", "f64xmul (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xmul_24, "f64xmul", "f64xmul (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xmul_25, "f64xmul", "f64xmul (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xmul_26, "f64xmul", "f64xmul (_Float32, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xmul_27, "f64xmul", "f64xmul (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_28, "f64xmul", "f64xmul (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_29, "f64xmul", "f64xmul (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_30, "f64xmul", "f64xmul (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_31, "f64xmul", "f64xmul (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_32, "f64xmul", "f64xmul (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_33, "f64xmul", "f64xmul (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_34, "f64xmul", "f64xmul (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_35, "f64xmul", "f64xmul (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_36, "f64xmul", "f64xmul (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_37, "f64xmul", "f64xmul (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_38, "f64xmul", "f64xmul (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xmul_39, "f64xmul", "f64xmul (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xmul_40, "f64xmul", "f64xmul (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_41, "f64xmul", "f64xmul (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_42, "f64xmul", "f64xmul (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_43, "f64xmul", "f64xmul (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64xmul_44, "f64xmul", "f64xmul (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64xmul_45, "f64xmul", "f64xmul (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_46, "f64xmul", "f64xmul (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xmul_47, "f64xmul", "f64xmul (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xmul_48, "f64xmul", "f64xmul (_Float32x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xmul_49, "f64xmul", "f64xmul (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_50, "f64xmul", "f64xmul (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_51, "f64xmul", "f64xmul (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_52, "f64xmul", "f64xmul (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_53, "f64xmul", "f64xmul (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_54, "f64xmul", "f64xmul (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_55, "f64xmul", "f64xmul (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_56, "f64xmul", "f64xmul (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_57, "f64xmul", "f64xmul (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_58, "f64xmul", "f64xmul (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_59, "f64xmul", "f64xmul (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_60, "f64xmul", "f64xmul (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xmul_61, "f64xmul", "f64xmul (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xmul_62, "f64xmul", "f64xmul (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_63, "f64xmul", "f64xmul (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_64, "f64xmul", "f64xmul (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_65, "f64xmul", "f64xmul (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64xmul_66, "f64xmul", "f64xmul (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64xmul_67, "f64xmul", "f64xmul (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64xmul_68, "f64xmul", "f64xmul (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_69, "f64xmul", "f64xmul (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xmul_70, "f64xmul", "f64xmul (_Float64, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xmul_71, "f64xmul", "f64xmul (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_72, "f64xmul", "f64xmul (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_73, "f64xmul", "f64xmul (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_74, "f64xmul", "f64xmul (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_75, "f64xmul", "f64xmul (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_76, "f64xmul", "f64xmul (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_77, "f64xmul", "f64xmul (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_78, "f64xmul", "f64xmul (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_79, "f64xmul", "f64xmul (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_80, "f64xmul", "f64xmul (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_81, "f64xmul", "f64xmul (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_82, "f64xmul", "f64xmul (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xmul_83, "f64xmul", "f64xmul (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xmul_84, "f64xmul", "f64xmul (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_85, "f64xmul", "f64xmul (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_86, "f64xmul", "f64xmul (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_87, "f64xmul", "f64xmul (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64xmul_88, "f64xmul", "f64xmul (_Float64x, _Float16)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64xmul_89, "f64xmul", "f64xmul (_Float64x, _Float32)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64xmul_90, "f64xmul", "f64xmul (_Float64x, _Float32x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64xmul_91, "f64xmul", "f64xmul (_Float64x, _Float64)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_92, "f64xmul", "f64xmul (_Float64x, _Float64x)", FLT128_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xmul_93, "f64xmul", "f64xmul (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_94, "f64xmul", "f64xmul (_Float64x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_95, "f64xmul", "f64xmul (_Float64x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_96, "f64xmul", "f64xmul (_Float64x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_97, "f64xmul", "f64xmul (_Float64x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_98, "f64xmul", "f64xmul (_Float64x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_99, "f64xmul", "f64xmul (_Float64x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_100, "f64xmul", "f64xmul (_Float64x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_101, "f64xmul", "f64xmul (_Float64x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_102, "f64xmul", "f64xmul (_Float64x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_103, "f64xmul", "f64xmul (_Float64x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_104, "f64xmul", "f64xmul (_Float64x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xmul_105, "f64xmul", "f64xmul (_Float64x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xmul_106, "f64xmul", "f64xmul (_Float64x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_107, "f64xmul", "f64xmul (_Float64x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_108, "f64xmul", "f64xmul (_Float64x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_109, "f64xmul", "f64xmul (_Float64x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64xmul_110, "f64xmul", "f64xmul (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64xmul_111, "f64xmul", "f64xmul (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64xmul_112, "f64xmul", "f64xmul (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64xmul_113, "f64xmul", "f64xmul (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64xmul_114, "f64xmul", "f64xmul (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_115, "f64xmul", "f64xmul (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_116, "f64xmul", "f64xmul (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_117, "f64xmul", "f64xmul (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_118, "f64xmul", "f64xmul (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_119, "f64xmul", "f64xmul (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_120, "f64xmul", "f64xmul (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_121, "f64xmul", "f64xmul (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_122, "f64xmul", "f64xmul (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_123, "f64xmul", "f64xmul (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_124, "f64xmul", "f64xmul (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_125, "f64xmul", "f64xmul (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_126, "f64xmul", "f64xmul (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xmul_127, "f64xmul", "f64xmul (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xmul_128, "f64xmul", "f64xmul (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_129, "f64xmul", "f64xmul (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_130, "f64xmul", "f64xmul (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_131, "f64xmul", "f64xmul (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_132, "f64xmul", "f64xmul (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_133, "f64xmul", "f64xmul (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_134, "f64xmul", "f64xmul (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_135, "f64xmul", "f64xmul (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_136, "f64xmul", "f64xmul (char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_137, "f64xmul", "f64xmul (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_138, "f64xmul", "f64xmul (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_139, "f64xmul", "f64xmul (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_140, "f64xmul", "f64xmul (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_141, "f64xmul", "f64xmul (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_142, "f64xmul", "f64xmul (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_143, "f64xmul", "f64xmul (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_144, "f64xmul", "f64xmul (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_145, "f64xmul", "f64xmul (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_146, "f64xmul", "f64xmul (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_147, "f64xmul", "f64xmul (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_148, "f64xmul", "f64xmul (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_149, "f64xmul", "f64xmul (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_150, "f64xmul", "f64xmul (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_151, "f64xmul", "f64xmul (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_152, "f64xmul", "f64xmul (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_153, "f64xmul", "f64xmul (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_154, "f64xmul", "f64xmul (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_155, "f64xmul", "f64xmul (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_156, "f64xmul", "f64xmul (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_157, "f64xmul", "f64xmul (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_158, "f64xmul", "f64xmul (signed char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_159, "f64xmul", "f64xmul (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_160, "f64xmul", "f64xmul (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_161, "f64xmul", "f64xmul (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_162, "f64xmul", "f64xmul (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_163, "f64xmul", "f64xmul (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_164, "f64xmul", "f64xmul (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_165, "f64xmul", "f64xmul (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_166, "f64xmul", "f64xmul (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_167, "f64xmul", "f64xmul (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_168, "f64xmul", "f64xmul (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_169, "f64xmul", "f64xmul (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_170, "f64xmul", "f64xmul (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_171, "f64xmul", "f64xmul (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_172, "f64xmul", "f64xmul (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_173, "f64xmul", "f64xmul (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_174, "f64xmul", "f64xmul (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_175, "f64xmul", "f64xmul (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_176, "f64xmul", "f64xmul (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_177, "f64xmul", "f64xmul (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_178, "f64xmul", "f64xmul (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_179, "f64xmul", "f64xmul (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_180, "f64xmul", "f64xmul (unsigned char, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_181, "f64xmul", "f64xmul (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_182, "f64xmul", "f64xmul (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_183, "f64xmul", "f64xmul (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_184, "f64xmul", "f64xmul (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_185, "f64xmul", "f64xmul (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_186, "f64xmul", "f64xmul (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_187, "f64xmul", "f64xmul (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_188, "f64xmul", "f64xmul (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_189, "f64xmul", "f64xmul (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_190, "f64xmul", "f64xmul (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_191, "f64xmul", "f64xmul (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_192, "f64xmul", "f64xmul (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_193, "f64xmul", "f64xmul (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_194, "f64xmul", "f64xmul (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_195, "f64xmul", "f64xmul (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_196, "f64xmul", "f64xmul (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_197, "f64xmul", "f64xmul (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_198, "f64xmul", "f64xmul (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_199, "f64xmul", "f64xmul (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_200, "f64xmul", "f64xmul (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_201, "f64xmul", "f64xmul (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_202, "f64xmul", "f64xmul (short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_203, "f64xmul", "f64xmul (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_204, "f64xmul", "f64xmul (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_205, "f64xmul", "f64xmul (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_206, "f64xmul", "f64xmul (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_207, "f64xmul", "f64xmul (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_208, "f64xmul", "f64xmul (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_209, "f64xmul", "f64xmul (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_210, "f64xmul", "f64xmul (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_211, "f64xmul", "f64xmul (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_212, "f64xmul", "f64xmul (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_213, "f64xmul", "f64xmul (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_214, "f64xmul", "f64xmul (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_215, "f64xmul", "f64xmul (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_216, "f64xmul", "f64xmul (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_217, "f64xmul", "f64xmul (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_218, "f64xmul", "f64xmul (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_219, "f64xmul", "f64xmul (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_220, "f64xmul", "f64xmul (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_221, "f64xmul", "f64xmul (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_222, "f64xmul", "f64xmul (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_223, "f64xmul", "f64xmul (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_224, "f64xmul", "f64xmul (unsigned short int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_225, "f64xmul", "f64xmul (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_226, "f64xmul", "f64xmul (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_227, "f64xmul", "f64xmul (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_228, "f64xmul", "f64xmul (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_229, "f64xmul", "f64xmul (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_230, "f64xmul", "f64xmul (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_231, "f64xmul", "f64xmul (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_232, "f64xmul", "f64xmul (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_233, "f64xmul", "f64xmul (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_234, "f64xmul", "f64xmul (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_235, "f64xmul", "f64xmul (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_236, "f64xmul", "f64xmul (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_237, "f64xmul", "f64xmul (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_238, "f64xmul", "f64xmul (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_239, "f64xmul", "f64xmul (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_240, "f64xmul", "f64xmul (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_241, "f64xmul", "f64xmul (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_242, "f64xmul", "f64xmul (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_243, "f64xmul", "f64xmul (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_244, "f64xmul", "f64xmul (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_245, "f64xmul", "f64xmul (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_246, "f64xmul", "f64xmul (int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_247, "f64xmul", "f64xmul (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_248, "f64xmul", "f64xmul (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_249, "f64xmul", "f64xmul (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_250, "f64xmul", "f64xmul (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_251, "f64xmul", "f64xmul (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_252, "f64xmul", "f64xmul (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_253, "f64xmul", "f64xmul (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_254, "f64xmul", "f64xmul (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_255, "f64xmul", "f64xmul (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_256, "f64xmul", "f64xmul (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_257, "f64xmul", "f64xmul (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_258, "f64xmul", "f64xmul (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_259, "f64xmul", "f64xmul (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_260, "f64xmul", "f64xmul (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_261, "f64xmul", "f64xmul (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_262, "f64xmul", "f64xmul (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_263, "f64xmul", "f64xmul (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_264, "f64xmul", "f64xmul (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_265, "f64xmul", "f64xmul (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_266, "f64xmul", "f64xmul (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_267, "f64xmul", "f64xmul (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_268, "f64xmul", "f64xmul (unsigned int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_269, "f64xmul", "f64xmul (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_270, "f64xmul", "f64xmul (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_271, "f64xmul", "f64xmul (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_272, "f64xmul", "f64xmul (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_273, "f64xmul", "f64xmul (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_274, "f64xmul", "f64xmul (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_275, "f64xmul", "f64xmul (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_276, "f64xmul", "f64xmul (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_277, "f64xmul", "f64xmul (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_278, "f64xmul", "f64xmul (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_279, "f64xmul", "f64xmul (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_280, "f64xmul", "f64xmul (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_281, "f64xmul", "f64xmul (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_282, "f64xmul", "f64xmul (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_283, "f64xmul", "f64xmul (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_284, "f64xmul", "f64xmul (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_285, "f64xmul", "f64xmul (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_286, "f64xmul", "f64xmul (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_287, "f64xmul", "f64xmul (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_288, "f64xmul", "f64xmul (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_289, "f64xmul", "f64xmul (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_290, "f64xmul", "f64xmul (long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_291, "f64xmul", "f64xmul (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_292, "f64xmul", "f64xmul (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_293, "f64xmul", "f64xmul (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_294, "f64xmul", "f64xmul (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_295, "f64xmul", "f64xmul (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_296, "f64xmul", "f64xmul (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_297, "f64xmul", "f64xmul (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_298, "f64xmul", "f64xmul (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_299, "f64xmul", "f64xmul (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_300, "f64xmul", "f64xmul (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_301, "f64xmul", "f64xmul (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_302, "f64xmul", "f64xmul (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_303, "f64xmul", "f64xmul (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_304, "f64xmul", "f64xmul (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_305, "f64xmul", "f64xmul (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_306, "f64xmul", "f64xmul (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_307, "f64xmul", "f64xmul (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_308, "f64xmul", "f64xmul (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_309, "f64xmul", "f64xmul (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_310, "f64xmul", "f64xmul (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_311, "f64xmul", "f64xmul (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_312, "f64xmul", "f64xmul (unsigned long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_313, "f64xmul", "f64xmul (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_314, "f64xmul", "f64xmul (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_315, "f64xmul", "f64xmul (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_316, "f64xmul", "f64xmul (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_317, "f64xmul", "f64xmul (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_318, "f64xmul", "f64xmul (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_319, "f64xmul", "f64xmul (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_320, "f64xmul", "f64xmul (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_321, "f64xmul", "f64xmul (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_322, "f64xmul", "f64xmul (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_323, "f64xmul", "f64xmul (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_324, "f64xmul", "f64xmul (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_325, "f64xmul", "f64xmul (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_326, "f64xmul", "f64xmul (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_327, "f64xmul", "f64xmul (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_328, "f64xmul", "f64xmul (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_329, "f64xmul", "f64xmul (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_330, "f64xmul", "f64xmul (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_331, "f64xmul", "f64xmul (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_332, "f64xmul", "f64xmul (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_333, "f64xmul", "f64xmul (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_334, "f64xmul", "f64xmul (long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_335, "f64xmul", "f64xmul (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_336, "f64xmul", "f64xmul (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_337, "f64xmul", "f64xmul (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_338, "f64xmul", "f64xmul (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_339, "f64xmul", "f64xmul (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_340, "f64xmul", "f64xmul (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_341, "f64xmul", "f64xmul (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_342, "f64xmul", "f64xmul (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_343, "f64xmul", "f64xmul (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_344, "f64xmul", "f64xmul (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_345, "f64xmul", "f64xmul (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_346, "f64xmul", "f64xmul (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_347, "f64xmul", "f64xmul (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_348, "f64xmul", "f64xmul (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_349, "f64xmul", "f64xmul (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_350, "f64xmul", "f64xmul (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_351, "f64xmul", "f64xmul (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_352, "f64xmul", "f64xmul (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_353, "f64xmul", "f64xmul (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_354, "f64xmul", "f64xmul (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_355, "f64xmul", "f64xmul (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_356, "f64xmul", "f64xmul (unsigned long long int, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_357, "f64xmul", "f64xmul (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_358, "f64xmul", "f64xmul (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_359, "f64xmul", "f64xmul (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_360, "f64xmul", "f64xmul (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_361, "f64xmul", "f64xmul (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_362, "f64xmul", "f64xmul (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_363, "f64xmul", "f64xmul (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_364, "f64xmul", "f64xmul (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_365, "f64xmul", "f64xmul (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_366, "f64xmul", "f64xmul (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_367, "f64xmul", "f64xmul (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_368, "f64xmul", "f64xmul (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_369, "f64xmul", "f64xmul (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_370, "f64xmul", "f64xmul (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_371, "f64xmul", "f64xmul (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_372, "f64xmul", "f64xmul (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_373, "f64xmul", "f64xmul (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xmul_374, "f64xmul", "f64xmul (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xmul_375, "f64xmul", "f64xmul (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xmul_376, "f64xmul", "f64xmul (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xmul_377, "f64xmul", "f64xmul (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xmul_378, "f64xmul", "f64xmul (__int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xmul_379, "f64xmul", "f64xmul (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_380, "f64xmul", "f64xmul (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_381, "f64xmul", "f64xmul (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_382, "f64xmul", "f64xmul (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_383, "f64xmul", "f64xmul (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_384, "f64xmul", "f64xmul (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_385, "f64xmul", "f64xmul (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_386, "f64xmul", "f64xmul (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_387, "f64xmul", "f64xmul (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_388, "f64xmul", "f64xmul (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_389, "f64xmul", "f64xmul (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_390, "f64xmul", "f64xmul (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_391, "f64xmul", "f64xmul (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_392, "f64xmul", "f64xmul (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_393, "f64xmul", "f64xmul (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_394, "f64xmul", "f64xmul (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_395, "f64xmul", "f64xmul (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64xmul_396, "f64xmul", "f64xmul (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64xmul_397, "f64xmul", "f64xmul (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64xmul_398, "f64xmul", "f64xmul (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64xmul_399, "f64xmul", "f64xmul (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64xmul_400, "f64xmul", "f64xmul (unsigned __int128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64xmul_401, "f64xmul", "f64xmul (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_402, "f64xmul", "f64xmul (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_403, "f64xmul", "f64xmul (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_404, "f64xmul", "f64xmul (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_405, "f64xmul", "f64xmul (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_406, "f64xmul", "f64xmul (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_407, "f64xmul", "f64xmul (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_408, "f64xmul", "f64xmul (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_409, "f64xmul", "f64xmul (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_410, "f64xmul", "f64xmul (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_411, "f64xmul", "f64xmul (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_412, "f64xmul", "f64xmul (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_413, "f64xmul", "f64xmul (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_414, "f64xmul", "f64xmul (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_415, "f64xmul", "f64xmul (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_416, "f64xmul", "f64xmul (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_417, "f64xmul", "f64xmul (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_418, "f64xmul", "f64xmul (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_419, "f64xmul", "f64xmul (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_420, "f64xmul", "f64xmul (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_421, "f64xmul", "f64xmul (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_422, "f64xmul", "f64xmul (enum e, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_423, "f64xmul", "f64xmul (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_424, "f64xmul", "f64xmul (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_425, "f64xmul", "f64xmul (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_426, "f64xmul", "f64xmul (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_427, "f64xmul", "f64xmul (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_428, "f64xmul", "f64xmul (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_429, "f64xmul", "f64xmul (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_430, "f64xmul", "f64xmul (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_431, "f64xmul", "f64xmul (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_432, "f64xmul", "f64xmul (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_433, "f64xmul", "f64xmul (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_434, "f64xmul", "f64xmul (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_435, "f64xmul", "f64xmul (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_436, "f64xmul", "f64xmul (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_437, "f64xmul", "f64xmul (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_438, "f64xmul", "f64xmul (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_439, "f64xmul", "f64xmul (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_440, "f64xmul", "f64xmul (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_441, "f64xmul", "f64xmul (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_442, "f64xmul", "f64xmul (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_443, "f64xmul", "f64xmul (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_444, "f64xmul", "f64xmul (_Bool, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_445, "f64xmul", "f64xmul (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_446, "f64xmul", "f64xmul (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_447, "f64xmul", "f64xmul (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_448, "f64xmul", "f64xmul (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_449, "f64xmul", "f64xmul (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_450, "f64xmul", "f64xmul (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_451, "f64xmul", "f64xmul (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_452, "f64xmul", "f64xmul (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_453, "f64xmul", "f64xmul (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_454, "f64xmul", "f64xmul (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_455, "f64xmul", "f64xmul (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_456, "f64xmul", "f64xmul (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_457, "f64xmul", "f64xmul (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_458, "f64xmul", "f64xmul (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_459, "f64xmul", "f64xmul (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_460, "f64xmul", "f64xmul (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_461, "f64xmul", "f64xmul (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64xmul_462, "f64xmul", "f64xmul (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64xmul_463, "f64xmul", "f64xmul (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64xmul_464, "f64xmul", "f64xmul (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64xmul_465, "f64xmul", "f64xmul (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64xmul_466, "f64xmul", "f64xmul (bit_field, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64xmul_467, "f64xmul", "f64xmul (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_468, "f64xmul", "f64xmul (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_469, "f64xmul", "f64xmul (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_470, "f64xmul", "f64xmul (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_471, "f64xmul", "f64xmul (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_472, "f64xmul", "f64xmul (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_473, "f64xmul", "f64xmul (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_474, "f64xmul", "f64xmul (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_475, "f64xmul", "f64xmul (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_476, "f64xmul", "f64xmul (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_477, "f64xmul", "f64xmul (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_478, "f64xmul", "f64xmul (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_479, "f64xmul", "f64xmul (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64xmul_480, "f64xmul", "f64xmul (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_481, "f64xmul", "f64xmul (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_482, "f64xmul", "f64xmul (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64X && (defined HUGE_VAL_F128))
    { test_f64xmul_483, "f64xmul", "f64xmul (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
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
