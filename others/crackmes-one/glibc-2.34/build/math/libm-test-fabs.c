/* Test fabs.
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

static const struct test_f_f_data fabs_test_data[] =
  {
    { "0", 0, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-0", minus_zero, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { 0, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },

    { "inf", plus_infty, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-inf", minus_infty, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { plus_infty, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN } },
    { "sNaN", snan_value, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN } },
    { "-sNaN", -snan_value, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN } },

    { "min_subnorm_value", min_subnorm_value, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "min_value", min_value, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "max_value", max_value, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-min_subnorm_value", -min_subnorm_value, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_subnorm_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-min_value", -min_value, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { min_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-max_value", -max_value, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { max_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "38.0", LIT (38.0), { LIT (38.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (38.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (38.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { LIT (38.0), NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-lit_e", -lit_e, { lit_e, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { lit_e, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { lit_e, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { lit_e, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
  };

static void
fabs_test (void)
{
  ALL_RM_TEST (fabs, 1, fabs_test_data, RUN_TEST_LOOP_f_f, END);
}

static void
do_test (void)
{
  fabs_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
