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
(rintf16) (_Float16 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#endif
float
(rintf) (float arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(rintf32) (_Float32 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(rintf32x) (_Float32x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#endif
double
(rint) (double arg0 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
long double
(rintl) (long double arg0 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(rintf64) (_Float64 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(rintf64x) (_Float64x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(rintf128) (_Float128 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "rint";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_rint_0 (void)
{
  extern typeof (rint (vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = rint (vol_var__Float16);
}
#endif
static void
test_rint_1 (void)
{
  extern typeof (rint (vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = rint (vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_rint_2 (void)
{
  extern typeof (rint (vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = rint (vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_rint_3 (void)
{
  extern typeof (rint (vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = rint (vol_var__Float32x);
}
#endif
static void
test_rint_4 (void)
{
  extern typeof (rint (vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_double);
}
static void
test_rint_5 (void)
{
  extern typeof (rint (vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = rint (vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_rint_6 (void)
{
  extern typeof (rint (vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = rint (vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_rint_7 (void)
{
  extern typeof (rint (vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = rint (vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_rint_8 (void)
{
  extern typeof (rint (vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = rint (vol_var__Float128);
}
#endif
static void
test_rint_9 (void)
{
  extern typeof (rint (vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_char);
}
static void
test_rint_10 (void)
{
  extern typeof (rint (vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_signed_char);
}
static void
test_rint_11 (void)
{
  extern typeof (rint (vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_unsigned_char);
}
static void
test_rint_12 (void)
{
  extern typeof (rint (vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_short_int);
}
static void
test_rint_13 (void)
{
  extern typeof (rint (vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_unsigned_short_int);
}
static void
test_rint_14 (void)
{
  extern typeof (rint (vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_int);
}
static void
test_rint_15 (void)
{
  extern typeof (rint (vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_unsigned_int);
}
static void
test_rint_16 (void)
{
  extern typeof (rint (vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_long_int);
}
static void
test_rint_17 (void)
{
  extern typeof (rint (vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_unsigned_long_int);
}
static void
test_rint_18 (void)
{
  extern typeof (rint (vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_long_long_int);
}
static void
test_rint_19 (void)
{
  extern typeof (rint (vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_rint_20 (void)
{
  extern typeof (rint (vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_rint_21 (void)
{
  extern typeof (rint (vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_unsigned___int128);
}
#endif
static void
test_rint_22 (void)
{
  extern typeof (rint (vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_enum_e);
}
static void
test_rint_23 (void)
{
  extern typeof (rint (vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var__Bool);
}
static void
test_rint_24 (void)
{
  extern typeof (rint (vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = rint (vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_rint_0, "rint", "rint (_Float16)", FLT16_MANT_DIG, 0 },
#endif
    { test_rint_1, "rint", "rint (float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_rint_2, "rint", "rint (_Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_rint_3, "rint", "rint (_Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_rint_4, "rint", "rint (double)", DBL_MANT_DIG, 0 },
    { test_rint_5, "rint", "rint (long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_rint_6, "rint", "rint (_Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_rint_7, "rint", "rint (_Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_rint_8, "rint", "rint (_Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_rint_9, "rint", "rint (char)", DBL_MANT_DIG, 0 },
    { test_rint_10, "rint", "rint (signed char)", DBL_MANT_DIG, 0 },
    { test_rint_11, "rint", "rint (unsigned char)", DBL_MANT_DIG, 0 },
    { test_rint_12, "rint", "rint (short int)", DBL_MANT_DIG, 0 },
    { test_rint_13, "rint", "rint (unsigned short int)", DBL_MANT_DIG, 0 },
    { test_rint_14, "rint", "rint (int)", DBL_MANT_DIG, 0 },
    { test_rint_15, "rint", "rint (unsigned int)", DBL_MANT_DIG, 0 },
    { test_rint_16, "rint", "rint (long int)", DBL_MANT_DIG, 0 },
    { test_rint_17, "rint", "rint (unsigned long int)", DBL_MANT_DIG, 0 },
    { test_rint_18, "rint", "rint (long long int)", DBL_MANT_DIG, 0 },
    { test_rint_19, "rint", "rint (unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_rint_20, "rint", "rint (__int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_rint_21, "rint", "rint (unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_rint_22, "rint", "rint (enum e)", DBL_MANT_DIG, 0 },
    { test_rint_23, "rint", "rint (_Bool)", DBL_MANT_DIG, 0 },
    { test_rint_24, "rint", "rint (bit_field)", DBL_MANT_DIG, 0 },
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
