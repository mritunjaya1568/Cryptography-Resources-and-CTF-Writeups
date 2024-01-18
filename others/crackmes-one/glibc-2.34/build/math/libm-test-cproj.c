/* Test cproj.
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

static const struct test_c_c_data cproj_test_data[] =
  {
    { "0.0 + 0.0 i", LIT (0.0), LIT (0.0), { LIT (0.0), LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (0.0), LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (0.0), LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (0.0), LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-0 - 0 i", minus_zero, minus_zero, { minus_zero, minus_zero, NO_INEXACT_EXCEPTION }, { minus_zero, minus_zero, NO_INEXACT_EXCEPTION }, { minus_zero, minus_zero, NO_INEXACT_EXCEPTION }, { minus_zero, minus_zero, NO_INEXACT_EXCEPTION } },
    { "0.0 - 0 i", LIT (0.0), minus_zero, { LIT (0.0), minus_zero, NO_INEXACT_EXCEPTION }, { LIT (0.0), minus_zero, NO_INEXACT_EXCEPTION }, { LIT (0.0), minus_zero, NO_INEXACT_EXCEPTION }, { LIT (0.0), minus_zero, NO_INEXACT_EXCEPTION } },
    { "-0 + 0.0 i", minus_zero, LIT (0.0), { minus_zero, LIT (0.0), NO_INEXACT_EXCEPTION }, { minus_zero, LIT (0.0), NO_INEXACT_EXCEPTION }, { minus_zero, LIT (0.0), NO_INEXACT_EXCEPTION }, { minus_zero, LIT (0.0), NO_INEXACT_EXCEPTION } },

    { "qNaN + qNaN i", qnan_value, qnan_value, { qnan_value, qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, qnan_value, NO_INEXACT_EXCEPTION }, { qnan_value, qnan_value, NO_INEXACT_EXCEPTION } },

    { "+0 + qNaN i", plus_zero, qnan_value, { plus_zero, qnan_value, NO_INEXACT_EXCEPTION }, { plus_zero, qnan_value, NO_INEXACT_EXCEPTION }, { plus_zero, qnan_value, NO_INEXACT_EXCEPTION }, { plus_zero, qnan_value, NO_INEXACT_EXCEPTION } },
    { "-0 + qNaN i", minus_zero, qnan_value, { minus_zero, qnan_value, NO_INEXACT_EXCEPTION }, { minus_zero, qnan_value, NO_INEXACT_EXCEPTION }, { minus_zero, qnan_value, NO_INEXACT_EXCEPTION }, { minus_zero, qnan_value, NO_INEXACT_EXCEPTION } },
    { "qNaN + +0 i", qnan_value, plus_zero, { qnan_value, plus_zero, NO_INEXACT_EXCEPTION }, { qnan_value, plus_zero, NO_INEXACT_EXCEPTION }, { qnan_value, plus_zero, NO_INEXACT_EXCEPTION }, { qnan_value, plus_zero, NO_INEXACT_EXCEPTION } },
    { "qNaN - 0 i", qnan_value, minus_zero, { qnan_value, minus_zero, NO_INEXACT_EXCEPTION }, { qnan_value, minus_zero, NO_INEXACT_EXCEPTION }, { qnan_value, minus_zero, NO_INEXACT_EXCEPTION }, { qnan_value, minus_zero, NO_INEXACT_EXCEPTION } },

    { "1.0 + qNaN i", LIT (1.0), qnan_value, { LIT (1.0), qnan_value, NO_INEXACT_EXCEPTION }, { LIT (1.0), qnan_value, NO_INEXACT_EXCEPTION }, { LIT (1.0), qnan_value, NO_INEXACT_EXCEPTION }, { LIT (1.0), qnan_value, NO_INEXACT_EXCEPTION } },
    { "-1.0 + qNaN i", LIT (-1.0), qnan_value, { LIT (-1.0), qnan_value, NO_INEXACT_EXCEPTION }, { LIT (-1.0), qnan_value, NO_INEXACT_EXCEPTION }, { LIT (-1.0), qnan_value, NO_INEXACT_EXCEPTION }, { LIT (-1.0), qnan_value, NO_INEXACT_EXCEPTION } },
    { "qNaN + 1.0 i", qnan_value, LIT (1.0), { qnan_value, LIT (1.0), NO_INEXACT_EXCEPTION }, { qnan_value, LIT (1.0), NO_INEXACT_EXCEPTION }, { qnan_value, LIT (1.0), NO_INEXACT_EXCEPTION }, { qnan_value, LIT (1.0), NO_INEXACT_EXCEPTION } },
    { "qNaN - 1.0 i", qnan_value, LIT (-1.0), { qnan_value, LIT (-1.0), NO_INEXACT_EXCEPTION }, { qnan_value, LIT (-1.0), NO_INEXACT_EXCEPTION }, { qnan_value, LIT (-1.0), NO_INEXACT_EXCEPTION }, { qnan_value, LIT (-1.0), NO_INEXACT_EXCEPTION } },

    { "inf + inf i", plus_infty, plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "inf - inf i", plus_infty, minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },
    { "-inf + inf i", minus_infty, plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-inf - inf i", minus_infty, minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },

    { "inf + +0 i", plus_infty, plus_zero, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "inf - 0 i", plus_infty, minus_zero, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },
    { "-inf + +0 i", minus_infty, plus_zero, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-inf - 0 i", minus_infty, minus_zero, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },

    { "+0 + inf i", plus_zero, plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "+0 - inf i", plus_zero, minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },
    { "-0 + inf i", minus_zero, plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-0 - inf i", minus_zero, minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },

    { "inf + 1.0 i", plus_infty, LIT (1.0), { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "inf - 1.0 i", plus_infty, LIT (-1.0), { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },
    { "-inf + 1.0 i", minus_infty, LIT (1.0), { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-inf - 1.0 i", minus_infty, LIT (-1.0), { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },

    { "1.0 + inf i", LIT (1.0), plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "1.0 - inf i", LIT (1.0), minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },
    { "-1.0 + inf i", LIT (-1.0), plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-1.0 - inf i", LIT (-1.0), minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },

    { "inf + qNaN i", plus_infty, qnan_value, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "inf - qNaN i", plus_infty, -qnan_value, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },
    { "-inf + qNaN i", minus_infty, qnan_value, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-inf - qNaN i", minus_infty, -qnan_value, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },

    { "qNaN + inf i", qnan_value, plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "qNaN - inf i", qnan_value, minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },
    { "-qNaN + inf i", -qnan_value, plus_infty, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION }, { plus_infty, LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "-qNaN - inf i", -qnan_value, minus_infty, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION }, { plus_infty, minus_zero, NO_INEXACT_EXCEPTION } },

    { "1.0 + 0.0 i", LIT (1.0), LIT (0.0), { LIT (1.0), LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (1.0), LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (1.0), LIT (0.0), NO_INEXACT_EXCEPTION }, { LIT (1.0), LIT (0.0), NO_INEXACT_EXCEPTION } },
    { "2.0 + 3.0 i", LIT (2.0), LIT (3.0), { LIT (2.0), LIT (3.0), NO_INEXACT_EXCEPTION }, { LIT (2.0), LIT (3.0), NO_INEXACT_EXCEPTION }, { LIT (2.0), LIT (3.0), NO_INEXACT_EXCEPTION }, { LIT (2.0), LIT (3.0), NO_INEXACT_EXCEPTION } },
  };

static void
cproj_test (void)
{
  ALL_RM_TEST (cproj, 1, cproj_test_data, RUN_TEST_LOOP_c_c, END_COMPLEX);
}

static void
do_test (void)
{
  cproj_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
