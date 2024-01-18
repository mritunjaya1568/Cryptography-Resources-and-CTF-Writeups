/* Test setpayloadsig.
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

static const struct test_Ff_b1_data setpayloadsig_test_data[] =
  {
#if HIGH_ORDER_BIT_IS_SET_FOR_SNAN
    { "+0", plus_zero, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x0") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x0") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x0") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x0") } },
#else
    { "+0", plus_zero, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
    { "0x1p0", LIT (0x1p0), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x1") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x1") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x1") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x1") } },
    { "0x2p0", LIT (0x2p0), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x2") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x2") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x2") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x2") } },
    { "0x3fffffp0", LIT (0x3fffffp0), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffff") } },
#if PAYLOAD_DIG >= 51
    { "0x7ffffffffffffp0", LIT (0x7ffffffffffffp0), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7ffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7ffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7ffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7ffffffffffff") } },
#else
    { "0x7ffffffffffffp0", LIT (0x7ffffffffffffp0), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if PAYLOAD_DIG >= 62
    { "0x3fffffffffffffffp0", LIT (0x3fffffffffffffffp0), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x3fffffffffffffff") } },
#else
    { "0x3fffffffffffffffp0", LIT (0x3fffffffffffffffp0), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if PAYLOAD_DIG >= 111
    { "0x7fffffffffffffffffffffffffffp0", LIT (0x7fffffffffffffffffffffffffffp0), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7fffffffffffffffffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7fffffffffffffffffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7fffffffffffffffffffffffffff") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x7fffffffffffffffffffffffffff") } },
#else
    { "0x7fffffffffffffffffffffffffffp0", LIT (0x7fffffffffffffffffffffffffffp0), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
    { "-0", minus_zero, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-1.0", LIT (-1.0), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-2.0", LIT (-2.0), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "0.5", LIT (0.5), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-0.5", LIT (-0.5), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "max_value", max_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-max_value", -max_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "min_value", min_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-min_value", -min_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "min_subnorm_value", min_subnorm_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-min_subnorm_value", -min_subnorm_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "inf", plus_infty, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-inf", minus_infty, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "qNaN", qnan_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-qNaN", -qnan_value, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "sNaN", snan_value, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "-sNaN", -snan_value, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
    { "0xffffffp-1", LIT (0xffffffp-1), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#if MANT_DIG >= 53
    { "0x1fffffffffffffp-1", LIT (0x1fffffffffffffp-1), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if MANT_DIG >= 64
    { "0xffffffffffffffffp-1", LIT (0xffffffffffffffffp-1), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if MANT_DIG >= 106
    { "0x3ffffffffffffffffffffffffffp-1", LIT (0x3ffffffffffffffffffffffffffp-1), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if MANT_DIG >= 113
    { "0x1ffffffffffffffffffffffffffffp-1", LIT (0x1ffffffffffffffffffffffffffffp-1), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if PAYLOAD_DIG >= 23
    { "0x1p22", LIT (0x1p22), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x400000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x400000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x400000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x400000") } },
#else
    { "0x1p22", LIT (0x1p22), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if PAYLOAD_DIG >= 52
    { "0x1p51", LIT (0x1p51), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x8000000000000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x8000000000000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x8000000000000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x8000000000000") } },
#else
    { "0x1p51", LIT (0x1p51), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
#if PAYLOAD_DIG >= 63
    { "0x1p62", LIT (0x1p62), { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x4000000000000000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x4000000000000000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x4000000000000000") }, { 0, TEST_SNAN|NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED|TEST_NAN_SIGN|TEST_NAN_PAYLOAD, 1, snan_value_pl ("0x4000000000000000") } },
#else
    { "0x1p62", LIT (0x1p62), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
#endif
    { "0x1p111", LIT (0x1p111), { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero }, { 1, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED, 1, plus_zero } },
  };

static void
setpayloadsig_test (void)
{
  FLOAT x;

  ALL_RM_TEST (setpayloadsig, 1, setpayloadsig_test_data, RUN_TEST_LOOP_Ff_b1, END, x);
}

static void
do_test (void)
{
  setpayloadsig_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
