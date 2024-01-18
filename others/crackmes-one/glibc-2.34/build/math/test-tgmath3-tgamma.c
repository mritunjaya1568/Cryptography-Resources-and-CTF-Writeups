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
(tgammaf16) (_Float16 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#endif
float
(tgammaf) (float arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(tgammaf32) (_Float32 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(tgammaf32x) (_Float32x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#endif
double
(tgamma) (double arg0 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
long double
(tgammal) (long double arg0 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(tgammaf64) (_Float64 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(tgammaf64x) (_Float64x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(tgammaf128) (_Float128 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "tgamma";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_tgamma_0 (void)
{
  extern typeof (tgamma (vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = tgamma (vol_var__Float16);
}
#endif
static void
test_tgamma_1 (void)
{
  extern typeof (tgamma (vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = tgamma (vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_tgamma_2 (void)
{
  extern typeof (tgamma (vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = tgamma (vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_tgamma_3 (void)
{
  extern typeof (tgamma (vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = tgamma (vol_var__Float32x);
}
#endif
static void
test_tgamma_4 (void)
{
  extern typeof (tgamma (vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_double);
}
static void
test_tgamma_5 (void)
{
  extern typeof (tgamma (vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = tgamma (vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_tgamma_6 (void)
{
  extern typeof (tgamma (vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = tgamma (vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_tgamma_7 (void)
{
  extern typeof (tgamma (vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = tgamma (vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_tgamma_8 (void)
{
  extern typeof (tgamma (vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = tgamma (vol_var__Float128);
}
#endif
static void
test_tgamma_9 (void)
{
  extern typeof (tgamma (vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_char);
}
static void
test_tgamma_10 (void)
{
  extern typeof (tgamma (vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_signed_char);
}
static void
test_tgamma_11 (void)
{
  extern typeof (tgamma (vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_unsigned_char);
}
static void
test_tgamma_12 (void)
{
  extern typeof (tgamma (vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_short_int);
}
static void
test_tgamma_13 (void)
{
  extern typeof (tgamma (vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_unsigned_short_int);
}
static void
test_tgamma_14 (void)
{
  extern typeof (tgamma (vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_int);
}
static void
test_tgamma_15 (void)
{
  extern typeof (tgamma (vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_unsigned_int);
}
static void
test_tgamma_16 (void)
{
  extern typeof (tgamma (vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_long_int);
}
static void
test_tgamma_17 (void)
{
  extern typeof (tgamma (vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_unsigned_long_int);
}
static void
test_tgamma_18 (void)
{
  extern typeof (tgamma (vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_long_long_int);
}
static void
test_tgamma_19 (void)
{
  extern typeof (tgamma (vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_tgamma_20 (void)
{
  extern typeof (tgamma (vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_tgamma_21 (void)
{
  extern typeof (tgamma (vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_unsigned___int128);
}
#endif
static void
test_tgamma_22 (void)
{
  extern typeof (tgamma (vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_enum_e);
}
static void
test_tgamma_23 (void)
{
  extern typeof (tgamma (vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var__Bool);
}
static void
test_tgamma_24 (void)
{
  extern typeof (tgamma (vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = tgamma (vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_tgamma_0, "tgamma", "tgamma (_Float16)", FLT16_MANT_DIG, 0 },
#endif
    { test_tgamma_1, "tgamma", "tgamma (float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_tgamma_2, "tgamma", "tgamma (_Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_tgamma_3, "tgamma", "tgamma (_Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_tgamma_4, "tgamma", "tgamma (double)", DBL_MANT_DIG, 0 },
    { test_tgamma_5, "tgamma", "tgamma (long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_tgamma_6, "tgamma", "tgamma (_Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_tgamma_7, "tgamma", "tgamma (_Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_tgamma_8, "tgamma", "tgamma (_Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_tgamma_9, "tgamma", "tgamma (char)", DBL_MANT_DIG, 0 },
    { test_tgamma_10, "tgamma", "tgamma (signed char)", DBL_MANT_DIG, 0 },
    { test_tgamma_11, "tgamma", "tgamma (unsigned char)", DBL_MANT_DIG, 0 },
    { test_tgamma_12, "tgamma", "tgamma (short int)", DBL_MANT_DIG, 0 },
    { test_tgamma_13, "tgamma", "tgamma (unsigned short int)", DBL_MANT_DIG, 0 },
    { test_tgamma_14, "tgamma", "tgamma (int)", DBL_MANT_DIG, 0 },
    { test_tgamma_15, "tgamma", "tgamma (unsigned int)", DBL_MANT_DIG, 0 },
    { test_tgamma_16, "tgamma", "tgamma (long int)", DBL_MANT_DIG, 0 },
    { test_tgamma_17, "tgamma", "tgamma (unsigned long int)", DBL_MANT_DIG, 0 },
    { test_tgamma_18, "tgamma", "tgamma (long long int)", DBL_MANT_DIG, 0 },
    { test_tgamma_19, "tgamma", "tgamma (unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_tgamma_20, "tgamma", "tgamma (__int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_tgamma_21, "tgamma", "tgamma (unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_tgamma_22, "tgamma", "tgamma (enum e)", DBL_MANT_DIG, 0 },
    { test_tgamma_23, "tgamma", "tgamma (_Bool)", DBL_MANT_DIG, 0 },
    { test_tgamma_24, "tgamma", "tgamma (bit_field)", DBL_MANT_DIG, 0 },
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
