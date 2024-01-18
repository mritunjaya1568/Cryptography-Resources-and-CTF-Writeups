/* Test cimag.
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

static const struct test_c_f_data cimag_test_data[] =
  {
    { "1.0 + 0.0 i", LIT (1.0), LIT (0.0), { LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "1.0 - 0 i", LIT (1.0), minus_zero, { minus_zero, NO_INEXACT_EXCEPTION }, { minus_zero, NO_INEXACT_EXCEPTION }, { minus_zero, NO_INEXACT_EXCEPTION }, { minus_zero, NO_INEXACT_EXCEPTION } },
    { "1.0 + qNaN i", LIT (1.0), qnan_value, { qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, NO_INEXACT_EXCEPTION } },
    { "1.0 + sNaN i", LIT (1.0), snan_value, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION } },
    { "qNaN + qNaN i", qnan_value, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, NO_INEXACT_EXCEPTION } },
    { "qNaN + sNaN i", qnan_value, snan_value, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION } },
    { "sNaN + qNaN i", snan_value, qnan_value, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { qnan_value, TEST_SNAN|NO_INEXACT_EXCEPTION } },
    { "sNaN + sNaN i", snan_value, snan_value, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION }, { snan_value, TEST_SNAN|NO_INEXACT_EXCEPTION } },
    { "1.0 + inf i", LIT (1.0), plus_infty, { plus_infty, NO_INEXACT_EXCEPTION }, { plus_infty, NO_INEXACT_EXCEPTION }, { plus_infty, NO_INEXACT_EXCEPTION }, { plus_infty, NO_INEXACT_EXCEPTION } },
    { "1.0 - inf i", LIT (1.0), minus_infty, { minus_infty, NO_INEXACT_EXCEPTION }, { minus_infty, NO_INEXACT_EXCEPTION }, { minus_infty, NO_INEXACT_EXCEPTION }, { minus_infty, NO_INEXACT_EXCEPTION } },
    { "2.0 + 3.0 i", LIT (2.0), LIT (3.0), { LIT (3.0), NO_INEXACT_EXCEPTION }, { LIT (3.0), NO_INEXACT_EXCEPTION }, { LIT (3.0), NO_INEXACT_EXCEPTION }, { LIT (3.0), NO_INEXACT_EXCEPTION } },
  };

static void
cimag_test (void)
{
  ALL_RM_TEST (cimag, 1, cimag_test_data, RUN_TEST_LOOP_c_f, END);
}

static void
do_test (void)
{
  cimag_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
