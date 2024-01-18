/* Test yn.
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

static const struct test_if_f_data yn_test_data[] =
  {
    /* yn is the Bessel function of the second kind of order n */
    /* yn (0, x) == y0 (x)  */
    { "0, -1.0", 0, LIT (-1.0), { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "0, -min_value", 0, -min_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "0, -min_subnorm_value", 0, -min_subnorm_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "0, -max_value", 0, -max_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "0, -inf", 0, minus_infty, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "0, 0.0", 0, LIT (0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "0, -0.0", 0, LIT (-0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "0, qNaN", 0, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "0, -qNaN", 0, -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "0, sNaN", 0, snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "0, -sNaN", 0, -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "0, inf", 0, plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },

    /* yn (1, x) == y1 (x)  */
    { "1, -1.0", 1, LIT (-1.0), { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "1, -min_value", 1, -min_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "1, -min_subnorm_value", 1, -min_subnorm_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "1, -max_value", 1, -max_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "1, -inf", 1, minus_infty, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "1, 0.0", 1, LIT (0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "1, -0.0", 1, LIT (-0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "1, inf", 1, plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "1, qNaN", 1, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "1, -qNaN", 1, -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "1, sNaN", 1, snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "1, -sNaN", 1, -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

    /* yn (-1, x) == -y1 (x).  */
    { "-1, -1.0", -1, LIT (-1.0), { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-1, -min_value", -1, -min_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-1, -min_subnorm_value", -1, -min_subnorm_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-1, -max_value", -1, -max_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-1, -inf", -1, minus_infty, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-1, 0.0", -1, LIT (0.0), { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "-1, -0.0", -1, LIT (-0.0), { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { plus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "-1, inf", -1, plus_infty, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "-1, qNaN", -1, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-1, -qNaN", -1, -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-1, sNaN", -1, snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-1, -sNaN", -1, -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

    /* yn (2, x).  */
    { "2, -1.0", 2, LIT (-1.0), { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "2, -min_value", 2, -min_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "2, -min_subnorm_value", 2, -min_subnorm_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "2, -max_value", 2, -max_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "2, -inf", 2, minus_infty, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "2, 0.0", 2, LIT (0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "2, -0.0", 2, LIT (-0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "2, inf", 2, plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "2, qNaN", 2, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "2, -qNaN", 2, -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "2, sNaN", 2, snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "2, -sNaN", 2, -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

    /* yn (-2, x) == yn (2, x).  */
    { "-2, -1.0", -2, LIT (-1.0), { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-2, -min_value", -2, -min_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-2, -min_subnorm_value", -2, -min_subnorm_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-2, -max_value", -2, -max_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-2, -inf", -2, minus_infty, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-2, 0.0", -2, LIT (0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "-2, -0.0", -2, LIT (-0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "-2, inf", -2, plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "-2, qNaN", -2, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-2, -qNaN", -2, -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-2, sNaN", -2, snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-2, -sNaN", -2, -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

    /* yn (3, x)  */
    { "3, -1.0", 3, LIT (-1.0), { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "3, -min_value", 3, -min_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "3, -min_subnorm_value", 3, -min_subnorm_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "3, -max_value", 3, -max_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "3, -inf", 3, minus_infty, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "3, 0.0", 3, LIT (0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "3, -0.0", 3, LIT (-0.0), { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "3, inf", 3, plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "3, qNaN", 3, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "3, -qNaN", 3, -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "3, sNaN", 3, snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "3, -sNaN", 3, -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

    /* yn (10, x)  */
    { "10, inf", 10, plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "10, qNaN", 10, qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "10, -qNaN", 10, -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "10, sNaN", 10, snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "10, -sNaN", 10, -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

#if (TEST_COND_binary128)
    { "-1, 0x1p+0", -1, LIT (0x1p+0), { LIT (0xc.7fd903eb35ca24ef2cdf8958196p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ef2cdf8958196p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ef2cdf8958196p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ef2cdf89581968p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x2p-16384", -1, LIT (0x2p-16384), { LIT (0x5.17cc1b727220a94fe13abe8fa9a4p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a94fe13abe8fa9a8p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a94fe13abe8fa9a4p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a94fe13abe8fa9a8p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x4p-1024", -1, LIT (0x4p-1024), { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x4p-1076", -1, LIT (0x4p-1076), { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+1072), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x4p-128", -1, LIT (0x4p-128), { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x4p-16384", -1, LIT (0x4p-16384), { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d2p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4d4p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x4p-16448", -1, LIT (0x4p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x4p-16496", -1, LIT (0x4p-16496), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x8p-152", -1, LIT (0x8p-152), { LIT (0x1.45f306dc9c882a53f84eafa3ea69p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea6ap+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea69p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea6ap+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x8p-16448", -1, LIT (0x8p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-1, 0x8p-972", -1, LIT (0x8p-972), { LIT (0x1.45f306dc9c882a53f84eafa3ea69p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea6ap+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea69p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea6ap+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-10, 0x1p+0", -10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d54p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d54p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d5p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d5p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x2p-16384", -17, LIT (0x2p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x4p-1024", -17, LIT (0x4p-1024), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x4p-1076", -17, LIT (0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x4p-128", -17, LIT (0x4p-128), { LIT (0x3.075168245c52bc50fcc2e4e07482p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc50fcc2e4e07482p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc50fcc2e4e07482p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc50fcc2e4e07484p+2200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x4p-16384", -17, LIT (0x4p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x4p-16448", -17, LIT (0x4p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x4p-16496", -17, LIT (0x4p-16496), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x8p-152", -17, LIT (0x8p-152), { LIT (0x1.83a8b4122e295e287e6172703a41p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e287e6172703a41p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e287e6172703a41p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e287e6172703a42p+2592), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x8p-16448", -17, LIT (0x8p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-17, 0x8p-972", -17, LIT (0x8p-972), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x2p-16384", -2, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x4p-1024", -2, LIT (0x4p-1024), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2044), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x4p-1076", -2, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x4p-128", -2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x4p-16384", -2, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x4p-16448", -2, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x4p-16496", -2, LIT (0x4p-16496), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x8p-152", -2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x8p-16448", -2, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-2, 0x8p-972", -2, LIT (0x8p-972), { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+1936), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x2p-16384", -42, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x4p-1024", -42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x4p-1076", -42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x4p-128", -42, LIT (0x4p-128), { LIT (-0x1.d24b3c086dc0a4a202ed65d223bep+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a202ed65d223bep+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a202ed65d223bdp+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a202ed65d223bdp+5496), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x4p-16384", -42, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x4p-16448", -42, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x4p-16496", -42, LIT (0x4p-16496), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x8p-152", -42, LIT (0x8p-152), { LIT (-0x7.492cf021b70292880bb597488ef8p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b70292880bb597488ef8p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b70292880bb597488ef4p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b70292880bb597488ef4p+6460), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x8p-16448", -42, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-42, 0x8p-972", -42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x1.8p+0", 0, LIT (0x1.8p+0), { LIT (0x6.1e82c341a0d9f3154642a2005fecp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f3154642a2005ffp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f3154642a2005fecp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f3154642a2005ffp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x1p+0", 0, LIT (0x1p+0), { LIT (0x1.6980226f358df29efcc5d7926555p-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29efcc5d7926555p-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29efcc5d7926555p-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29efcc5d7926556p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x2p+0", 0, LIT (0x2p+0), { LIT (0x8.2a7fae6b46465e12cd2dc231cep-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e12cd2dc231cep-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e12cd2dc231cep-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e12cd2dc231ce08p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x2p-16384", 0, LIT (0x2p-16384), { LIT (-0x1.c3d6b7d2ef26d30dd1de0a276b55p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30dd1de0a276b54p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30dd1de0a276b54p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30dd1de0a276b54p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x2p-4", 0, LIT (0x2p-4), { LIT (-0x1.63c21c04e0ac6242f501dee07059p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242f501dee07058p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242f501dee07058p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242f501dee07058p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x4p-1024", 0, LIT (0x4p-1024), { LIT (-0x1.c30d8f820740d6f38735ef425f3p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f38735ef425f2fp+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f38735ef425f2fp+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f38735ef425f2fp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x4p-1076", 0, LIT (0x4p-1076), { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc8a8p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc8a7p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc8a7p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc8a7p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x4p-128", 0, LIT (0x4p-128), { LIT (-0x3.7ac89a91b0452b70a18baa03233p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b70a18baa03233p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b70a18baa03232ep+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b70a18baa03232ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x4p-16384", 0, LIT (0x4p-16384), { LIT (-0x1.c3cfa8608b472d66e312a9a1e87p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66e312a9a1e86fp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66e312a9a1e86fp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66e312a9a1e86fp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x4p-16448", 0, LIT (0x4p-16448), { LIT (-0x1.c59384f98330972295eacb02a1c8p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c59384f98330972295eacb02a1c7p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c59384f98330972295eacb02a1c7p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c59384f98330972295eacb02a1c7p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x4p-16496", 0, LIT (0x4p-16496), { LIT (-0x1.c6e66a6c3d1fa66f5c0ce40b2ccap+12), ERRNO_UNCHANGED }, { LIT (-0x1.c6e66a6c3d1fa66f5c0ce40b2cc9p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c6e66a6c3d1fa66f5c0ce40b2cc9p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c6e66a6c3d1fa66f5c0ce40b2cc9p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x8p+0", 0, LIT (0x8p+0), { LIT (0x3.938b44edf70581c69c0283841f7ep-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c69c0283841f7ep-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c69c0283841f7ep-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c69c0283841f8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x8p-152", 0, LIT (0x8p-152), { LIT (-0x4.1d2be18ac8272ae4e737a8c5bedp+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae4e737a8c5bedp+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae4e737a8c5beccp+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae4e737a8c5beccp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x8p-16448", 0, LIT (0x8p-16448), { LIT (-0x1.c58c75871f50f17ba71f6a7d1ee2p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17ba71f6a7d1ee2p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17ba71f6a7d1ee1p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17ba71f6a7d1ee1p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0x8p-972", 0, LIT (0x8p-972), { LIT (-0x1.abaa6497326c1dfc85863500c762p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfc85863500c762p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfc85863500c761p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfc85863500c761p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0xap+0", 0, LIT (0xap+0), { LIT (0xe.407732d02e2c469384e4d3c829cp-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469384e4d3c829cp-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469384e4d3c829cp-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469384e4d3c829c8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0, 0xcp-4", 0, LIT (0xcp-4), { LIT (-0x2.31dc12e69e478d0b847d6a37e2eep-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0b847d6a37e2eep-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0b847d6a37e2ecp-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0b847d6a37e2ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x1.8p+0", 1, LIT (0x1.8p+0), { LIT (-0x6.98d0ee4b62c3bf8ce41da4547258p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf8ce41da4547258p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf8ce41da4547254p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf8ce41da4547254p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x1p+0", 1, LIT (0x1p+0), { LIT (-0xc.7fd903eb35ca24ef2cdf89581968p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ef2cdf8958196p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ef2cdf8958196p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ef2cdf8958196p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x2p+0", 1, LIT (0x2p+0), { LIT (-0x1.b667a3914664758b0c44371e51e3p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758b0c44371e51e3p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758b0c44371e51e2p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758b0c44371e51e2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x2p-16384", 1, LIT (0x2p-16384), { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x2p-4", 1, LIT (0x2p-4), { LIT (-0x5.332f0358a050e39ed8ad27e9470cp+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e39ed8ad27e94708p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e39ed8ad27e94708p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e39ed8ad27e94708p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x4p-1024", 1, LIT (0x4p-1024), { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x4p-1076", 1, LIT (0x4p-1076), { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+1072), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x4p-128", 1, LIT (0x4p-128), { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x4p-16384", 1, LIT (0x4p-16384), { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x4p-16448", 1, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x4p-16496", 1, LIT (0x4p-16496), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x8p+0", 1, LIT (0x8p+0), { LIT (-0x2.876a681ed266c219a14b51d98a7p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c219a14b51d98a7p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c219a14b51d98a6ep-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c219a14b51d98a6ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x8p-152", 1, LIT (0x8p-152), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x8p-16448", 1, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "1, 0x8p-972", 1, LIT (0x8p-972), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0xap+0", 1, LIT (0xap+0), { LIT (0x3.fbf798f2b1e78044d16cb7250316p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044d16cb7250318p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044d16cb7250316p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044d16cb7250318p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "1, 0xcp-4", 1, LIT (0xcp-4), { LIT (-0x1.099fcbe60fd830293e0a662302e5p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd830293e0a662302e5p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd830293e0a662302e4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd830293e0a662302e4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x1p+0", 10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d54p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d54p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d5p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026d5p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x2p+0", 10, LIT (0x2p+0), { LIT (-0x1.f8a08ace256458e265b11f6890b4p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e265b11f6890b4p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e265b11f6890b3p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e265b11f6890b3p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x2p-16384", 10, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x2p-4", 10, LIT (0x2p-4), { LIT (-0x1.c36670031ba48640a65cbe373c56p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48640a65cbe373c56p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48640a65cbe373c55p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48640a65cbe373c55p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x4p-1024", 10, LIT (0x4p-1024), { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e7cp+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e78p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e78p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e78p+10244), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x4p-128", 10, LIT (0x4p-128), { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e7cp+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e78p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e78p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf65ff367b18a1e78p+1284), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x4p-16384", 10, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "10, 0x8p-972", 10, LIT (0x8p-972), { LIT (-0x1.c3344a9fa32efd97fcd9ec62879fp+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd97fcd9ec62879ep+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd97fcd9ec62879ep+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd97fcd9ec62879ep+9716), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0xap+0", 10, LIT (0xap+0), { LIT (-0x5.c1cc7c04403b705203e76c165974p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705203e76c165974p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705203e76c16597p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705203e76c16597p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "10, 0xcp-4", 10, LIT (0xcp-4), { LIT (-0x7.f2aa6c6e7de330f198c55276c6ccp+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330f198c55276c6ccp+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330f198c55276c6c8p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330f198c55276c6c8p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x2p-16384", 17, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x4p-1024", 17, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x4p-1076", 17, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x4p-128", 17, LIT (0x4p-128), { LIT (-0x3.075168245c52bc50fcc2e4e07484p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc50fcc2e4e07482p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc50fcc2e4e07482p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc50fcc2e4e07482p+2200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x4p-16384", 17, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x4p-16448", 17, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x4p-16496", 17, LIT (0x4p-16496), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x8p-152", 17, LIT (0x8p-152), { LIT (-0x1.83a8b4122e295e287e6172703a42p+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e287e6172703a41p+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e287e6172703a41p+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e287e6172703a41p+2592), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x8p-16448", 17, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "17, 0x8p-972", 17, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x1p-100", 2, LIT (0x1p-100), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x1p-10000", 2, LIT (0x1p-10000), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x1p-600", 2, LIT (0x1p-600), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+1200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x2p-16384", 2, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x4p-1024", 2, LIT (0x4p-1024), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2044), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x4p-1076", 2, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+2148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x4p-12", 2, LIT (0x4p-12), { LIT (-0x1.45f30bf4694275b4261a1ee47383p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4261a1ee47383p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4261a1ee47382p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4261a1ee47382p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x4p-128", 2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x4p-16384", 2, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x4p-16448", 2, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x4p-16496", 2, LIT (0x4p-16496), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x8p+1020", 2, LIT (0x8p+1020), { LIT (-0x1.1bd10e60877e2ce21eee868f9699p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce21eee868f9699p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce21eee868f9698p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce21eee868f9698p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x8p+124", 2, LIT (0x8p+124), { LIT (0x2.0618385b757edd9be9bff5eefacap-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9be9bff5eefaccp-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9be9bff5eefacap-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9be9bff5eefaccp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x8p+16380", 2, LIT (0x8p+16380), { LIT (0x6.c9bcc4d4937a306ec1ef5722900cp-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a306ec1ef5722901p-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a306ec1ef5722900cp-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a306ec1ef5722901p-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x8p-152", 2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x8p-16448", 2, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "2, 0x8p-972", 2, LIT (0x8p-972), { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+1936), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0xf.fffb1p+96", 2, LIT (0xf.fffb1p+96), { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee4dap-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee4dap-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee4d8p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee4d8p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0xf.ffffffffffff8p+1020", 2, LIT (0xf.ffffffffffff8p+1020), { LIT (-0x9.125bd8436acc225eb7a1cfb5fa5p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225eb7a1cfb5fa5p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225eb7a1cfb5fa48p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225eb7a1cfb5fa48p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0xf.ffffffffffffbffffffffffffcp+1020", 2, LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x5.34b8be56c9cb044a0ef191b0251p-516), ERRNO_UNCHANGED }, { LIT (0x5.34b8be56c9cb044a0ef191b0251p-516), ERRNO_UNCHANGED }, { LIT (0x5.34b8be56c9cb044a0ef191b0251p-516), ERRNO_UNCHANGED }, { LIT (0x5.34b8be56c9cb044a0ef191b02514p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "2, 0xf.fffffp+124", 2, LIT (0xf.fffffp+124), { LIT (0xc.6947737b0589955c34523821683p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955c345238216838p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955c34523821683p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955c345238216838p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x1p+0", 3, LIT (0x1p+0), { LIT (-0x5.d24efa52b4ebecd062d341fb2474p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecd062d341fb247p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecd062d341fb247p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecd062d341fb247p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x1p-100", 3, LIT (0x1p-100), { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x1p-10000", 3, LIT (0x1p-10000), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x1p-600", 3, LIT (0x1p-600), { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a8p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa9a4p+1800), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x2p+0", 3, LIT (0x2p+0), { LIT (-0x1.20b670067d2f131b0a69fbb81edfp+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131b0a69fbb81edep+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131b0a69fbb81edep+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131b0a69fbb81edep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x2p-4", 3, LIT (0x2p-4), { LIT (-0xa.34b2942d4bebea11b3e166ce96cp+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea11b3e166ce96cp+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea11b3e166ce96b8p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea11b3e166ce96b8p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x4p-1076", 3, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea6ap+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea69p+3224), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x4p-12", 3, LIT (0x4p-12), { LIT (-0x1.45f30968829afb59903f350b35d4p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb59903f350b35d4p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb59903f350b35d3p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb59903f350b35d3p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0x8p-152", 3, LIT (0x8p-152), { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d4p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4d2p+448), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0xap+0", 3, LIT (0xap+0), { LIT (-0x4.0594d980a4d38721b879194ebc38p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38721b879194ebc34p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38721b879194ebc34p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38721b879194ebc34p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "3, 0xcp-4", 3, LIT (0xcp-4), { LIT (-0xc.fcdb0fea63d9bf8f410a5bf52ff8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8f410a5bf52ffp+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8f410a5bf52ffp+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8f410a5bf52ffp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x2p-16384", 42, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x4p-1024", 42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x4p-1076", 42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x4p-128", 42, LIT (0x4p-128), { LIT (-0x1.d24b3c086dc0a4a202ed65d223bep+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a202ed65d223bep+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a202ed65d223bdp+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a202ed65d223bdp+5496), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x4p-16384", 42, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x4p-16448", 42, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x4p-16496", 42, LIT (0x4p-16496), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x8p-152", 42, LIT (0x8p-152), { LIT (-0x7.492cf021b70292880bb597488ef8p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b70292880bb597488ef8p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b70292880bb597488ef4p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b70292880bb597488ef4p+6460), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x8p-16448", 42, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "42, 0x8p-972", 42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-1, 0x1p+0", -1, LIT (0x1p+0), { LIT (0xc.7fd9p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd9p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd9p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd91p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-1, 0x4p-128", -1, LIT (0x4p-128), { LIT (0x2.8be60cp+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60cp+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60cp+124), ERRNO_UNCHANGED }, { LIT (0x2.8be61p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-1, 0x8p-152", -1, LIT (0x8p-152), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-10, 0x1p+0", -10, LIT (0x1p+0), { LIT (-0x7.3fbe6p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe6p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe58p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe58p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-17, 0x4p-128", -17, LIT (0x4p-128), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-17, 0x8p-152", -17, LIT (0x8p-152), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-2, 0x4p-128", -2, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-2, 0x8p-152", -2, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-42, 0x4p-128", -42, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-42, 0x8p-152", -42, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0, 0x1.8p+0", 0, LIT (0x1.8p+0), { LIT (0x6.1e82cp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82cp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82cp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0x1p+0", 0, LIT (0x1p+0), { LIT (0x1.698022p-4), ERRNO_UNCHANGED }, { LIT (0x1.698022p-4), ERRNO_UNCHANGED }, { LIT (0x1.698022p-4), ERRNO_UNCHANGED }, { LIT (0x1.698024p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0x2p+0", 0, LIT (0x2p+0), { LIT (0x8.2a7fap-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fbp-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fap-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fbp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0x2p-4", 0, LIT (0x2p-4), { LIT (-0x1.63c21ep+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0x4p-128", 0, LIT (0x4p-128), { LIT (-0x3.7ac89cp+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89cp+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac898p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac898p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0x8p+0", 0, LIT (0x8p+0), { LIT (0x3.938b44p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b48p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0x8p-152", 0, LIT (0x8p-152), { LIT (-0x4.1d2be8p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2bep+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2bep+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2bep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0xap+0", 0, LIT (0xap+0), { LIT (0xe.40773p-8), ERRNO_UNCHANGED }, { LIT (0xe.40773p-8), ERRNO_UNCHANGED }, { LIT (0xe.40773p-8), ERRNO_UNCHANGED }, { LIT (0xe.40774p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0, 0xcp-4", 0, LIT (0xcp-4), { LIT (-0x2.31dc14p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc14p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc1p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc1p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0x1.8p+0", 1, LIT (0x1.8p+0), { LIT (-0x6.98d0fp-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0fp-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0e8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0x1p+0", 1, LIT (0x1p+0), { LIT (-0xc.7fd91p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd9p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd9p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd9p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0x2p+0", 1, LIT (0x2p+0), { LIT (-0x1.b667a4p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a4p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a2p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0x2p-4", 1, LIT (0x2p-4), { LIT (-0x5.332f08p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332fp+0), ERRNO_UNCHANGED }, { LIT (-0x5.332fp+0), ERRNO_UNCHANGED }, { LIT (-0x5.332fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0x4p-128", 1, LIT (0x4p-128), { LIT (-0x2.8be61p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60cp+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60cp+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60cp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0x8p+0", 1, LIT (0x8p+0), { LIT (-0x2.876a6cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a68p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a68p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a68p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0x8p-152", 1, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "1, 0xap+0", 1, LIT (0xap+0), { LIT (0x3.fbf798p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf79cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "1, 0xcp-4", 1, LIT (0xcp-4), { LIT (-0x1.099fccp+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fccp+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcap+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "10, 0x1p+0", 10, LIT (0x1p+0), { LIT (-0x7.3fbe6p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe6p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe58p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe58p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "10, 0x2p+0", 10, LIT (0x2p+0), { LIT (-0x1.f8a08cp+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ap+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ap+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ap+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "10, 0x2p-4", 10, LIT (0x2p-4), { LIT (-0x1.c36672p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c3667p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c3667p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c3667p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "10, 0x4p-128", 10, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "10, 0xap+0", 10, LIT (0xap+0), { LIT (-0x5.c1cc8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc78p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc78p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "10, 0xcp-4", 10, LIT (0xcp-4), { LIT (-0x7.f2aa7p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa7p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa68p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa68p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "17, 0x4p-128", 17, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "17, 0x8p-152", 17, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "2, 0x1p-100", 2, LIT (0x1p-100), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "2, 0x4p-12", 2, LIT (0x4p-12), { LIT (-0x1.45f30cp+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30cp+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30ap+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30ap+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "2, 0x4p-128", 2, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "2, 0x8p+124", 2, LIT (0x8p+124), { LIT (0x2.061838p-68), ERRNO_UNCHANGED }, { LIT (0x2.061838p-68), ERRNO_UNCHANGED }, { LIT (0x2.061838p-68), ERRNO_UNCHANGED }, { LIT (0x2.06183cp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "2, 0x8p-152", 2, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "2, 0xf.fffb1p+96", 2, LIT (0xf.fffb1p+96), { LIT (-0x2.7cecbcp-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbcp-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecb8p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecb8p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "2, 0xf.fffffp+124", 2, LIT (0xf.fffffp+124), { LIT (0xc.69477p-68), ERRNO_UNCHANGED }, { LIT (0xc.69477p-68), ERRNO_UNCHANGED }, { LIT (0xc.69477p-68), ERRNO_UNCHANGED }, { LIT (0xc.69478p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "3, 0x1p+0", 3, LIT (0x1p+0), { LIT (-0x5.d24fp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24ef8p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24ef8p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24ef8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "3, 0x1p-100", 3, LIT (0x1p-100), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "3, 0x2p+0", 3, LIT (0x2p+0), { LIT (-0x1.20b672p+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b67p+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b67p+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b67p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "3, 0x2p-4", 3, LIT (0x2p-4), { LIT (-0xa.34b2ap+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b29p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b29p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b29p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "3, 0x4p-12", 3, LIT (0x4p-12), { LIT (-0x1.45f30ap+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30ap+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f308p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f308p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "3, 0x8p-152", 3, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "3, 0xap+0", 3, LIT (0xap+0), { LIT (-0x4.0594ep-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "3, 0xcp-4", 3, LIT (0xcp-4), { LIT (-0xc.fcdb1p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb1p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdbp+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdbp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "42, 0x4p-128", 42, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "42, 0x8p-152", 42, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-1, 0x1p+0", -1, LIT (0x1p+0), { LIT (0xc.7fd903eb35cap-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35cap-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35cap-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-1, 0x4p-1024", -1, LIT (0x4p-1024), { LIT (0x2.8be60db939104p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db939106p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db939104p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db939106p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-1, 0x4p-1076", -1, LIT (0x4p-1076), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-1, 0x4p-128", -1, LIT (0x4p-128), { LIT (0x2.8be60db939104p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db939106p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db939104p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db939106p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-1, 0x8p-152", -1, LIT (0x8p-152), { LIT (0x1.45f306dc9c882p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c883p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c883p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-1, 0x8p-972", -1, LIT (0x8p-972), { LIT (0x1.45f306dc9c882p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c883p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c883p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-10, 0x1p+0", -10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582ccp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582ccp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582c8p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582c8p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-17, 0x4p-1024", -17, LIT (0x4p-1024), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-17, 0x4p-1076", -17, LIT (0x4p-1076), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-17, 0x4p-128", -17, LIT (0x4p-128), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-17, 0x8p-152", -17, LIT (0x8p-152), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-17, 0x8p-972", -17, LIT (0x8p-972), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-2, 0x4p-1024", -2, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-2, 0x4p-1076", -2, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-2, 0x4p-128", -2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c883p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c883p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-2, 0x8p-152", -2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220cp+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220cp+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b7272208p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b7272208p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-2, 0x8p-972", -2, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-42, 0x4p-1024", -42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-42, 0x4p-1076", -42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-42, 0x4p-128", -42, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-42, 0x8p-152", -42, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-42, 0x8p-972", -42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x1.8p+0", 0, LIT (0x1.8p+0), { LIT (0x6.1e82c341a0d9cp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0dap-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9cp-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0dap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x1p+0", 0, LIT (0x1p+0), { LIT (0x1.6980226f358dfp-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358dfp-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358dfp-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x2p+0", 0, LIT (0x2p+0), { LIT (0x8.2a7fae6b4646p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46468p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b4646p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46468p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x2p-4", 0, LIT (0x2p-4), { LIT (-0x1.63c21c04e0ac7p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x4p-1024", 0, LIT (0x4p-1024), { LIT (-0x1.c30d8f820740ep+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740dp+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740dp+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740dp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x4p-1076", 0, LIT (0x4p-1076), { LIT (-0x1.d9ffc3469e1b4p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b3p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b3p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b3p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x4p-128", 0, LIT (0x4p-128), { LIT (-0x3.7ac89a91b0454p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x8p+0", 0, LIT (0x8p+0), { LIT (0x3.938b44edf7058p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf7058p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf7058p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf705ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x8p-152", 0, LIT (0x8p-152), { LIT (-0x4.1d2be18ac8274p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8274p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac827p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac827p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0x8p-972", 0, LIT (0x8p-972), { LIT (-0x1.abaa6497326c2p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c2p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0xap+0", 0, LIT (0xap+0), { LIT (0xe.407732d02e2cp-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c8p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2cp-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0, 0xcp-4", 0, LIT (0xcp-4), { LIT (-0x2.31dc12e69e47ap-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x1.8p+0", 1, LIT (0x1.8p+0), { LIT (-0x6.98d0ee4b62c3cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c38p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c38p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x1p+0", 1, LIT (0x1p+0), { LIT (-0xc.7fd903eb35ca8p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35cap-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35cap-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35cap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x2p+0", 1, LIT (0x2p+0), { LIT (-0x1.b667a39146648p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a39146647p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a39146647p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a39146647p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x2p-4", 1, LIT (0x2p-4), { LIT (-0x5.332f0358a051p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a051p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050cp+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x4p-1024", 1, LIT (0x4p-1024), { LIT (-0x2.8be60db939106p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939106p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939104p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939104p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x4p-1076", 1, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x4p-128", 1, LIT (0x4p-128), { LIT (-0x2.8be60db939106p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939106p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939104p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939104p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x8p+0", 1, LIT (0x8p+0), { LIT (-0x2.876a681ed266ep-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x8p-152", 1, LIT (0x8p-152), { LIT (-0x1.45f306dc9c883p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c883p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0x8p-972", 1, LIT (0x8p-972), { LIT (-0x1.45f306dc9c883p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c883p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0xap+0", 1, LIT (0xap+0), { LIT (0x3.fbf798f2b1e78p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e7ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "1, 0xcp-4", 1, LIT (0xcp-4), { LIT (-0x1.099fcbe60fd84p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd83p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd83p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd83p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "10, 0x1p+0", 10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582ccp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582ccp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582c8p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582c8p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "10, 0x2p+0", 10, LIT (0x2p+0), { LIT (-0x1.f8a08ace25646p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace25646p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace25645p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace25645p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "10, 0x2p-4", 10, LIT (0x2p-4), { LIT (-0x1.c36670031ba49p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "10, 0x4p-1024", 10, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "10, 0x4p-128", 10, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "10, 0x8p-972", 10, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "10, 0xap+0", 10, LIT (0xap+0), { LIT (-0x5.c1cc7c04403b8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "10, 0xcp-4", 10, LIT (0xcp-4), { LIT (-0x7.f2aa6c6e7de34p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de34p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de3p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de3p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "17, 0x4p-1024", 17, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "17, 0x4p-1076", 17, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "17, 0x4p-128", 17, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "17, 0x8p-152", 17, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "17, 0x8p-972", 17, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x1p-100", 2, LIT (0x1p-100), { LIT (-0x1.45f306dc9c883p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c883p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x1p-600", 2, LIT (0x1p-600), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x4p-1024", 2, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x4p-1076", 2, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x4p-12", 2, LIT (0x4p-12), { LIT (-0x1.45f30bf469428p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf469427p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf469427p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf469427p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x4p-128", 2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c883p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c883p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x8p+1020", 2, LIT (0x8p+1020), { LIT (-0x1.1bd10e60877e3p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e3p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x8p+124", 2, LIT (0x8p+124), { LIT (0x2.0618385b757ecp-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757eep-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757ecp-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757eep-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x8p-152", 2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220cp+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220cp+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b7272208p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b7272208p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0x8p-972", 2, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "2, 0xf.fffb1p+96", 2, LIT (0xf.fffb1p+96), { LIT (-0x2.7cecbaa6c4456p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c4456p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c4454p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c4454p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0xf.ffffffffffff8p+1020", 2, LIT (0xf.ffffffffffff8p+1020), { LIT (-0x9.125bd8436acc8p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436accp-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436accp-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436accp-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "2, 0xf.fffffp+124", 2, LIT (0xf.fffffp+124), { LIT (0xc.6947737b05898p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b05898p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b05898p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b058ap-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x1p+0", 3, LIT (0x1p+0), { LIT (-0x5.d24efa52b4ecp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ecp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebcp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebcp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x1p-100", 3, LIT (0x1p-100), { LIT (-0x5.17cc1b727220cp+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220cp+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b7272208p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b7272208p+300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x1p-600", 3, LIT (0x1p-600), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x2p+0", 3, LIT (0x2p+0), { LIT (-0x1.20b670067d2f2p+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f1p+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f1p+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x2p-4", 3, LIT (0x2p-4), { LIT (-0xa.34b2942d4becp+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4becp+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4beb8p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4beb8p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x4p-1076", 3, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x4p-12", 3, LIT (0x4p-12), { LIT (-0x1.45f30968829bp+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829bp+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afp+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afp+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0x8p-152", 3, LIT (0x8p-152), { LIT (-0x2.8be60db939106p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939106p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939104p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db939104p+448), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0xap+0", 3, LIT (0xap+0), { LIT (-0x4.0594d980a4d3cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "3, 0xcp-4", 3, LIT (0xcp-4), { LIT (-0xc.fcdb0fea63dap+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d98p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d98p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d98p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "42, 0x4p-1024", 42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "42, 0x4p-1076", 42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "42, 0x4p-128", 42, LIT (0x4p-128), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "42, 0x8p-152", 42, LIT (0x8p-152), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "42, 0x8p-972", 42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-1, 0x1p+0", -1, LIT (0x1p+0), { LIT (0xc.7fd903eb35ca24ef2cdf895818p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ef2cdf895818p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ef2cdf895818p-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ef2cdf89581cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-1, 0x4p-1024", -1, LIT (0x4p-1024), { LIT (0x2.8be60db9391054a7f09d5f47d4p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d5p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d5p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-1, 0x4p-1076", -1, LIT (0x4p-1076), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-1, 0x4p-128", -1, LIT (0x4p-128), { LIT (0x2.8be60db9391054a7f09d5f47d4p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d5p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d4p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a7f09d5f47d5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-1, 0x8p-152", -1, LIT (0x8p-152), { LIT (0x1.45f306dc9c882a53f84eafa3eap+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea8p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3eap+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea8p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-1, 0x8p-972", -1, LIT (0x8p-972), { LIT (0x1.45f306dc9c882a53f84eafa3eap+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea8p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3eap+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a53f84eafa3ea8p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-10, 0x1p+0", -10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9bdc41d0a026ep+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026ep+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026cp+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-17, 0x4p-1024", -17, LIT (0x4p-1024), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-17, 0x4p-1076", -17, LIT (0x4p-1076), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-17, 0x4p-128", -17, LIT (0x4p-128), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-17, 0x8p-152", -17, LIT (0x8p-152), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-17, 0x8p-972", -17, LIT (0x8p-972), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-2, 0x4p-1024", -2, LIT (0x4p-1024), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-2, 0x4p-1076", -2, LIT (0x4p-1076), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-2, 0x4p-128", -2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-2, 0x8p-152", -2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a94fe13abe8faap+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8faap+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa8p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa8p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-2, 0x8p-972", -2, LIT (0x8p-972), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-42, 0x4p-1024", -42, LIT (0x4p-1024), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-42, 0x4p-1076", -42, LIT (0x4p-1076), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-42, 0x4p-128", -42, LIT (0x4p-128), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-42, 0x8p-152", -42, LIT (0x8p-152), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-42, 0x8p-972", -42, LIT (0x8p-972), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x1.8p+0", 0, LIT (0x1.8p+0), { LIT (0x6.1e82c341a0d9f3154642a2005ep-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f3154642a2006p-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f3154642a2005ep-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f3154642a2006p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x1p+0", 0, LIT (0x1p+0), { LIT (0x1.6980226f358df29efcc5d79265p-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29efcc5d792658p-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29efcc5d79265p-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29efcc5d792658p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x2p+0", 0, LIT (0x2p+0), { LIT (0x8.2a7fae6b46465e12cd2dc231ccp-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e12cd2dc231dp-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e12cd2dc231ccp-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e12cd2dc231dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x2p-4", 0, LIT (0x2p-4), { LIT (-0x1.63c21c04e0ac6242f501dee0708p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242f501dee0708p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242f501dee07p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242f501dee07p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x4p-1024", 0, LIT (0x4p-1024), { LIT (-0x1.c30d8f820740d6f38735ef425f8p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f38735ef425fp+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f38735ef425fp+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f38735ef425fp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x4p-1076", 0, LIT (0x4p-1076), { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc9p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc88p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc88p+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357b9c2fa12bc88p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x4p-128", 0, LIT (0x4p-128), { LIT (-0x3.7ac89a91b0452b70a18baa0324p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b70a18baa0323p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b70a18baa0323p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b70a18baa0323p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x8p+0", 0, LIT (0x8p+0), { LIT (0x3.938b44edf70581c69c0283841fp-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c69c0283841fp-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c69c0283841fp-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c69c0283842p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x8p-152", 0, LIT (0x8p-152), { LIT (-0x4.1d2be18ac8272ae4e737a8c5cp+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae4e737a8c5bep+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae4e737a8c5bep+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae4e737a8c5bep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0x8p-972", 0, LIT (0x8p-972), { LIT (-0x1.abaa6497326c1dfc85863500c78p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfc85863500c78p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfc85863500c7p+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfc85863500c7p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0xap+0", 0, LIT (0xap+0), { LIT (0xe.407732d02e2c469384e4d3c828p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469384e4d3c828p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469384e4d3c828p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469384e4d3c82cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0, 0xcp-4", 0, LIT (0xcp-4), { LIT (-0x2.31dc12e69e478d0b847d6a37e3p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0b847d6a37e3p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0b847d6a37e2p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0b847d6a37e2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x1.8p+0", 1, LIT (0x1.8p+0), { LIT (-0x6.98d0ee4b62c3bf8ce41da45474p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf8ce41da45472p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf8ce41da45472p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf8ce41da45472p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x1p+0", 1, LIT (0x1p+0), { LIT (-0xc.7fd903eb35ca24ef2cdf89581cp-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ef2cdf895818p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ef2cdf895818p-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ef2cdf895818p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x2p+0", 1, LIT (0x2p+0), { LIT (-0x1.b667a3914664758b0c44371e52p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758b0c44371e52p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758b0c44371e518p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758b0c44371e518p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x2p-4", 1, LIT (0x2p-4), { LIT (-0x5.332f0358a050e39ed8ad27e948p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e39ed8ad27e948p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e39ed8ad27e946p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e39ed8ad27e946p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x4p-1024", 1, LIT (0x4p-1024), { LIT (-0x2.8be60db9391054a7f09d5f47d5p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d5p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x4p-1076", 1, LIT (0x4p-1076), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x4p-128", 1, LIT (0x4p-128), { LIT (-0x2.8be60db9391054a7f09d5f47d5p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d5p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x8p+0", 1, LIT (0x8p+0), { LIT (-0x2.876a681ed266c219a14b51d98bp-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c219a14b51d98ap-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c219a14b51d98ap-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c219a14b51d98ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x8p-152", 1, LIT (0x8p-152), { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0x8p-972", 1, LIT (0x8p-972), { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0xap+0", 1, LIT (0xap+0), { LIT (0x3.fbf798f2b1e78044d16cb72503p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044d16cb72503p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044d16cb72503p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044d16cb72504p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "1, 0xcp-4", 1, LIT (0xcp-4), { LIT (-0x1.099fcbe60fd830293e0a662303p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd830293e0a662303p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd830293e0a6623028p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd830293e0a6623028p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0x1p+0", 10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9bdc41d0a026ep+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026ep+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9bdc41d0a026cp+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0x2p+0", 10, LIT (0x2p+0), { LIT (-0x1.f8a08ace256458e265b11f6891p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e265b11f68908p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e265b11f68908p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e265b11f68908p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0x2p-4", 10, LIT (0x2p-4), { LIT (-0x1.c36670031ba48640a65cbe373c8p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48640a65cbe373c8p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48640a65cbe373cp+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba48640a65cbe373cp+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0x4p-1024", 10, LIT (0x4p-1024), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0x4p-128", 10, LIT (0x4p-128), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0x8p-972", 10, LIT (0x8p-972), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0xap+0", 10, LIT (0xap+0), { LIT (-0x5.c1cc7c04403b705203e76c165ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705203e76c165ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705203e76c1658p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705203e76c1658p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "10, 0xcp-4", 10, LIT (0xcp-4), { LIT (-0x7.f2aa6c6e7de330f198c55276c8p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330f198c55276c6p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330f198c55276c6p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330f198c55276c6p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "17, 0x4p-1024", 17, LIT (0x4p-1024), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "17, 0x4p-1076", 17, LIT (0x4p-1076), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "17, 0x4p-128", 17, LIT (0x4p-128), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "17, 0x8p-152", 17, LIT (0x8p-152), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "17, 0x8p-972", 17, LIT (0x8p-972), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x1p-100", 2, LIT (0x1p-100), { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x1p-600", 2, LIT (0x1p-600), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x4p-1024", 2, LIT (0x4p-1024), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x4p-1076", 2, LIT (0x4p-1076), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x4p-12", 2, LIT (0x4p-12), { LIT (-0x1.45f30bf4694275b4261a1ee474p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4261a1ee4738p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4261a1ee4738p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4261a1ee4738p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x4p-128", 2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3ea8p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a53f84eafa3eap+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x8p+1020", 2, LIT (0x8p+1020), { LIT (-0x1.1bd10e60877e2ce21eee868f97p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce21eee868f968p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce21eee868f968p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce21eee868f968p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x8p+124", 2, LIT (0x8p+124), { LIT (0x2.0618385b757edd9be9bff5eefap-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9be9bff5eefbp-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9be9bff5eefap-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9be9bff5eefbp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x8p-152", 2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a94fe13abe8faap+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8faap+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa8p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa8p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0x8p-972", 2, LIT (0x8p-972), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0xf.fffb1p+96", 2, LIT (0xf.fffb1p+96), { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee5p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee5p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee4p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a2c58d6a9ee4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0xf.ffffffffffff8p+1020", 2, LIT (0xf.ffffffffffff8p+1020), { LIT (-0x9.125bd8436acc225eb7a1cfb5fcp-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225eb7a1cfb5fcp-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225eb7a1cfb5f8p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225eb7a1cfb5f8p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0xf.ffffffffffffbffffffffffffcp+1020", 2, LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x5.34b8be56c9cb044a0ef191b024p-516), ERRNO_UNCHANGED }, { LIT (0x5.34b8be56c9cb044a0ef191b026p-516), ERRNO_UNCHANGED }, { LIT (0x5.34b8be56c9cb044a0ef191b024p-516), ERRNO_UNCHANGED }, { LIT (0x5.34b8be56c9cb044a0ef191b026p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "2, 0xf.fffffp+124", 2, LIT (0xf.fffffp+124), { LIT (0xc.6947737b0589955c3452382168p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955c3452382168p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955c3452382168p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955c345238216cp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x1p+0", 3, LIT (0x1p+0), { LIT (-0x5.d24efa52b4ebecd062d341fb26p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecd062d341fb24p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecd062d341fb24p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecd062d341fb24p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x1p-100", 3, LIT (0x1p-100), { LIT (-0x5.17cc1b727220a94fe13abe8faap+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8faap+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa8p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a94fe13abe8fa8p+300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x1p-600", 3, LIT (0x1p-600), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x2p+0", 3, LIT (0x2p+0), { LIT (-0x1.20b670067d2f131b0a69fbb81fp+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131b0a69fbb81fp+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131b0a69fbb81e8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131b0a69fbb81e8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x2p-4", 3, LIT (0x2p-4), { LIT (-0xa.34b2942d4bebea11b3e166ce98p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea11b3e166ce98p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea11b3e166ce94p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea11b3e166ce94p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x4p-1076", 3, LIT (0x4p-1076), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x4p-12", 3, LIT (0x4p-12), { LIT (-0x1.45f30968829afb59903f350b36p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb59903f350b36p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb59903f350b358p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb59903f350b358p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0x8p-152", 3, LIT (0x8p-152), { LIT (-0x2.8be60db9391054a7f09d5f47d5p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d5p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a7f09d5f47d4p+448), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0xap+0", 3, LIT (0xap+0), { LIT (-0x4.0594d980a4d38721b879194ebep-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38721b879194ebcp-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38721b879194ebcp-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d38721b879194ebcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "3, 0xcp-4", 3, LIT (0xcp-4), { LIT (-0xc.fcdb0fea63d9bf8f410a5bf53p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8f410a5bf53p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8f410a5bf52cp+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8f410a5bf52cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "42, 0x4p-1024", 42, LIT (0x4p-1024), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "42, 0x4p-1076", 42, LIT (0x4p-1076), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "42, 0x4p-128", 42, LIT (0x4p-128), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "42, 0x8p-152", 42, LIT (0x8p-152), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "42, 0x8p-972", 42, LIT (0x8p-972), { minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x1p+0", -1, LIT (0x1p+0), { LIT (0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x2p-16384", -1, LIT (0x2p-16384), { LIT (0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x4p-1024", -1, LIT (0x4p-1024), { LIT (0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x4p-1076", -1, LIT (0x4p-1076), { LIT (0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x4p-128", -1, LIT (0x4p-128), { LIT (0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x4p-16384", -1, LIT (0x4p-16384), { LIT (0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x8p-152", -1, LIT (0x8p-152), { LIT (0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x8p-16448", -1, LIT (0x8p-16448), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-1, 0x8p-972", -1, LIT (0x8p-972), { LIT (0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-10, 0x1p+0", -10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x2p-16384", -17, LIT (0x2p-16384), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x4p-1024", -17, LIT (0x4p-1024), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x4p-1076", -17, LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x4p-128", -17, LIT (0x4p-128), { LIT (0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc54p+2200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x4p-16384", -17, LIT (0x4p-16384), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x8p-152", -17, LIT (0x8p-152), { LIT (0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e2ap+2592), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x8p-16448", -17, LIT (0x8p-16448), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-17, 0x8p-972", -17, LIT (0x8p-972), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x2p-16384", -2, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x4p-1024", -2, LIT (0x4p-1024), { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x4p-1076", -2, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x4p-128", -2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x4p-16384", -2, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x8p-152", -2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x8p-16448", -2, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-2, 0x8p-972", -2, LIT (0x8p-972), { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x2p-16384", -42, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x4p-1024", -42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x4p-1076", -42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x4p-128", -42, LIT (0x4p-128), { LIT (-0x1.d24b3c086dc0a4a4p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x4p-16384", -42, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x8p-152", -42, LIT (0x8p-152), { LIT (-0x7.492cf021b702929p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x8p-16448", -42, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-42, 0x8p-972", -42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x1.8p+0", 0, LIT (0x1.8p+0), { LIT (0x6.1e82c341a0d9f31p-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f318p-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f31p-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f318p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x1p+0", 0, LIT (0x1p+0), { LIT (0x1.6980226f358df29ep-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29ep-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29ep-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df2ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x2p+0", 0, LIT (0x2p+0), { LIT (0x8.2a7fae6b46465e1p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e1p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e1p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x2p-16384", 0, LIT (0x2p-16384), { LIT (-0x1.c3d6b7d2ef26d30ep+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30ep+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30cp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30cp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x2p-4", 0, LIT (0x2p-4), { LIT (-0x1.63c21c04e0ac6244p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x4p-1024", 0, LIT (0x4p-1024), { LIT (-0x1.c30d8f820740d6f4p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f4p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f2p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f2p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x4p-1076", 0, LIT (0x4p-1076), { LIT (-0x1.d9ffc3469e1b357cp+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357cp+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357ap+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357ap+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x4p-128", 0, LIT (0x4p-128), { LIT (-0x3.7ac89a91b0452b74p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b7p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b7p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b7p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x4p-16384", 0, LIT (0x4p-16384), { LIT (-0x1.c3cfa8608b472d68p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x8p+0", 0, LIT (0x8p+0), { LIT (0x3.938b44edf70581c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x8p-152", 0, LIT (0x8p-152), { LIT (-0x4.1d2be18ac8272ae8p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae8p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272aep+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272aep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x8p-16448", 0, LIT (0x8p-16448), { LIT (-0x1.c58c75871f50f17cp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17cp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17ap+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17ap+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0x8p-972", 0, LIT (0x8p-972), { LIT (-0x1.abaa6497326c1dfep+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfcp+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfcp+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfcp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0xap+0", 0, LIT (0xap+0), { LIT (0xe.407732d02e2c469p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c46ap-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0, 0xcp-4", 0, LIT (0xcp-4), { LIT (-0x2.31dc12e69e478d0cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d08p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d08p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x1.8p+0", 1, LIT (0x1.8p+0), { LIT (-0x6.98d0ee4b62c3bf9p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf9p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf88p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x1p+0", 1, LIT (0x1p+0), { LIT (-0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x2p+0", 1, LIT (0x2p+0), { LIT (-0x1.b667a3914664758cp-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758cp-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758ap-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x2p-16384", 1, LIT (0x2p-16384), { LIT (-0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x2p-4", 1, LIT (0x2p-4), { LIT (-0x5.332f0358a050e3ap+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e3ap+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e398p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e398p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x4p-1024", 1, LIT (0x4p-1024), { LIT (-0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x4p-1076", 1, LIT (0x4p-1076), { LIT (-0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x4p-128", 1, LIT (0x4p-128), { LIT (-0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x4p-16384", 1, LIT (0x4p-16384), { LIT (-0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x8p+0", 1, LIT (0x8p+0), { LIT (-0x2.876a681ed266c21cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c218p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c218p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c218p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x8p-152", 1, LIT (0x8p-152), { LIT (-0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x8p-16448", 1, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "1, 0x8p-972", 1, LIT (0x8p-972), { LIT (-0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0xap+0", 1, LIT (0xap+0), { LIT (0x3.fbf798f2b1e78044p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78048p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "1, 0xcp-4", 1, LIT (0xcp-4), { LIT (-0x1.099fcbe60fd8302ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd8302ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd83028p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd83028p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x1p+0", 10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x2p+0", 10, LIT (0x2p+0), { LIT (-0x1.f8a08ace256458e4p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e2p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e2p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e2p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x2p-16384", 10, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x2p-4", 10, LIT (0x2p-4), { LIT (-0x1.c36670031ba48642p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba4864p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba4864p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba4864p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x4p-1024", 10, LIT (0x4p-1024), { LIT (-0x7.0cd12a7e8cbbf66p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf66p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+10244), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x4p-128", 10, LIT (0x4p-128), { LIT (-0x7.0cd12a7e8cbbf66p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf66p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+1284), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x4p-16384", 10, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "10, 0x8p-972", 10, LIT (0x8p-972), { LIT (-0x1.c3344a9fa32efd98p+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd98p+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd96p+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd96p+9716), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0xap+0", 10, LIT (0xap+0), { LIT (-0x5.c1cc7c04403b7058p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "10, 0xcp-4", 10, LIT (0xcp-4), { LIT (-0x7.f2aa6c6e7de330f8p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330fp+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330fp+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330fp+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x2p-16384", 17, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x4p-1024", 17, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x4p-1076", 17, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x4p-128", 17, LIT (0x4p-128), { LIT (-0x3.075168245c52bc54p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x4p-16384", 17, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x8p-152", 17, LIT (0x8p-152), { LIT (-0x1.83a8b4122e295e2ap+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x8p-16448", 17, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "17, 0x8p-972", 17, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x1p-100", 2, LIT (0x1p-100), { LIT (-0x1.45f306dc9c882a54p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x1p-10000", 2, LIT (0x1p-10000), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x1p-600", 2, LIT (0x1p-600), { LIT (-0x1.45f306dc9c882a54p+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+1200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x2p-16384", 2, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x4p-1024", 2, LIT (0x4p-1024), { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x4p-1076", 2, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x4p-12", 2, LIT (0x4p-12), { LIT (-0x1.45f30bf4694275b6p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x4p-128", 2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x4p-16384", 2, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x8p+1020", 2, LIT (0x8p+1020), { LIT (-0x1.1bd10e60877e2ce4p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x8p+124", 2, LIT (0x8p+124), { LIT (0x2.0618385b757edd98p-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9cp-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd98p-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9cp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x8p+16380", 2, LIT (0x8p+16380), { LIT (0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x8p-152", 2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x8p-16448", 2, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "2, 0x8p-972", 2, LIT (0x8p-972), { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0xf.fffb1p+96", 2, LIT (0xf.fffb1p+96), { LIT (-0x2.7cecbaa6c44558a4p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a4p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558ap-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558ap-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0xf.ffffffffffff8p+1020", 2, LIT (0xf.ffffffffffff8p+1020), { LIT (-0x9.125bd8436acc226p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc226p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "2, 0xf.fffffp+124", 2, LIT (0xf.fffffp+124), { LIT (0xc.6947737b0589955p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589956p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589956p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x1p+0", 3, LIT (0x1p+0), { LIT (-0x5.d24efa52b4ebecd8p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecdp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecdp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecdp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x1p-100", 3, LIT (0x1p-100), { LIT (-0x5.17cc1b727220a95p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x1p-10000", 3, LIT (0x1p-10000), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x1p-600", 3, LIT (0x1p-600), { LIT (-0x5.17cc1b727220a95p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1800), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x2p+0", 3, LIT (0x2p+0), { LIT (-0x1.20b670067d2f131cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x2p-4", 3, LIT (0x2p-4), { LIT (-0xa.34b2942d4bebea2p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea1p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea1p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea1p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x4p-1076", 3, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a54p+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+3224), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x4p-12", 3, LIT (0x4p-12), { LIT (-0x1.45f30968829afb5ap+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb5ap+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb58p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb58p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0x8p-152", 3, LIT (0x8p-152), { LIT (-0x2.8be60db9391054a8p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+448), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0xap+0", 3, LIT (0xap+0), { LIT (-0x4.0594d980a4d38728p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d3872p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d3872p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d3872p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "3, 0xcp-4", 3, LIT (0xcp-4), { LIT (-0xc.fcdb0fea63d9bf9p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf9p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x2p-16384", 42, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x4p-1024", 42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x4p-1076", 42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x4p-128", 42, LIT (0x4p-128), { LIT (-0x1.d24b3c086dc0a4a4p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x4p-16384", 42, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x8p-152", 42, LIT (0x8p-152), { LIT (-0x7.492cf021b702929p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x8p-16448", 42, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "42, 0x8p-972", 42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x1p+0", -1, LIT (0x1p+0), { LIT (0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED }, { LIT (0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x2p-16384", -1, LIT (0x2p-16384), { LIT (0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED }, { LIT (0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x4p-1024", -1, LIT (0x4p-1024), { LIT (0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x4p-1076", -1, LIT (0x4p-1076), { LIT (0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x4p-128", -1, LIT (0x4p-128), { LIT (0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x4p-16384", -1, LIT (0x4p-16384), { LIT (0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED }, { LIT (0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x4p-16448", -1, LIT (0x4p-16448), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x8p-152", -1, LIT (0x8p-152), { LIT (0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x8p-16448", -1, LIT (0x8p-16448), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-1, 0x8p-972", -1, LIT (0x8p-972), { LIT (0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED }, { LIT (0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-10, 0x1p+0", -10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x2p-16384", -17, LIT (0x2p-16384), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x4p-1024", -17, LIT (0x4p-1024), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x4p-1076", -17, LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x4p-128", -17, LIT (0x4p-128), { LIT (0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (0x3.075168245c52bc54p+2200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x4p-16384", -17, LIT (0x4p-16384), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x4p-16448", -17, LIT (0x4p-16448), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x8p-152", -17, LIT (0x8p-152), { LIT (0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (0x1.83a8b4122e295e2ap+2592), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x8p-16448", -17, LIT (0x8p-16448), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-17, 0x8p-972", -17, LIT (0x8p-972), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x2p-16384", -2, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x4p-1024", -2, LIT (0x4p-1024), { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x4p-1076", -2, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x4p-128", -2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x4p-16384", -2, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x4p-16448", -2, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x8p-152", -2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x8p-16448", -2, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-2, 0x8p-972", -2, LIT (0x8p-972), { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x2p-16384", -42, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x4p-1024", -42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x4p-1076", -42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x4p-128", -42, LIT (0x4p-128), { LIT (-0x1.d24b3c086dc0a4a4p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x4p-16384", -42, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x4p-16448", -42, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x8p-152", -42, LIT (0x8p-152), { LIT (-0x7.492cf021b702929p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x8p-16448", -42, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-42, 0x8p-972", -42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x1.8p+0", 0, LIT (0x1.8p+0), { LIT (0x6.1e82c341a0d9f31p-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f318p-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f31p-4), ERRNO_UNCHANGED }, { LIT (0x6.1e82c341a0d9f318p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x1p+0", 0, LIT (0x1p+0), { LIT (0x1.6980226f358df29ep-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29ep-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df29ep-4), ERRNO_UNCHANGED }, { LIT (0x1.6980226f358df2ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x2p+0", 0, LIT (0x2p+0), { LIT (0x8.2a7fae6b46465e1p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e1p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e1p-4), ERRNO_UNCHANGED }, { LIT (0x8.2a7fae6b46465e2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x2p-16384", 0, LIT (0x2p-16384), { LIT (-0x1.c3d6b7d2ef26d30ep+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30ep+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30cp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3d6b7d2ef26d30cp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x2p-4", 0, LIT (0x2p-4), { LIT (-0x1.63c21c04e0ac6244p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242p+0), ERRNO_UNCHANGED }, { LIT (-0x1.63c21c04e0ac6242p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x4p-1024", 0, LIT (0x4p-1024), { LIT (-0x1.c30d8f820740d6f4p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f4p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f2p+8), ERRNO_UNCHANGED }, { LIT (-0x1.c30d8f820740d6f2p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x4p-1076", 0, LIT (0x4p-1076), { LIT (-0x1.d9ffc3469e1b357cp+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357cp+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357ap+8), ERRNO_UNCHANGED }, { LIT (-0x1.d9ffc3469e1b357ap+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x4p-128", 0, LIT (0x4p-128), { LIT (-0x3.7ac89a91b0452b74p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b7p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b7p+4), ERRNO_UNCHANGED }, { LIT (-0x3.7ac89a91b0452b7p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x4p-16384", 0, LIT (0x4p-16384), { LIT (-0x1.c3cfa8608b472d68p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c3cfa8608b472d66p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x4p-16448", 0, LIT (0x4p-16448), { LIT (-0x1.c59384f983309724p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c59384f983309722p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c59384f983309722p+12), ERRNO_UNCHANGED }, { LIT (-0x1.c59384f983309722p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x8p+0", 0, LIT (0x8p+0), { LIT (0x3.938b44edf70581c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.938b44edf70581c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x8p-152", 0, LIT (0x8p-152), { LIT (-0x4.1d2be18ac8272ae8p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272ae8p+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272aep+4), ERRNO_UNCHANGED }, { LIT (-0x4.1d2be18ac8272aep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x8p-16448", 0, LIT (0x8p-16448), { LIT (-0x1.c58c75871f50f17cp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17cp+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17ap+12), ERRNO_UNCHANGED }, { LIT (-0x1.c58c75871f50f17ap+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0x8p-972", 0, LIT (0x8p-972), { LIT (-0x1.abaa6497326c1dfep+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfcp+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfcp+8), ERRNO_UNCHANGED }, { LIT (-0x1.abaa6497326c1dfcp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0xap+0", 0, LIT (0xap+0), { LIT (0xe.407732d02e2c469p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c469p-8), ERRNO_UNCHANGED }, { LIT (0xe.407732d02e2c46ap-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0, 0xcp-4", 0, LIT (0xcp-4), { LIT (-0x2.31dc12e69e478d0cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d0cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d08p-4), ERRNO_UNCHANGED }, { LIT (-0x2.31dc12e69e478d08p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x1.8p+0", 1, LIT (0x1.8p+0), { LIT (-0x6.98d0ee4b62c3bf9p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf9p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf88p-4), ERRNO_UNCHANGED }, { LIT (-0x6.98d0ee4b62c3bf88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x1p+0", 1, LIT (0x1p+0), { LIT (-0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24fp-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED }, { LIT (-0xc.7fd903eb35ca24ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x2p+0", 1, LIT (0x2p+0), { LIT (-0x1.b667a3914664758cp-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758cp-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758ap-4), ERRNO_UNCHANGED }, { LIT (-0x1.b667a3914664758ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x2p-16384", 1, LIT (0x2p-16384), { LIT (-0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x2p-4", 1, LIT (0x2p-4), { LIT (-0x5.332f0358a050e3ap+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e3ap+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e398p+0), ERRNO_UNCHANGED }, { LIT (-0x5.332f0358a050e398p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x4p-1024", 1, LIT (0x4p-1024), { LIT (-0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x4p-1076", 1, LIT (0x4p-1076), { LIT (-0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+1072), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x4p-128", 1, LIT (0x4p-128), { LIT (-0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x4p-16384", 1, LIT (0x4p-16384), { LIT (-0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x4p-16448", 1, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x8p+0", 1, LIT (0x8p+0), { LIT (-0x2.876a681ed266c21cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c218p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c218p-4), ERRNO_UNCHANGED }, { LIT (-0x2.876a681ed266c218p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x8p-152", 1, LIT (0x8p-152), { LIT (-0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x8p-16448", 1, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0x8p-972", 1, LIT (0x8p-972), { LIT (-0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0xap+0", 1, LIT (0xap+0), { LIT (0x3.fbf798f2b1e78044p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78044p-4), ERRNO_UNCHANGED }, { LIT (0x3.fbf798f2b1e78048p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "1, 0xcp-4", 1, LIT (0xcp-4), { LIT (-0x1.099fcbe60fd8302ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd8302ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd83028p+0), ERRNO_UNCHANGED }, { LIT (-0x1.099fcbe60fd83028p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x1p+0", 10, LIT (0x1p+0), { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9cp+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED }, { LIT (-0x7.3fbe5e47582cb9b8p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x2p+0", 10, LIT (0x2p+0), { LIT (-0x1.f8a08ace256458e4p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e2p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e2p+16), ERRNO_UNCHANGED }, { LIT (-0x1.f8a08ace256458e2p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x2p-16384", 10, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x2p-4", 10, LIT (0x2p-4), { LIT (-0x1.c36670031ba48642p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba4864p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba4864p+56), ERRNO_UNCHANGED }, { LIT (-0x1.c36670031ba4864p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x4p-1024", 10, LIT (0x4p-1024), { LIT (-0x7.0cd12a7e8cbbf66p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf66p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+10244), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+10244), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x4p-128", 10, LIT (0x4p-128), { LIT (-0x7.0cd12a7e8cbbf66p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf66p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+1284), ERRNO_UNCHANGED }, { LIT (-0x7.0cd12a7e8cbbf658p+1284), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x4p-16384", 10, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0x8p-972", 10, LIT (0x8p-972), { LIT (-0x1.c3344a9fa32efd98p+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd98p+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd96p+9716), ERRNO_UNCHANGED }, { LIT (-0x1.c3344a9fa32efd96p+9716), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0xap+0", 10, LIT (0xap+0), { LIT (-0x5.c1cc7c04403b7058p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705p-4), ERRNO_UNCHANGED }, { LIT (-0x5.c1cc7c04403b705p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "10, 0xcp-4", 10, LIT (0xcp-4), { LIT (-0x7.f2aa6c6e7de330f8p+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330fp+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330fp+28), ERRNO_UNCHANGED }, { LIT (-0x7.f2aa6c6e7de330fp+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x2p-16384", 17, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x4p-1024", 17, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x4p-1076", 17, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x4p-128", 17, LIT (0x4p-128), { LIT (-0x3.075168245c52bc54p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED }, { LIT (-0x3.075168245c52bc5p+2200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x4p-16384", 17, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x4p-16448", 17, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x8p-152", 17, LIT (0x8p-152), { LIT (-0x1.83a8b4122e295e2ap+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED }, { LIT (-0x1.83a8b4122e295e28p+2592), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x8p-16448", 17, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "17, 0x8p-972", 17, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x1p-100", 2, LIT (0x1p-100), { LIT (-0x1.45f306dc9c882a54p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x1p-10000", 2, LIT (0x1p-10000), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x1p-600", 2, LIT (0x1p-600), { LIT (-0x1.45f306dc9c882a54p+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+1200), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+1200), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x2p-16384", 2, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x4p-1024", 2, LIT (0x4p-1024), { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2044), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x4p-1076", 2, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+2148), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x4p-12", 2, LIT (0x4p-12), { LIT (-0x1.45f30bf4694275b6p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4p+20), ERRNO_UNCHANGED }, { LIT (-0x1.45f30bf4694275b4p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x4p-128", 2, LIT (0x4p-128), { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+252), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x4p-16384", 2, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x4p-16448", 2, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x8p+1020", 2, LIT (0x8p+1020), { LIT (-0x1.1bd10e60877e2ce4p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (-0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x8p+124", 2, LIT (0x8p+124), { LIT (0x2.0618385b757edd98p-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9cp-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd98p-68), ERRNO_UNCHANGED }, { LIT (0x2.0618385b757edd9cp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x8p+16380", 2, LIT (0x8p+16380), { LIT (0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED }, { LIT (0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x8p-152", 2, LIT (0x8p-152), { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+296), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x8p-16448", 2, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0x8p-972", 2, LIT (0x8p-972), { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1936), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0xf.fffb1p+96", 2, LIT (0xf.fffb1p+96), { LIT (-0x2.7cecbaa6c44558a4p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558a4p-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558ap-52), ERRNO_UNCHANGED }, { LIT (-0x2.7cecbaa6c44558ap-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0xf.ffffffffffff8p+1020", 2, LIT (0xf.ffffffffffff8p+1020), { LIT (-0x9.125bd8436acc226p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc226p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225p-516), ERRNO_UNCHANGED }, { LIT (-0x9.125bd8436acc225p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "2, 0xf.fffffp+124", 2, LIT (0xf.fffffp+124), { LIT (0xc.6947737b0589955p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589956p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589955p-68), ERRNO_UNCHANGED }, { LIT (0xc.6947737b0589956p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x1p+0", 3, LIT (0x1p+0), { LIT (-0x5.d24efa52b4ebecd8p+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecdp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecdp+0), ERRNO_UNCHANGED }, { LIT (-0x5.d24efa52b4ebecdp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x1p-100", 3, LIT (0x1p-100), { LIT (-0x5.17cc1b727220a95p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+300), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x1p-10000", 3, LIT (0x1p-10000), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x1p-600", 3, LIT (0x1p-600), { LIT (-0x5.17cc1b727220a95p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a95p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1800), ERRNO_UNCHANGED }, { LIT (-0x5.17cc1b727220a948p+1800), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x2p+0", 3, LIT (0x2p+0), { LIT (-0x1.20b670067d2f131cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.20b670067d2f131ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x2p-4", 3, LIT (0x2p-4), { LIT (-0xa.34b2942d4bebea2p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea1p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea1p+8), ERRNO_UNCHANGED }, { LIT (-0xa.34b2942d4bebea1p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x4p-1076", 3, LIT (0x4p-1076), { LIT (-0x1.45f306dc9c882a54p+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a54p+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+3224), ERRNO_UNCHANGED }, { LIT (-0x1.45f306dc9c882a52p+3224), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x4p-12", 3, LIT (0x4p-12), { LIT (-0x1.45f30968829afb5ap+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb5ap+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb58p+32), ERRNO_UNCHANGED }, { LIT (-0x1.45f30968829afb58p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0x8p-152", 3, LIT (0x8p-152), { LIT (-0x2.8be60db9391054a8p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a8p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+448), ERRNO_UNCHANGED }, { LIT (-0x2.8be60db9391054a4p+448), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0xap+0", 3, LIT (0xap+0), { LIT (-0x4.0594d980a4d38728p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d3872p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d3872p-4), ERRNO_UNCHANGED }, { LIT (-0x4.0594d980a4d3872p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "3, 0xcp-4", 3, LIT (0xcp-4), { LIT (-0xc.fcdb0fea63d9bf9p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf9p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.fcdb0fea63d9bf8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x2p-16384", 42, LIT (0x2p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x4p-1024", 42, LIT (0x4p-1024), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x4p-1076", 42, LIT (0x4p-1076), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x4p-128", 42, LIT (0x4p-128), { LIT (-0x1.d24b3c086dc0a4a4p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED }, { LIT (-0x1.d24b3c086dc0a4a2p+5496), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x4p-16384", 42, LIT (0x4p-16384), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x4p-16448", 42, LIT (0x4p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x8p-152", 42, LIT (0x8p-152), { LIT (-0x7.492cf021b702929p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED }, { LIT (-0x7.492cf021b7029288p+6460), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x8p-16448", 42, LIT (0x8p-16448), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "42, 0x8p-972", 42, LIT (0x8p-972), { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { minus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
  };

static void
yn_test (void)
{
  ALL_RM_TEST (yn, 0, yn_test_data, RUN_TEST_LOOP_if_f, END);
}

static void
do_test (void)
{
  yn_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
