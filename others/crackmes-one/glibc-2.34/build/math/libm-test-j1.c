/* Test j1.
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

static const struct test_f_f_data j1_test_data[] =
  {
    /* j1 is the Bessel function of the first kind of order 1 */
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "inf", plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "-inf", minus_infty, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { minus_zero, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },

#if (TEST_COND_binary128)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0x7.0a727ba5c31b14d8b9e340190074p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8b9e340190074p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8b9e34019007p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8b9e34019007p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffffffffffffffffcp-16388), UNDERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffffffffffffffffcp-16388), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x2p-1024), ERRNO_UNCHANGED }, { LIT (-0x2p-1024), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffffffp-1024), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffffffp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x2p-1076), ERRNO_UNCHANGED }, { LIT (-0x2p-1076), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffffffp-1076), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffffffp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (-0x2p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16496", LIT (-0x4p-16496), { LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-972), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.ed4ed4eb7e408aa88a07549300b8p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aa88a07549300cp-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aa88a07549300b8p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aa88a07549300cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.ff00000000002p+840", LIT (0x1.ff00000000002p+840), { LIT (0x7.fffedaf2ef1987656a22cf97f1b4p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef1987656a22cf97f1b4p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef1987656a22cf97f1b4p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef1987656a22cf97f1b8p-424), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x7.0a727ba5c31b14d8b9e34019007p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8b9e340190074p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8b9e34019007p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8b9e340190074p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x7.fffffffffffffffffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0x7.fffffffffffffffffffffffffffcp-10004), ERRNO_UNCHANGED }, { LIT (0x8p-10004), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-10004), ERRNO_UNCHANGED }, { LIT (0x8p-10004), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x7.ffffffffff00000000000aaaaaa8p-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff00000000000aaaaaacp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff00000000000aaaaaa8p-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff00000000000aaaaaacp-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x7.ffffffffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffff00000004p-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-60", LIT (0x1p-60), { LIT (0x7.fffffffffffffffffffffffffffcp-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x7.fffffffffffffffffffffffffffcp-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x9.3a43cac1b8f7ed7b828f5f282b5p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7b828f5f282b5p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7b828f5f282b5p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7b828f5f282b58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffff8000000015555555538ep-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8000000015555555538ep-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8000000015555555538ep-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8000000015555555538e8p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0xf.ffffffffffffffffffffffffffcp-16388), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffffffffffffffffcp-16388), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff80000000008p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f8015538e4fa43825ff72a8a0bdp-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa43825ff72a8a0bdp-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa43825ff72a8a0bdp-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa43825ff72a8a0bd8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x3.ae4b2p+0", LIT (0x3.ae4b2p+0), { LIT (0xf.d085c66e86f30267f22d6f787d2p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f30267f22d6f787d2p-8), ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f30267f22d6f787d2p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f30267f22d6f787d28p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4.ffcp+72", LIT (0x4.ffcp+72), { LIT (0x1.ffffa2bb93061215e127257a3893p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061215e127257a3894p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061215e127257a3893p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061215e127257a3894p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+16380", LIT (0x4p+16380), { LIT (0xe.1ba855ba7e7ba4a295fe65161a38p-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4a295fe65161a38p-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4a295fe65161a38p-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4a295fe65161a4p-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1.ffffffffffffffffffffffffffffp-1024), ERRNO_UNCHANGED }, { LIT (0x2p-1024), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffffffp-1024), ERRNO_UNCHANGED }, { LIT (0x2p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1.ffffffffffffffffffffffffffffp-1076), ERRNO_UNCHANGED }, { LIT (0x2p-1076), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffffffp-1076), ERRNO_UNCHANGED }, { LIT (0x2p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.fffffc000002aaaaa9c71c71f49fp-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaaa9c71c71f49fp-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaaa9c71c71f49fp-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaaa9c71c71f4ap-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1.ffffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0x1.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496", LIT (0x4p-16496), { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffc000000000001p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.fffffffffffffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffc01p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x6.874828p+4", LIT (0x6.874828p+4), { LIT (-0x3.d6f0b408112cf3cdb53ca3ca7088p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3cdb53ca3ca7086p-16), ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3cdb53ca3ca7086p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3cdb53ca3ca7086p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x3.c1120ac30c305a93c61d86d25d24p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a93c61d86d25d24p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a93c61d86d25d24p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a93c61d86d25d26p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (0x1.1bd10e60877e2ce21eee868f9698p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce21eee868f9699p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce21eee868f9698p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce21eee868f9699p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+16380", LIT (0x8p+16380), { LIT (-0x6.c9bcc4d4937a306ec1ef5722901p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a306ec1ef5722901p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a306ec1ef5722900cp-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a306ec1ef5722900cp-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x3.fffffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x3.ffffffffffffe000000000000054p-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffe000000000000056p-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffe000000000000054p-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffe000000000000056p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x3.ffffffffffffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffe00002p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x3.ffe0005554e38e93e90e086a7b4p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e93e90e086a7b42p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e93e90e086a7b4p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e93e90e086a7b42p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x3.fffffffffffffffffffffffffffep-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.79475p+4", LIT (0x9.79475p+4), { LIT (0x2.49a6f3fb003462a1f15135cec05ap-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a1f15135cec05cp-16), ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a1f15135cec05ap-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a1f15135cec05cp-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xap+0", LIT (0xap+0), { LIT (0xb.2107a710048861578f0a8f4f2bf8p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a710048861578f0a8f4f2bf8p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a710048861578f0a8f4f2bf8p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a710048861578f0a8f4f2cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x5.9680759ada2f1ddd24ac845bcc0cp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1ddd24ac845bcc0cp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1ddd24ac845bcc0cp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1ddd24ac845bcc1p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x9.125bd8436acc225eb7a1cfb5fa48p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225eb7a1cfb5fa5p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225eb7a1cfb5fa48p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225eb7a1cfb5fa5p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x5.34b8be56c9cb044a0ef191b02514p-516), ERRNO_UNCHANGED }, { LIT (-0x5.34b8be56c9cb044a0ef191b0251p-516), ERRNO_UNCHANGED }, { LIT (-0x5.34b8be56c9cb044a0ef191b0251p-516), ERRNO_UNCHANGED }, { LIT (-0x5.34b8be56c9cb044a0ef191b0251p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (-0xc.6947737b0589955c345238216838p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955c345238216838p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955c34523821683p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955c34523821683p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0x7.0a728p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a7278p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a7278p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a7278p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x2p-128), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-128), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffff8p-128), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffff8p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.ed4edp-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4edp-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4edp-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4eep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x7.0a7278p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a7278p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a7278p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a728p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x7.fffff8p-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x7.fffff8p-24), ERRNO_UNCHANGED }, { LIT (0x8p-24), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-24), ERRNO_UNCHANGED }, { LIT (0x8p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x7.fffff8p-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-60", LIT (0x1p-60), { LIT (0x7.fffff8p-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x9.3a43cp-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43dp-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cp-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffp-20), ERRNO_UNCHANGED }, { LIT (0x1p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-20), ERRNO_UNCHANGED }, { LIT (0x1p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffp-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f8015p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8016p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x3.ae4b2p+0", LIT (0x3.ae4b2p+0), { LIT (0xf.d085cp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085cp-8), ERRNO_UNCHANGED }, { LIT (0xf.d085cp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085dp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4.ffcp+72", LIT (0x4.ffcp+72), { LIT (0x1.ffffa2p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa4p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.fffffcp-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffcp-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffcp-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1.fffff8p-128), UNDERFLOW_EXCEPTION }, { LIT (0x2p-128), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffff8p-128), UNDERFLOW_EXCEPTION }, { LIT (0x2p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.fffffep-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.fffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x6.874828p+4", LIT (0x6.874828p+4), { LIT (-0x3.d6f0b8p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b4p-16), ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b4p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b4p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x3.c11208p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120cp-4), ERRNO_UNCHANGED }, { LIT (0x3.c11208p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x3.fffffcp-28), ERRNO_UNCHANGED }, { LIT (0x4p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-28), ERRNO_UNCHANGED }, { LIT (0x4p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x3.fffffcp-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x3.ffep-8), ERRNO_UNCHANGED }, { LIT (0x3.ffep-8), ERRNO_UNCHANGED }, { LIT (0x3.ffep-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe004p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x9.79475p+4", LIT (0x9.79475p+4), { LIT (0x2.49a6fp-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f4p-16), ERRNO_UNCHANGED }, { LIT (0x2.49a6fp-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f4p-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xap+0", LIT (0xap+0), { LIT (0xb.2107ap-8), ERRNO_UNCHANGED }, { LIT (0xb.2107ap-8), ERRNO_UNCHANGED }, { LIT (0xb.2107ap-8), ERRNO_UNCHANGED }, { LIT (0xb.2107bp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x5.96807p-4), ERRNO_UNCHANGED }, { LIT (0x5.968078p-4), ERRNO_UNCHANGED }, { LIT (0x5.96807p-4), ERRNO_UNCHANGED }, { LIT (0x5.968078p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (-0xc.69478p-68), ERRNO_UNCHANGED }, { LIT (-0xc.69477p-68), ERRNO_UNCHANGED }, { LIT (-0xc.69477p-68), ERRNO_UNCHANGED }, { LIT (-0xc.69477p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0x7.0a727ba5c31b4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31bp-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31bp-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31bp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x2p-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffep-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffep-972), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffep-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.ed4ed4eb7e408p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e41p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.ff00000000002p+840", LIT (0x1.ff00000000002p+840), { LIT (0x7.fffedaf2ef198p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef198p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef198p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef19cp-424), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x7.0a727ba5c31bp-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31bp-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31bp-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x7.ffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff004p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x7.ffffffffffffcp-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-60", LIT (0x1p-60), { LIT (0x7.ffffffffffffcp-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x7.ffffffffffffcp-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x9.3a43cac1b8f78p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f8p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f78p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff800008p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.ffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f8015538e4fap-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa8p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fap-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.ffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x3.ae4b2p+0", LIT (0x3.ae4b2p+0), { LIT (0xf.d085c66e86f3p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3p-8), ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f38p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4.ffcp+72", LIT (0x4.ffcp+72), { LIT (0x1.ffffa2bb93061p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93062p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.fffffc000002ap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002bp-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002ap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002bp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1.fffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.fffffffffffffp-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.fffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x6.874828p+4", LIT (0x6.874828p+4), { LIT (-0x3.d6f0b408112dp-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112dp-16), ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cep-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cep-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x3.c1120ac30c304p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c306p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c304p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c306p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (0x1.1bd10e60877e2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e3p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e3p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x3.ffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x4p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x3.ffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x3.ffe0005554e38p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e3ap-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x3.ffffffffffffep-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.79475p+4", LIT (0x9.79475p+4), { LIT (0x2.49a6f3fb00346p-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb00346p-16), ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb00346p-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb00348p-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xap+0", LIT (0xap+0), { LIT (0xb.2107a7100488p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a71004888p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a7100488p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a71004888p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x5.9680759ada2fp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2fp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2fp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x9.125bd8436accp-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436accp-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436accp-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc8p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (-0xc.6947737b058ap-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b05898p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b05898p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b05898p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0x7.0a727ba5c31b14d8b9e3401902p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8b9e34019p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8b9e34019p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8b9e34019p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x2p-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffff8p-128), ERRNO_UNCHANGED }, { LIT (-0x1.ffffffffffffffffffffffffff8p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffffffffffffffffp-152), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffffffffffffffffp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x4p-972), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-972), UNDERFLOW_EXCEPTION }, { LIT (-0x3.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION }, { LIT (-0x3.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.ed4ed4eb7e408aa88a075493p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aa88a075493p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aa88a075493p-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aa88a07549304p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.ff00000000002p+840", LIT (0x1.ff00000000002p+840), { LIT (0x7.fffedaf2ef1987656a22cf97fp-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef1987656a22cf97f2p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef1987656a22cf97fp-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef1987656a22cf97f2p-424), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x7.0a727ba5c31b14d8b9e34019p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8b9e34019p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8b9e34019p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8b9e3401902p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x7.fffffffffffffffffffffffffep-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x7.ffffffffff00000000000aaaaap-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff00000000000aaaaap-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff00000000000aaaaap-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff00000000000aaaacp-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x7.ffffffffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffff000002p-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-60", LIT (0x1p-60), { LIT (0x7.fffffffffffffffffffffffffep-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x7.fffffffffffffffffffffffffep-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x9.3a43cac1b8f7ed7b828f5f2828p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7b828f5f282cp-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7b828f5f2828p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7b828f5f282cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffff8000000015555555538p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8000000015555555538p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8000000015555555538p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff800000001555555553cp-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff8p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff800000004p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f8015538e4fa43825ff72a8a08p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa43825ff72a8a0cp-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa43825ff72a8a08p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa43825ff72a8a0cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x3.ae4b2p+0", LIT (0x3.ae4b2p+0), { LIT (0xf.d085c66e86f30267f22d6f787cp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f30267f22d6f787cp-8), ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f30267f22d6f787cp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f30267f22d6f788p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4.ffcp+72", LIT (0x4.ffcp+72), { LIT (0x1.ffffa2bb93061215e127257a388p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061215e127257a388p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061215e127257a388p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061215e127257a39p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.fffffc000002aaaaa9c71c71f48p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaaa9c71c71f48p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaaa9c71c71f48p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaaa9c71c71f5p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1.ffffffffffffffffffffffffff8p-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffff8p-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffc00000000008p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.fffffffffffffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffc8p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x6.874828p+4", LIT (0x6.874828p+4), { LIT (-0x3.d6f0b408112cf3cdb53ca3ca71p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3cdb53ca3ca71p-16), ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3cdb53ca3ca7p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3cdb53ca3ca7p-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x3.c1120ac30c305a93c61d86d25dp-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a93c61d86d25dp-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a93c61d86d25dp-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a93c61d86d25ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (0x1.1bd10e60877e2ce21eee868f968p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce21eee868f968p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce21eee868f968p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce21eee868f97p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x3.ffffffffffffffffffffffffffp-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffffp-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffe0000000000001p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x3.ffffffffffffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffep-48), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffe001p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x3.ffe0005554e38e93e90e086a7bp-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e93e90e086a7bp-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e93e90e086a7bp-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e93e90e086a7cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x3.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-972), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.79475p+4", LIT (0x9.79475p+4), { LIT (0x2.49a6f3fb003462a1f15135cecp-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a1f15135cecp-16), ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a1f15135cecp-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a1f15135cec1p-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xap+0", LIT (0xap+0), { LIT (0xb.2107a710048861578f0a8f4f28p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a710048861578f0a8f4f2cp-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a710048861578f0a8f4f28p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a710048861578f0a8f4f2cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x5.9680759ada2f1ddd24ac845bccp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1ddd24ac845bccp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1ddd24ac845bccp-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1ddd24ac845bcep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x9.125bd8436acc225eb7a1cfb5f8p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225eb7a1cfb5fcp-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225eb7a1cfb5f8p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225eb7a1cfb5fcp-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x5.34b8be56c9cb044a0ef191b026p-516), ERRNO_UNCHANGED }, { LIT (-0x5.34b8be56c9cb044a0ef191b026p-516), ERRNO_UNCHANGED }, { LIT (-0x5.34b8be56c9cb044a0ef191b024p-516), ERRNO_UNCHANGED }, { LIT (-0x5.34b8be56c9cb044a0ef191b024p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (-0xc.6947737b0589955c345238216cp-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955c3452382168p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955c3452382168p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955c3452382168p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0x7.0a727ba5c31b14ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffff8p-16388), UNDERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffff8p-16388), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x2p-1024), ERRNO_UNCHANGED }, { LIT (-0x2p-1024), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x2p-1076), ERRNO_UNCHANGED }, { LIT (-0x2p-1076), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.ed4ed4eb7e408aap-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408abp-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aap-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408abp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.ff00000000002p+840", LIT (0x1.ff00000000002p+840), { LIT (0x7.fffedaf2ef19876p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef198768p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef19876p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef198768p-424), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x7.fffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0x7.fffffffffffffff8p-10004), ERRNO_UNCHANGED }, { LIT (0x8p-10004), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-10004), ERRNO_UNCHANGED }, { LIT (0x8p-10004), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff000008p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x7.fffffffffffffff8p-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-60", LIT (0x1p-60), { LIT (0x7.fffffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x7.fffffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x9.3a43cac1b8f7ed7p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed8p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff80000001p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0xf.ffffffffffffff8p-16388), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffff8p-16388), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffp-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f8015538e4fa438p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa438p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa438p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa439p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x3.ae4b2p+0", LIT (0x3.ae4b2p+0), { LIT (0xf.d085c66e86f3026p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3026p-8), ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3026p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3027p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4.ffcp+72", LIT (0x4.ffcp+72), { LIT (0x1.ffffa2bb93061214p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061216p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061214p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061216p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+16380", LIT (0x4p+16380), { LIT (0xe.1ba855ba7e7ba4ap-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4ap-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4ap-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4bp-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x2p-1024), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x2p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x2p-1076), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x2p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.fffffc000002aaaap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaacp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1.fffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x6.874828p+4", LIT (0x6.874828p+4), { LIT (-0x3.d6f0b408112cf3dp-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3ccp-16), ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3ccp-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3ccp-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x3.c1120ac30c305a9p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a94p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a9p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a94p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce4p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+16380", LIT (0x8p+16380), { LIT (-0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffe004p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x3.fffffffffffffffcp-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x3.ffe0005554e38e9p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e94p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e9p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e94p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.79475p+4", LIT (0x9.79475p+4), { LIT (0x2.49a6f3fb003462ap-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462ap-16), ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462ap-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a4p-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xap+0", LIT (0xap+0), { LIT (0xb.2107a7100488615p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a7100488615p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a7100488615p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a7100488616p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x5.9680759ada2f1dd8p-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1dep-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1dd8p-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1dep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x9.125bd8436acc225p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc226p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc226p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (-0xc.6947737b0589956p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589956p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0x7.0a727ba5c31b14ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffffcp-16388), UNDERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffffcp-16388), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x2p-1024), ERRNO_UNCHANGED }, { LIT (-0x2p-1024), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x2p-1076), ERRNO_UNCHANGED }, { LIT (-0x2p-1076), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x2p-128), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (-0x1.fffffffffffffffep-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x4p-152), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x4p-972), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.ed4ed4eb7e408aap-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408abp-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408aap-4), ERRNO_UNCHANGED }, { LIT (0x8.ed4ed4eb7e408abp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.ff00000000002p+840", LIT (0x1.ff00000000002p+840), { LIT (0x7.fffedaf2ef19876p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef198768p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef19876p-424), ERRNO_UNCHANGED }, { LIT (0x7.fffedaf2ef198768p-424), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14d8p-4), ERRNO_UNCHANGED }, { LIT (0x7.0a727ba5c31b14ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x7.fffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x8p-104), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0x7.fffffffffffffff8p-10004), ERRNO_UNCHANGED }, { LIT (0x8p-10004), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-10004), ERRNO_UNCHANGED }, { LIT (0x8p-10004), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffp-24), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffff000008p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x7.fffffffffffffff8p-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-44), ERRNO_UNCHANGED }, { LIT (0x8p-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-60", LIT (0x1p-60), { LIT (0x7.fffffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x8p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x7.fffffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x8p-604), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x9.3a43cac1b8f7ed7p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed8p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed7p-4), ERRNO_UNCHANGED }, { LIT (0x9.3a43cac1b8f7ed8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff8p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffff80000001p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0xf.ffffffffffffffcp-16388), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16384), UNDERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffffcp-16388), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffp-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-40), ERRNO_UNCHANGED }, { LIT (0x1p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f8015538e4fa438p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa438p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa438p-8), ERRNO_UNCHANGED }, { LIT (0xf.f8015538e4fa439p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x3.ae4b2p+0", LIT (0x3.ae4b2p+0), { LIT (0xf.d085c66e86f3026p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3026p-8), ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3026p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.d085c66e86f3027p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4.ffcp+72", LIT (0x4.ffcp+72), { LIT (0x1.ffffa2bb93061214p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061216p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061214p-40), ERRNO_UNCHANGED }, { LIT (0x1.ffffa2bb93061216p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+16380", LIT (0x4p+16380), { LIT (0xe.1ba855ba7e7ba4ap-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4ap-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4ap-8196), ERRNO_UNCHANGED }, { LIT (0xe.1ba855ba7e7ba4bp-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x2p-1024), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x2p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x2p-1076), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x2p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.fffffc000002aaaap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaaap-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffc000002aaacp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1.fffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x2p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x6.874828p+4", LIT (0x6.874828p+4), { LIT (-0x3.d6f0b408112cf3dp-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3ccp-16), ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3ccp-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (-0x3.d6f0b408112cf3ccp-16), ((TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x3.c1120ac30c305a9p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a94p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a9p-4), ERRNO_UNCHANGED }, { LIT (0x3.c1120ac30c305a94p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce2p-512), ERRNO_UNCHANGED }, { LIT (0x1.1bd10e60877e2ce4p-512), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+16380", LIT (0x8p+16380), { LIT (-0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a307p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED }, { LIT (-0x6.c9bcc4d4937a3068p-8196), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffe004p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x3.fffffffffffffffcp-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-48), ERRNO_UNCHANGED }, { LIT (0x4p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x3.ffe0005554e38e9p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e94p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e9p-8), ERRNO_UNCHANGED }, { LIT (0x3.ffe0005554e38e94p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x4p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.79475p+4", LIT (0x9.79475p+4), { LIT (0x2.49a6f3fb003462ap-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462ap-16), ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462ap-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x2.49a6f3fb003462a4p-16), ((TEST_COND_binary64) || (TEST_COND_binary128) || (TEST_COND_intel96) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xap+0", LIT (0xap+0), { LIT (0xb.2107a7100488615p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a7100488615p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a7100488615p-8), ERRNO_UNCHANGED }, { LIT (0xb.2107a7100488616p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x5.9680759ada2f1dd8p-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1dep-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1dd8p-4), ERRNO_UNCHANGED }, { LIT (0x5.9680759ada2f1dep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x9.125bd8436acc225p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc226p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc225p-516), ERRNO_UNCHANGED }, { LIT (0x9.125bd8436acc226p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (-0xc.6947737b0589956p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589956p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955p-68), ERRNO_UNCHANGED }, { LIT (-0xc.6947737b0589955p-68), ERRNO_UNCHANGED } },
#endif
  };

static void
j1_test (void)
{
  ALL_RM_TEST (j1, 0, j1_test_data, RUN_TEST_LOOP_f_f, END);
}

static void
do_test (void)
{
  j1_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
