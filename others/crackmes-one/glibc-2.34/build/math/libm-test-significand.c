/* Test significand.
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

static const struct test_f_f_data significand_test_data[] =
  {
#if !TEST_FLOATN
    /* significand returns the mantissa of the exponential
       representation.  Tests for infinities, zero and NaNs reflect
       the implementation (including possibility of "inexact" and
       variations between architectures) rather than any
       specification.  */
    { "qNaN", qnan_value, { qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, INVALID_EXCEPTION_OK } },
    { "-qNaN", -qnan_value, { qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, INVALID_EXCEPTION_OK } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "inf", plus_infty, { plus_infty, INVALID_EXCEPTION_OK }, { plus_infty, INVALID_EXCEPTION_OK }, { plus_infty, INVALID_EXCEPTION_OK }, { plus_infty, INVALID_EXCEPTION_OK } },
    { "-inf", minus_infty, { minus_infty, INVALID_EXCEPTION_OK }, { minus_infty, INVALID_EXCEPTION_OK }, { minus_infty, INVALID_EXCEPTION_OK }, { minus_infty, INVALID_EXCEPTION_OK } },
    { "0", 0, { 0, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK }, { 0, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK }, { 0, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK }, { 0, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK } },
    { "-0", minus_zero, { minus_zero, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK }, { minus_zero, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK }, { minus_zero, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK }, { minus_zero, INVALID_EXCEPTION_OK|DIVIDE_BY_ZERO_EXCEPTION_OK } },
    { "min_value", min_value, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-min_value", -min_value, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "min_subnorm_value", min_subnorm_value, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-min_subnorm_value", -min_subnorm_value, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "1.0", LIT (1.0), { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-1.0", LIT (-1.0), { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "4.0", LIT (4.0), { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-4.0", LIT (-4.0), { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "6.0", LIT (6.0), { LIT (1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-6.0", LIT (-6.0), { LIT (-1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.5), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "8.0", LIT (8.0), { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-8.0", LIT (-8.0), { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (-1.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
#endif
  };

static void
significand_test (void)
{
#if !TEST_FLOATN
  ALL_RM_TEST (significand, 1, significand_test_data, RUN_TEST_LOOP_f_f, END);
#endif
}

static void
do_test (void)
{
  significand_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
