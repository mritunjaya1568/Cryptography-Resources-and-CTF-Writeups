/* Test j0.
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

static const struct test_f_f_data j0_test_data[] =
  {
    /* j0 is the Bessel function of the first kind of order 0 */
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "inf", plus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },
    { "-inf", minus_infty, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN }, { 0, ERRNO_UNCHANGED|IGNORE_ZERO_INF_SIGN } },

#if (TEST_COND_binary128)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0xc.3e3fedebdc77c1cf1a9861159a6p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159a68p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159a6p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159a68p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.002000002p+592", LIT (-0x2.002000002p+592), { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03e8cp-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03e8cp-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03e8bcp-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03e8bcp-300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p+0", LIT (-0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d98p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d98p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16496", LIT (-0x4p-16496), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0x2.fd3fa9dee0899291bc853ffc5614p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc5614p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc5614p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc5616p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.30723674b28d6ea4efdbfbb4b748p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ea4efdbfbb4b75p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ea4efdbfbb4b748p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ea4efdbfbb4b75p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.3e3fedebdc77c1cf1a9861159a6p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159a68p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159a6p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159a68p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffc00000000003ffffff8p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00000000004p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00000000003ffffff8p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00000000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffc00000008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.602774p+0", LIT (0x2.602774p+0), { LIT (0x3.e83779fe19911fa806cee83ab7p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa806cee83ab7p-8), ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa806cee83ab7p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa806cee83ab702p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x3.950e7f6499def91adac0afbc5d8cp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91adac0afbc5d8cp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91adac0afbc5d8cp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91adac0afbc5d8ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffff000000003ffffffff8e38p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff000000003ffffffff8e38p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff000000003ffffffff8e38p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff000000003ffffffff8e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff00000000008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f003ff8e3fffb730abe3bbf5da78p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb730abe3bbf5da78p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb730abe3bbf5da78p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb730abe3bbf5da8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4.130e7p+4", LIT (0x4.130e7p+4), { LIT (-0x6.dd65d0005a18c03fc1c61141bb64p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c03fc1c61141bb6p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c03fc1c61141bb6p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c03fc1c61141bb6p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+0", LIT (0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d98p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87d98p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+16380", LIT (0x4p+16380), { LIT (-0x1.547d24fb1319012fae0dc6c96322p-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319012fae0dc6c96322p-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319012fae0dc6c96321p-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319012fae0dc6c96321p-8192), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0xf.ffffc000003fffffe38e38eaaaa8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003fffffe38e38eaaaa8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003fffffe38e38eaaaa8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003fffffe38e38eaaabp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496", LIT (0x4p-16496), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffc0000000000008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0xf.ffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffc008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8.2f4ecp+124", LIT (0x8.2f4ecp+124), { LIT (0xd.331ef7d26f466caca081c73402f8p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466caca081c73403p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466caca081c73402f8p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466caca081c73403p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x2.bf14eaafce04a587ded211e82082p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a587ded211e82084p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a587ded211e82082p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a587ded211e82084p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (-0x3.5c4f847797f2fb0411a8a82ca02ap-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb0411a8a82ca028p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb0411a8a82ca028p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb0411a8a82ca028p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+16380", LIT (0x8p+16380), { LIT (0x1.0bab81cdff9208215a7577214c49p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff9208215a7577214c49p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff9208215a7577214c49p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff9208215a7577214c4ap-8192), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0xf.ffffffffffff00000000000003f8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff00000000000004p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff00000000000003f8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff00000000000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0xf.ffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffff000008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0xf.ff0003fff8e3955550c841bcfebp-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955550c841bcfeb8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955550c841bcfebp-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955550c841bcfeb8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xa.5b833p+4", LIT (0xa.5b833p+4), { LIT (0xf.80ed0055a8e5c88af9c0edfe12ap-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88af9c0edfe12a8p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88af9c0edfe12ap-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88af9c0edfe12a8p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xap+0", LIT (0xap+0), { LIT (-0x3.ef5a5713c3ca70644304d7022888p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca70644304d7022886p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca70644304d7022886p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca70644304d7022886p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xd.d3efb53a950c68ecf70068c9937p-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ecf70068c9937p-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ecf70068c9937p-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ecf70068c99378p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xe.be71dp+104", LIT (0xe.be71dp+104), { LIT (0x1.fffe660069bbb660b03a17510b59p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb660b03a17510b59p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb660b03a17510b59p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb660b03a17510b5ap-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (-0x8.fb6ce7294f33633a6933acbe2708p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633a6933acbe27p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633a6933acbe27p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633a6933acbe27p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0xb.a80d0ee91ce259a722e1f019024p-516), ERRNO_UNCHANGED }, { LIT (-0xb.a80d0ee91ce259a722e1f0190238p-516), ERRNO_UNCHANGED }, { LIT (-0xb.a80d0ee91ce259a722e1f0190238p-516), ERRNO_UNCHANGED }, { LIT (-0xb.a80d0ee91ce259a722e1f0190238p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x2.fd3fa9dee0899291bc853ffc5614p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc5614p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc5614p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc5616p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0xc.3e3fep-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3ffp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fep-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3ffp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p+0", LIT (-0x4p+0), { LIT (-0x6.5ab9c8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0x2.fd3fa8p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa8p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa8p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3facp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.30723p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723p-4), ERRNO_UNCHANGED }, { LIT (0x8.30724p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.3e3fep-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3ffp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fep-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3ffp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.602774p+0", LIT (0x2.602774p+0), { LIT (0x3.e83778p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83778p-8), ERRNO_UNCHANGED }, { LIT (0x3.e83778p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e8377cp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x3.950e7cp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e8p-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7cp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f003fp-4), ERRNO_UNCHANGED }, { LIT (0xf.f004p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003fp-4), ERRNO_UNCHANGED }, { LIT (0xf.f004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4.130e7p+4", LIT (0x4.130e7p+4), { LIT (-0x6.dd65d8p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65dp-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65dp-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65dp-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p+0", LIT (0x4p+0), { LIT (-0x6.5ab9c8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-12", LIT (0x4p-12), { LIT (0xf.ffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128", LIT (0x4p-128), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-32", LIT (0x4p-32), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-52", LIT (0x4p-52), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8.2f4ecp+124", LIT (0x8.2f4ecp+124), { LIT (0xd.331efp-68), ERRNO_UNCHANGED }, { LIT (0xd.331efp-68), ERRNO_UNCHANGED }, { LIT (0xd.331efp-68), ERRNO_UNCHANGED }, { LIT (0xd.331fp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x2.bf14e8p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14ecp-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14e8p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152", LIT (0x8p-152), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-28", LIT (0x8p-28), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-48", LIT (0x8p-48), { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-8", LIT (0x8p-8), { LIT (0xf.ffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ff001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xa.5b833p+4", LIT (0xa.5b833p+4), { LIT (0xf.80edp-20), ERRNO_UNCHANGED }, { LIT (0xf.80edp-20), ERRNO_UNCHANGED }, { LIT (0xf.80edp-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed1p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xap+0", LIT (0xap+0), { LIT (-0x3.ef5a58p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a58p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a54p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a54p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xd.d3efbp-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efbp-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efbp-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xe.be71dp+104", LIT (0xe.be71dp+104), { LIT (0x1.fffe66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe68p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x2.fd3fa8p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa8p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa8p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3facp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0xc.3e3fedebdc778p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc78p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc778p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc78p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.002000002p+592", LIT (-0x2.002000002p+592), { LIT (-0x7.ffff5bc14ea2cp-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2cp-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea28p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea28p-300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p+0", LIT (-0x4p+0), { LIT (-0x6.5ab9c24fa53e8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0x2.fd3fa9dee0898p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089ap-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0898p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089ap-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.30723674b28dp-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d8p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28dp-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.3e3fedebdc778p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc78p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc778p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc78p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.602774p+0", LIT (0x2.602774p+0), { LIT (0x3.e83779fe1991p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19912p-8), ERRNO_UNCHANGED }, { LIT (0x3.e83779fe1991p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19912p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x3.950e7f6499deep-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499dfp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499deep-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499dfp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff000008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f003ff8e3fff8p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fff8p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fff8p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4.130e7p+4", LIT (0x4.130e7p+4), { LIT (-0x6.dd65d0005a19p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18cp-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18cp-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18cp-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p+0", LIT (0x4p+0), { LIT (-0x6.5ab9c24fa53e8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-12", LIT (0x4p-12), { LIT (0xf.ffffc000003f8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000004p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003f8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128", LIT (0x4p-128), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-32", LIT (0x4p-32), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-52", LIT (0x4p-52), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8.2f4ecp+124", LIT (0x8.2f4ecp+124), { LIT (0xd.331ef7d26f46p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f468p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f46p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f468p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x2.bf14eaafce04ap-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04ap-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04ap-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (-0x3.5c4f847797f3p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f3p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2ep-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2ep-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152", LIT (0x8p-152), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-28", LIT (0x8p-28), { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-48", LIT (0x8p-48), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-8", LIT (0x8p-8), { LIT (0xf.ff0003fff8e38p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e38p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e38p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972", LIT (0x8p-972), { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xa.5b833p+4", LIT (0xa.5b833p+4), { LIT (0xf.80ed0055a8e58p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e6p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e58p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e6p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xap+0", LIT (0xap+0), { LIT (-0x3.ef5a5713c3ca8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xd.d3efb53a950cp-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c8p-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950cp-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xe.be71dp+104", LIT (0xe.be71dp+104), { LIT (0x1.fffe660069bbbp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbbp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbbp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbcp-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (-0x8.fb6ce7294f338p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f338p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x2.fd3fa9dee0898p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089ap-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0898p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089ap-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0xc.3e3fedebdc77c1cf1a98611598p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a98611598p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.002000002p+592", LIT (-0x2.002000002p+592), { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03eap-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03e8p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03e8p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a98c2c8b9c03e8p-300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p+0", LIT (-0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd1657dfde87ep-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87ep-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0x2.fd3fa9dee0899291bc853ffc56p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc56p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc56p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc57p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.30723674b28d6ea4efdbfbb4b4p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ea4efdbfbb4b8p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ea4efdbfbb4b4p-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ea4efdbfbb4b8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.3e3fedebdc77c1cf1a98611598p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a98611598p-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cf1a9861159cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffc00000000003ffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00000000004p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00000000003ffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00000000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffc000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.602774p+0", LIT (0x2.602774p+0), { LIT (0x3.e83779fe19911fa806cee83ab7p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa806cee83ab7p-8), ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa806cee83ab7p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa806cee83ab8p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x3.950e7f6499def91adac0afbc5dp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91adac0afbc5ep-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91adac0afbc5dp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91adac0afbc5ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffff000000003ffffffff8cp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff000000003ffffffff9p-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff000000003ffffffff8cp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff000000003ffffffff9p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffff000000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f003ff8e3fffb730abe3bbf5d8p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb730abe3bbf5dcp-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb730abe3bbf5d8p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb730abe3bbf5dcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4.130e7p+4", LIT (0x4.130e7p+4), { LIT (-0x6.dd65d0005a18c03fc1c61141bcp-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c03fc1c61141bcp-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c03fc1c61141bap-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c03fc1c61141bap-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p+0", LIT (0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd1657dfde87ep-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87ep-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cd1657dfde87cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0xf.ffffc000003fffffe38e38eaa8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003fffffe38e38eaacp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003fffffe38e38eaa8p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003fffffe38e38eaacp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffc00000000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0xf.ffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffc4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8.2f4ecp+124", LIT (0x8.2f4ecp+124), { LIT (0xd.331ef7d26f466caca081c734p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466caca081c73404p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466caca081c734p-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466caca081c73404p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x2.bf14eaafce04a587ded211e82p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a587ded211e821p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a587ded211e82p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a587ded211e821p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (-0x3.5c4f847797f2fb0411a8a82ca1p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb0411a8a82cap-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb0411a8a82cap-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb0411a8a82cap-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff00000000000004p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff00000000000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0xf.ffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffff0004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0xf.ff0003fff8e3955550c841bcfcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955550c841bdp-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955550c841bcfcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955550c841bdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xa.5b833p+4", LIT (0xa.5b833p+4), { LIT (0xf.80ed0055a8e5c88af9c0edfe1p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88af9c0edfe14p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88af9c0edfe1p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88af9c0edfe14p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xap+0", LIT (0xap+0), { LIT (-0x3.ef5a5713c3ca70644304d70229p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca70644304d70229p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca70644304d70228p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca70644304d70228p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xd.d3efb53a950c68ecf70068c99p-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ecf70068c994p-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ecf70068c99p-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ecf70068c994p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xe.be71dp+104", LIT (0xe.be71dp+104), { LIT (0x1.fffe660069bbb660b03a17510bp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb660b03a17510b8p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb660b03a17510bp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb660b03a17510b8p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (-0x8.fb6ce7294f33633a6933acbe28p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633a6933acbe28p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633a6933acbe24p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633a6933acbe24p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0xb.a80d0ee91ce259a722e1f01904p-516), ERRNO_UNCHANGED }, { LIT (-0xb.a80d0ee91ce259a722e1f01904p-516), ERRNO_UNCHANGED }, { LIT (-0xb.a80d0ee91ce259a722e1f019p-516), ERRNO_UNCHANGED }, { LIT (-0xb.a80d0ee91ce259a722e1f019p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x2.fd3fa9dee0899291bc853ffc56p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc56p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc56p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899291bc853ffc57p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.002000002p+592", LIT (-0x2.002000002p+592), { LIT (-0x7.ffff5bc14ea2a99p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a99p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a988p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a988p-300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p+0", LIT (-0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899294p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.30723674b28d6eap-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6eap-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6eap-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ebp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.602774p+0", LIT (0x2.602774p+0), { LIT (0x3.e83779fe19911fa8p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa8p-8), ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa8p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911facp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x3.950e7f6499def918p-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91cp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def918p-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff00000001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f003ff8e3fffb73p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb73p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb73p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb74p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4.130e7p+4", LIT (0x4.130e7p+4), { LIT (-0x6.dd65d0005a18c04p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c04p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c038p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c038p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+0", LIT (0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+16380", LIT (0x4p+16380), { LIT (-0x1.547d24fb1319013p-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319013p-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319012ep-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319012ep-8192), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0xf.ffffc000003ffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000004p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003ffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8.2f4ecp+124", LIT (0x8.2f4ecp+124), { LIT (0xd.331ef7d26f466cap-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466cbp-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466cap-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466cbp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x2.bf14eaafce04a584p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a588p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a584p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a588p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (-0x3.5c4f847797f2fb08p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb04p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb04p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb04p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+16380", LIT (0x8p+16380), { LIT (0x1.0bab81cdff92082p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff920822p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff92082p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff920822p-8192), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0xf.ff0003fff8e3955p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3956p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xa.5b833p+4", LIT (0xa.5b833p+4), { LIT (0xf.80ed0055a8e5c88p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c89p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c89p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xap+0", LIT (0xap+0), { LIT (-0x3.ef5a5713c3ca7068p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca7064p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca7064p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca7064p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xd.d3efb53a950c68ep-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68fp-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ep-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xe.be71dp+104", LIT (0xe.be71dp+104), { LIT (0x1.fffe660069bbb66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb662p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (-0x8.fb6ce7294f33634p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33634p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899294p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.002000002p+592", LIT (-0x2.002000002p+592), { LIT (-0x7.ffff5bc14ea2a99p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a99p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a988p-300), ERRNO_UNCHANGED }, { LIT (-0x7.ffff5bc14ea2a988p-300), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p+0", LIT (-0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899294p-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.8p+0", LIT (0x1.8p+0), { LIT (0x8.30723674b28d6eap-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6eap-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6eap-4), ERRNO_UNCHANGED }, { LIT (0x8.30723674b28d6ebp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1cp-4), ERRNO_UNCHANGED }, { LIT (0xc.3e3fedebdc77c1dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc00001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.602774p+0", LIT (0x2.602774p+0), { LIT (0x3.e83779fe19911fa8p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa8p-8), ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911fa8p-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x3.e83779fe19911facp-8), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x3.950e7f6499def918p-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91cp-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def918p-4), ERRNO_UNCHANGED }, { LIT (0x3.950e7f6499def91cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.fffffff00000001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-4", LIT (0x2p-4), { LIT (0xf.f003ff8e3fffb73p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb73p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb73p-4), ERRNO_UNCHANGED }, { LIT (0xf.f003ff8e3fffb74p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4.130e7p+4", LIT (0x4.130e7p+4), { LIT (-0x6.dd65d0005a18c04p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c04p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c038p-16), ERRNO_UNCHANGED }, { LIT (-0x6.dd65d0005a18c038p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+0", LIT (0x4p+0), { LIT (-0x6.5ab9c24fa53e5cd8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED }, { LIT (-0x6.5ab9c24fa53e5cdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+16380", LIT (0x4p+16380), { LIT (-0x1.547d24fb1319013p-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319013p-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319012ep-8192), ERRNO_UNCHANGED }, { LIT (-0x1.547d24fb1319012ep-8192), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0xf.ffffc000003ffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000004p-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000003ffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffc000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffcp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8.2f4ecp+124", LIT (0x8.2f4ecp+124), { LIT (0xd.331ef7d26f466cap-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466cbp-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466cap-68), ERRNO_UNCHANGED }, { LIT (0xd.331ef7d26f466cbp-68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+0", LIT (0x8p+0), { LIT (0x2.bf14eaafce04a584p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a588p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a584p-4), ERRNO_UNCHANGED }, { LIT (0x2.bf14eaafce04a588p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+1020", LIT (0x8p+1020), { LIT (-0x3.5c4f847797f2fb08p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb04p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb04p-516), ERRNO_UNCHANGED }, { LIT (-0x3.5c4f847797f2fb04p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+16380", LIT (0x8p+16380), { LIT (0x1.0bab81cdff92082p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff920822p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff92082p-8192), ERRNO_UNCHANGED }, { LIT (0x1.0bab81cdff920822p-8192), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0xf.ff0003fff8e3955p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3955p-4), ERRNO_UNCHANGED }, { LIT (0xf.ff0003fff8e3956p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xa.5b833p+4", LIT (0xa.5b833p+4), { LIT (0xf.80ed0055a8e5c88p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c89p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c88p-20), ERRNO_UNCHANGED }, { LIT (0xf.80ed0055a8e5c89p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xap+0", LIT (0xap+0), { LIT (-0x3.ef5a5713c3ca7068p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca7064p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca7064p-4), ERRNO_UNCHANGED }, { LIT (-0x3.ef5a5713c3ca7064p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xd.d3efb53a950c68ep-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68fp-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68ep-4), ERRNO_UNCHANGED }, { LIT (0xd.d3efb53a950c68fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xe.be71dp+104", LIT (0xe.be71dp+104), { LIT (0x1.fffe660069bbb66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb66p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffe660069bbb662p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (-0x8.fb6ce7294f33634p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33634p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633p-516), ERRNO_UNCHANGED }, { LIT (-0x8.fb6ce7294f33633p-516), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee089929p-68), ERRNO_UNCHANGED }, { LIT (0x2.fd3fa9dee0899294p-68), ERRNO_UNCHANGED } },
#endif
  };

static void
j0_test (void)
{
  ALL_RM_TEST (j0, 0, j0_test_data, RUN_TEST_LOOP_f_f, END);
}

static void
do_test (void)
{
  j0_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
