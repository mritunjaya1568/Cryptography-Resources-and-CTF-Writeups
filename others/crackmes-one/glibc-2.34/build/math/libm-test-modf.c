/* Test modf.
   Copyright (C) 1997-2021 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include "libm-test-driver.c"

static const struct test_fF_f1_data modf_test_data[] =
  {
    { "inf", plus_infty, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_infty }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_infty }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_infty }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_infty } },
    { "-inf", minus_infty, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_infty }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_infty }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_infty }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_infty } },
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, qnan_value } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|INVALID_EXCEPTION, 1, qnan_value } },
    { "0", 0, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 } },
    { "-0", minus_zero, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero } },
    { "min_value", min_value, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 } },
    { "-min_value", -min_value, { -min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { -min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { -min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { -min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero } },
    { "min_subnorm_value", min_subnorm_value, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 0 } },
    { "-min_subnorm_value", -min_subnorm_value, { -min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { -min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { -min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero }, { -min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, minus_zero } },
    { "max_value", max_value, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|XFAIL_IBM128_LIBGCC, 1, max_value }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|0, 1, max_value }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|XFAIL_IBM128_LIBGCC, 1, max_value }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|XFAIL_IBM128_LIBGCC, 1, max_value } },
    { "-max_value", -max_value, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|XFAIL_IBM128_LIBGCC, 1, -max_value }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|0, 1, -max_value }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|XFAIL_IBM128_LIBGCC, 1, -max_value }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|XFAIL_IBM128_LIBGCC, 1, -max_value } },
    { "1.5", LIT (1.5), { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 1 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 1 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 1 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 1 } },
    { "2.5", LIT (2.5), { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 2 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 2 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 2 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 2 } },
    { "-2.5", LIT (-2.5), { LIT (-0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -2 }, { LIT (-0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -2 }, { LIT (-0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -2 }, { LIT (-0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -2 } },
    { "20", 20, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 20 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 20 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 20 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 20 } },
    { "21", 21, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 21 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 21 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 21 }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 21 } },
    { "-20", -20, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -20 }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -20 }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -20 }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -20 } },
    { "-21", -21, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -21 }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -21 }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -21 }, { minus_zero, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, -21 } },
    { "89.5", LIT (89.5), { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 89 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 89 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 89 }, { LIT (0.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, 89 } },
  };

static void
modf_test (void)
{
  FLOAT x;

  ALL_RM_TEST (modf, 1, modf_test_data, RUN_TEST_LOOP_fF_f1, END, x);
}

static void
do_test (void)
{
  modf_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
