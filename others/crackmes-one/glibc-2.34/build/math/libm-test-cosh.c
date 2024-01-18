/* Test cosh.
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

static const struct test_f_f_data cosh_test_data[] =
  {
    { "inf", plus_infty, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED } },
    { "-inf", minus_infty, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED } },
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

#if (TEST_COND_binary128)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1p-56", LIT (-0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1p-72", LIT (-0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d374p+12", LIT (-0x2.c5d374p+12), { LIT (0xf.fcff8165c0f3206f5cab39217878p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206f5cab3921788p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206f5cab39217878p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206f5cab3921788p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d376eefcd4ap+12", LIT (-0x2.c5d376eefcd4ap+12), { LIT (0xf.ffee36237fd43a2b15e5b20b6d68p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a2b15e5b20b6d68p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a2b15e5b20b6d68p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a2b15e5b20b6d7p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d376eefcd4bbe8p+12", LIT (-0x2.c5d376eefcd4bbe8p+12), { LIT (0xf.ffee36239bbc1b2482e87ba9d31p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b2482e87ba9d31p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b2482e87ba9d31p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b2482e87ba9d318p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d376eefcd4bbeb000452d84662p+12", LIT (-0x2.c5d376eefcd4bbeb000452d84662p+12), { LIT (0xf.ffee36239bbf1b257fe2a0ad4a38p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a0ad4a38p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a0ad4a38p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a0ad4a4p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d376eefcd4bbeb000452d846p+12", LIT (-0x2.c5d376eefcd4bbeb000452d846p+12), { LIT (0xf.ffee36239bbf1b257fe2a04b4aap+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a04b4aa8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a04b4aap+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a04b4aa8p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d376eefcd4bbeb000452d847p+12", LIT (-0x2.c5d376eefcd4bbeb000452d847p+12), { LIT (0xf.ffee36239bbf1b257fe2a14b4988p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a14b4988p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a14b4988p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbf1b257fe2a14b499p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d376eefcd4bbecp+12", LIT (-0x2.c5d376eefcd4bbecp+12), { LIT (0xf.ffee36239bc01b201071629959d8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b201071629959ep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b201071629959d8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b201071629959ep+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d376eefcd4cp+12", LIT (-0x2.c5d376eefcd4cp+12), { LIT (0xf.ffee36239fd416975d055a5c2fd8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd416975d055a5c2fep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd416975d055a5c2fd8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd416975d055a5c2fep+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bb03a4p+12", LIT (-0x2.c5d37700c6bb03a4p+12), { LIT (0xf.fffffffffffd3db49364b6b422f8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3db49364b6b422f8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3db49364b6b422f8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3db49364b6b423p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bb03a6c24b6c9b494cp+12", LIT (-0x2.c5d37700c6bb03a6c24b6c9b494cp+12), { LIT (0xf.ffffffffffffffffffffffffe61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffe61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffe61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffe618p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bb03a6c24b6c9b494ep+12", LIT (-0x2.c5d37700c6bb03a6c24b6c9b494ep+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bb03a6c24b6c9b49p+12", LIT (-0x2.c5d37700c6bb03a6c24b6c9b49p+12), { LIT (0xf.ffffffffffffffffffffffb3e61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffb3e61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffb3e61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffb3e618p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bb03a6c24b6c9b4ap+12", LIT (-0x2.c5d37700c6bb03a6c24b6c9b4ap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bb03a8p+12", LIT (-0x2.c5d37700c6bb03a8p+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bb2p+12", LIT (-0x2.c5d37700c6bb2p+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d37700c6bbp+12", LIT (-0x2.c5d37700c6bbp+12), { LIT (0xf.fffffffffc593db49365215d58ap+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593db49365215d58ap+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593db49365215d58ap+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593db49365215d58a8p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5d378p+12", LIT (-0x2.c5d378p+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5e3acd2922a6p+8", LIT (-0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5aec6fa96b5868p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b5868p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b5868p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b587p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5e3acp+8", LIT (-0x2.c5e3acp+8), { LIT (0x8.e6726f55d78868187eba9eac3828p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac383p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac3828p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac383p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c5e3bp+8", LIT (-0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230b719596be4b878p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b88p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b878p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b88p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679d1f73f0fap+8", LIT (-0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72ca74ded4db59dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db59d8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db59dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db59d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679d1f73f0fb624d358b213a7p+8", LIT (-0x2.c679d1f73f0fb624d358b213a7p+8), { LIT (0xf.ffffffffffffbffffffffff303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff303a8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff303a8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679d1f73f0fb624d358b213a8p+8", LIT (-0x2.c679d1f73f0fb624d358b213a8p+8), { LIT (0xf.ffffffffffffc0000000000303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffc0000000000303a8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffc0000000000303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffc0000000000303a8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679d1f73f0fb624p+8", LIT (-0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2ca74dec58303d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58303ep+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58303d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58303ep+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679d1f73f0fb628p+8", LIT (-0x2.c679d1f73f0fb628p+8), { LIT (0xf.fffffffffffff2ca74dec5830328p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2ca74dec5830328p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2ca74dec5830328p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2ca74dec583033p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679d1f73f0fcp+8", LIT (-0x2.c679d1f73f0fcp+8), { LIT (0x1.000000000009d72ca74dec889b32p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ca74dec889b32p+1024), ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ca74dec889b32p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ca74dec889b33p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679d4p+8", LIT (-0x2.c679d4p+8), { LIT (0x1.000208c301f36f1c494de034e37fp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1c494de034e38p+1024), ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1c494de034e37fp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1c494de034e38p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c679dp+8", LIT (-0x2.c679dp+8), { LIT (0xf.ffe08c2deed02b0e9ba9e9c4217p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42178p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c4217p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42178p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.cee48p+0", LIT (-0x3.cee48p+0), { LIT (0x1.68b8dc5c49a88f56145c6a6eb1fbp+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56145c6a6eb1fbp+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56145c6a6eb1fbp+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56145c6a6eb1fcp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.d04328728b72cp-4", LIT (-0x3.d04328728b72cp-4), { LIT (0x1.074e54544d14c800f66940138bb8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c800f66940138bb9p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c800f66940138bb8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c800f66940138bb9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.d04328p-4", LIT (-0x3.d04328p-4), { LIT (0x1.074e5452941d4cca93e217a9d914p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cca93e217a9d915p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cca93e217a9d914p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cca93e217a9d915p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.d0432cp-4", LIT (-0x3.d0432cp-4), { LIT (0x1.074e5461fa3e0c5d7d941a2999d4p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5d7d941a2999d5p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5d7d941a2999d4p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5d7d941a2999d5p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16496", LIT (-0x4p-16496), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.96a7e8p+4", LIT (-0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e7480e07d1c02e7cp+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e7cp+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e7cp+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e7dp+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.96a7ep+4", LIT (-0x5.96a7ep+4), { LIT (0xf.fffec1f473940d22f2195eac65d8p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac65ep+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac65d8p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac65ep+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xb.60713p+0", LIT (-0xb.60713p+0), { LIT (0xa.a7179c1019ae57dfcdfc8ae2c118p+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dfcdfc8ae2c12p+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dfcdfc8ae2c118p+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dfcdfc8ae2c12p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xd.0c03p+0", LIT (-0xd.0c03p+0), { LIT (0x3.89993d3ed8030b962f4a1d333f74p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b962f4a1d333f74p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b962f4a1d333f74p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b962f4a1d333f76p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.ffffffffffffbffffffffffffcp+1020", LIT (-0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffffffffffffffffffffffff8p+16380", LIT (-0xf.fffffffffffffffffffffffffff8p+16380), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.629188p+4", LIT (0x1.629188p+4), { LIT (0x7.d716115677b7981c1502cadb3d14p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7981c1502cadb3d14p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7981c1502cadb3d14p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7981c1502cadb3d18p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.6p+4", LIT (0x1.6p+4), { LIT (0x6.ad6b6e710d7fe07862bf28dca0ap+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe07862bf28dca0a4p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe07862bf28dca0ap+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe07862bf28dca0a4p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.7p+4", LIT (0x1.7p+4), { LIT (0x1.226af33b1fdc0a57bd4b4ab2311bp+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a57bd4b4ab2311bp+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a57bd4b4ab2311bp+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a57bd4b4ab2311cp+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.8p+4", LIT (0x1.8p+4), { LIT (0x3.156ff6a8ebf6e66f4935281c5faep+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66f4935281c5fbp+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66f4935281c5faep+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66f4935281c5fbp+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x1.000000000080000000000aaaaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000080000000000aaaaaabp+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000080000000000aaaaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000080000000000aaaaaabp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x1.000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000080000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-56", LIT (0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-72", LIT (0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d374p+12", LIT (0x2.c5d374p+12), { LIT (0xf.fcff8165c0f3206f5cab39217878p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206f5cab3921788p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206f5cab39217878p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206f5cab3921788p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d376167f404p+12", LIT (0x2.c5d376167f404p+12), { LIT (0xf.ff15bf3851a92be36a9dffe7566p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92be36a9dffe75668p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92be36a9dffe7566p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92be36a9dffe75668p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d376167f4052f4p+12", LIT (0x2.c5d376167f4052f4p+12), { LIT (0xf.ff15bf38649c16662e1ff4acb938p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c16662e1ff4acb94p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c16662e1ff4acb938p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c16662e1ff4acb94p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d376167f406p+12", LIT (0x2.c5d376167f406p+12), { LIT (0xf.ff15bf3871a75761db61506a9ba8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a75761db61506a9bbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a75761db61506a9ba8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a75761db61506a9bbp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bb03a4p+12", LIT (0x2.c5d37700c6bb03a4p+12), { LIT (0xf.fffffffffffd3db49364b6b422f8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3db49364b6b422f8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3db49364b6b422f8p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3db49364b6b423p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bb03a6c24b6c9b494cp+12", LIT (0x2.c5d37700c6bb03a6c24b6c9b494cp+12), { LIT (0xf.ffffffffffffffffffffffffe61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffe61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffe61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffffe618p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bb03a6c24b6c9b494ep+12", LIT (0x2.c5d37700c6bb03a6c24b6c9b494ep+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bb03a6c24b6c9b49p+12", LIT (0x2.c5d37700c6bb03a6c24b6c9b49p+12), { LIT (0xf.ffffffffffffffffffffffb3e61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffb3e61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffb3e61p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffffffffffffb3e618p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bb03a6c24b6c9b4ap+12", LIT (0x2.c5d37700c6bb03a6c24b6c9b4ap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bb03a8p+12", LIT (0x2.c5d37700c6bb03a8p+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bb2p+12", LIT (0x2.c5d37700c6bb2p+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d37700c6bbp+12", LIT (0x2.c5d37700c6bbp+12), { LIT (0xf.fffffffffc593db49365215d58ap+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593db49365215d58ap+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593db49365215d58ap+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593db49365215d58a8p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5d378p+12", LIT (0x2.c5d378p+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5e3acd2922a6p+8", LIT (0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5aec6fa96b5868p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b5868p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b5868p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b587p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5e3acp+8", LIT (0x2.c5e3acp+8), { LIT (0x8.e6726f55d78868187eba9eac3828p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac383p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac3828p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac383p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5e3bp+8", LIT (0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230b719596be4b878p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b88p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b878p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b88p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c67888p+8", LIT (0x2.c67888p+8), { LIT (0xf.eb6dd0c67ed40c8e47a528f28b58p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8e47a528f28b6p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8e47a528f28b58p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8e47a528f28b6p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c6788afe3ccd6p+8", LIT (0x2.c6788afe3ccd6p+8), { LIT (0xf.eb9d7748586375cf28c2e4264d88p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cf28c2e4264d88p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cf28c2e4264d88p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cf28c2e4264d9p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c6788cp+8", LIT (0x2.c6788cp+8), { LIT (0xf.ebad7efd1e065dfa4889d66d8e48p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfa4889d66d8e5p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfa4889d66d8e48p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfa4889d66d8e5p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679d1f73f0fap+8", LIT (0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72ca74ded4db59dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db59d8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db59dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db59d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679d1f73f0fb624d358b213a7p+8", LIT (0x2.c679d1f73f0fb624d358b213a7p+8), { LIT (0xf.ffffffffffffbffffffffff303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff303a8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff303a8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679d1f73f0fb624d358b213a8p+8", LIT (0x2.c679d1f73f0fb624d358b213a8p+8), { LIT (0xf.ffffffffffffc0000000000303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffc0000000000303a8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffc0000000000303ap+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffc0000000000303a8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679d1f73f0fb624p+8", LIT (0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2ca74dec58303d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58303ep+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58303d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58303ep+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679d1f73f0fb628p+8", LIT (0x2.c679d1f73f0fb628p+8), { LIT (0xf.fffffffffffff2ca74dec5830328p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2ca74dec5830328p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2ca74dec5830328p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2ca74dec583033p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679d1f73f0fcp+8", LIT (0x2.c679d1f73f0fcp+8), { LIT (0x1.000000000009d72ca74dec889b32p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ca74dec889b32p+1024), ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ca74dec889b32p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ca74dec889b33p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679d4p+8", LIT (0x2.c679d4p+8), { LIT (0x1.000208c301f36f1c494de034e37fp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1c494de034e38p+1024), ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1c494de034e37fp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1c494de034e38p+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c679dp+8", LIT (0x2.c679dp+8), { LIT (0xf.ffe08c2deed02b0e9ba9e9c4217p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42178p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c4217p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42178p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.f5d128p+0", LIT (0x2.f5d128p+0), { LIT (0x9.ad526ad564463ffecc391e2180a8p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffecc391e2180a8p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffecc391e2180a8p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffecc391e2180bp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.0000000200000000aaaaaaaac16cp+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000000aaaaaaaac16cp+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000000aaaaaaaac16cp+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000000aaaaaaaac16dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000020000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x3.2p+4", LIT (0x3.2p+4), { LIT (0x8.c881f20405a2b326bba067c62ecp+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b326bba067c62ec8p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b326bba067c62ecp+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b326bba067c62ec8p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.00000800000aaaaab05b05b1fb1fp+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaab05b05b1fb2p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaab05b05b1fb1fp+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaab05b05b1fb2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496", LIT (0x4p-16496), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.00000000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000801p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5.8bfe6p+4", LIT (0x5.8bfe6p+4), { LIT (0x8.378d97e8a9838b8164de61b93a68p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8164de61b93a68p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8164de61b93a68p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8164de61b93a7p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5.96a7e8p+4", LIT (0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e7480e07d1c02e7cp+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e7cp+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e7cp+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e7dp+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5.96a7ep+4", LIT (0x5.96a7ep+4), { LIT (0xf.fffec1f473940d22f2195eac65d8p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac65ep+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac65d8p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac65ep+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x1.00000000000020000000000000aap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000020000000000000abp+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000020000000000000aap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000020000000000000abp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x1.00000000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000200001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x1.002000aaac16c30c31eaf1bbb19p+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30c31eaf1bbb19p+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30c31eaf1bbb19p+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30c31eaf1bbb191p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x1.4b705d1e5d6a787aa2de94beca32p+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787aa2de94beca32p+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787aa2de94beca32p+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787aa2de94beca33p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffffffffffffff8p+16380", LIT (0xf.fffffffffffffffffffffffffff8p+16380), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0x1.8b0754p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b0756p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b0754p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b0756p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1p-56", LIT (-0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1p-72", LIT (-0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.c5d374p+12", LIT (-0x2.c5d374p+12), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.c5d378p+12", LIT (-0x2.c5d378p+12), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.c5e3acp+8", LIT (-0x2.c5e3acp+8), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.c5e3bp+8", LIT (-0x2.c5e3bp+8), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.c679d4p+8", LIT (-0x2.c679d4p+8), { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.c679dp+8", LIT (-0x2.c679dp+8), { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.cee48p+0", LIT (-0x3.cee48p+0), { LIT (0x1.68b8dcp+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dcp+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dcp+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.d04328p-4", LIT (-0x3.d04328p-4), { LIT (0x1.074e54p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e56p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.d0432cp-4", LIT (-0x3.d0432cp-4), { LIT (0x1.074e54p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e56p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x5.96a7e8p+4", LIT (-0x5.96a7e8p+4), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "-0x5.96a7ep+4", LIT (-0x5.96a7ep+4), { LIT (0xf.fffecp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffecp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffecp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffedp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xb.60713p+0", LIT (-0xb.60713p+0), { LIT (0xa.a7179p+12), ERRNO_UNCHANGED }, { LIT (0xa.a717ap+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179p+12), ERRNO_UNCHANGED }, { LIT (0xa.a717ap+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xd.0c03p+0", LIT (-0xd.0c03p+0), { LIT (0x3.89993cp+16), ERRNO_UNCHANGED }, { LIT (0x3.89993cp+16), ERRNO_UNCHANGED }, { LIT (0x3.89993cp+16), ERRNO_UNCHANGED }, { LIT (0x3.89994p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.629188p+4", LIT (0x1.629188p+4), { LIT (0x7.d7161p+28), ERRNO_UNCHANGED }, { LIT (0x7.d7161p+28), ERRNO_UNCHANGED }, { LIT (0x7.d7161p+28), ERRNO_UNCHANGED }, { LIT (0x7.d71618p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.6p+4", LIT (0x1.6p+4), { LIT (0x6.ad6b68p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b7p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b68p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b7p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.7p+4", LIT (0x1.7p+4), { LIT (0x1.226af2p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af4p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af2p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af4p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.8p+4", LIT (0x1.8p+4), { LIT (0x3.156ff4p+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff8p+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff4p+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff8p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-56", LIT (0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-72", LIT (0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c5d374p+12", LIT (0x2.c5d374p+12), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c5d378p+12", LIT (0x2.c5d378p+12), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c5e3acp+8", LIT (0x2.c5e3acp+8), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c5e3bp+8", LIT (0x2.c5e3bp+8), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c67888p+8", LIT (0x2.c67888p+8), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c6788cp+8", LIT (0x2.c6788cp+8), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c679d4p+8", LIT (0x2.c679d4p+8), { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c679dp+8", LIT (0x2.c679dp+8), { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x2.f5d128p+0", LIT (0x2.f5d128p+0), { LIT (0x9.ad526p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad527p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad527p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x3.2p+4", LIT (0x3.2p+4), { LIT (0x8.c881fp+68), ERRNO_UNCHANGED }, { LIT (0x8.c881fp+68), ERRNO_UNCHANGED }, { LIT (0x8.c881fp+68), ERRNO_UNCHANGED }, { LIT (0x8.c882p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x5.8bfe6p+4", LIT (0x5.8bfe6p+4), { LIT (0x8.378d9p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d9p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d9p+124), ERRNO_UNCHANGED }, { LIT (0x8.378dap+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x5.96a7e8p+4", LIT (0x5.96a7e8p+4), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary32)
    { "0x5.96a7ep+4", LIT (0x5.96a7ep+4), { LIT (0xf.fffecp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffecp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffecp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffedp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x1.002p+0), ERRNO_UNCHANGED }, { LIT (0x1.002p+0), ERRNO_UNCHANGED }, { LIT (0x1.002p+0), ERRNO_UNCHANGED }, { LIT (0x1.002002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x1.4b705cp+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705ep+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705cp+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0x1.8b07551d9f55p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f551p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1p-56", LIT (-0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1p-72", LIT (-0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5d374p+12", LIT (-0x2.c5d374p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5d376eefcd4ap+12", LIT (-0x2.c5d376eefcd4ap+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5d376eefcd4cp+12", LIT (-0x2.c5d376eefcd4cp+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5d37700c6bb2p+12", LIT (-0x2.c5d37700c6bb2p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5d37700c6bbp+12", LIT (-0x2.c5d37700c6bbp+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5d378p+12", LIT (-0x2.c5d378p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5e3acd2922a6p+8", LIT (-0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00cp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5e3acp+8", LIT (-0x2.c5e3acp+8), { LIT (0x8.e6726f55d788p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d7888p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d7888p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c5e3bp+8", LIT (-0x2.c5e3bp+8), { LIT (0x8.e6960966c8d2p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d2p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d2p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c679d1f73f0fap+8", LIT (-0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c679d1f73f0fcp+8", LIT (-0x2.c679d1f73f0fcp+8), { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c679d4p+8", LIT (-0x2.c679d4p+8), { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c679dp+8", LIT (-0x2.c679dp+8), { LIT (0xf.ffe08c2deedp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deedp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deedp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed08p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.cee48p+0", LIT (-0x3.cee48p+0), { LIT (0x1.68b8dc5c49a88p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a89p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a89p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.d04328728b72cp-4", LIT (-0x3.d04328728b72cp-4), { LIT (0x1.074e54544d14cp+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14dp+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14cp+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.d04328p-4", LIT (-0x3.d04328p-4), { LIT (0x1.074e5452941d4p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d5p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d5p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.d0432cp-4", LIT (-0x3.d0432cp-4), { LIT (0x1.074e5461fa3ep+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e1p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3ep+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.96a7e8p+4", LIT (-0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48fp+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.96a7ep+4", LIT (-0x5.96a7ep+4), { LIT (0xf.fffec1f47394p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f47394p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f47394p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473948p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xb.60713p+0", LIT (-0xb.60713p+0), { LIT (0xa.a7179c1019aep+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae8p+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019aep+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae8p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xd.0c03p+0", LIT (-0xd.0c03p+0), { LIT (0x3.89993d3ed803p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed803p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed803p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8032p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.629188p+4", LIT (0x1.629188p+4), { LIT (0x7.d716115677b78p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b78p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b78p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7cp+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.6p+4", LIT (0x1.6p+4), { LIT (0x6.ad6b6e710d7fcp+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d8p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fcp+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d8p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.7p+4", LIT (0x1.7p+4), { LIT (0x1.226af33b1fdcp+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc1p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdcp+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc1p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.8p+4", LIT (0x1.8p+4), { LIT (0x3.156ff6a8ebf6ep+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6ep+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6ep+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf7p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000801p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-56", LIT (0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-72", LIT (0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5d374p+12", LIT (0x2.c5d374p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5d376167f404p+12", LIT (0x2.c5d376167f404p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5d376167f406p+12", LIT (0x2.c5d376167f406p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5d37700c6bb2p+12", LIT (0x2.c5d37700c6bb2p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5d37700c6bbp+12", LIT (0x2.c5d37700c6bbp+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5d378p+12", LIT (0x2.c5d378p+12), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5e3acd2922a6p+8", LIT (0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00cp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5e3acp+8", LIT (0x2.c5e3acp+8), { LIT (0x8.e6726f55d788p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d7888p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d7888p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5e3bp+8", LIT (0x2.c5e3bp+8), { LIT (0x8.e6960966c8d2p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d2p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d2p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c67888p+8", LIT (0x2.c67888p+8), { LIT (0xf.eb6dd0c67ed4p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed4p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed4p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed48p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c6788afe3ccd6p+8", LIT (0x2.c6788afe3ccd6p+8), { LIT (0xf.eb9d77485863p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d774858638p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d77485863p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d774858638p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c6788cp+8", LIT (0x2.c6788cp+8), { LIT (0xf.ebad7efd1e06p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e068p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e06p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e068p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c679d1f73f0fap+8", LIT (0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c679d1f73f0fcp+8", LIT (0x2.c679d1f73f0fcp+8), { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c679d4p+8", LIT (0x2.c679d4p+8), { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c679dp+8", LIT (0x2.c679dp+8), { LIT (0xf.ffe08c2deedp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deedp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deedp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed08p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.f5d128p+0", LIT (0x2.f5d128p+0), { LIT (0x9.ad526ad56446p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad56446p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad56446p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x3.2p+4", LIT (0x3.2p+4), { LIT (0x8.c881f20405a28p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a28p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a28p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a3p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.00000800000aap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000abp+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000abp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5.8bfe6p+4", LIT (0x5.8bfe6p+4), { LIT (0x8.378d97e8a9838p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a984p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5.96a7e8p+4", LIT (0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48fp+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5.96a7ep+4", LIT (0x5.96a7ep+4), { LIT (0xf.fffec1f47394p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f47394p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f47394p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473948p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000003p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x1.002000aaac16cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x1.4b705d1e5d6a7p+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a8p+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a7p+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_binary64)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0x1.8b07551d9f5504c2bd281001968p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100197p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1p-56", LIT (-0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1p-72", LIT (-0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d374p+12", LIT (-0x2.c5d374p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d376eefcd4ap+12", LIT (-0x2.c5d376eefcd4ap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d376eefcd4bbe8p+12", LIT (-0x2.c5d376eefcd4bbe8p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d376eefcd4bbeb000452d846p+12", LIT (-0x2.c5d376eefcd4bbeb000452d846p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d376eefcd4bbeb000452d847p+12", LIT (-0x2.c5d376eefcd4bbeb000452d847p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d376eefcd4bbecp+12", LIT (-0x2.c5d376eefcd4bbecp+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d376eefcd4cp+12", LIT (-0x2.c5d376eefcd4cp+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d37700c6bb03a4p+12", LIT (-0x2.c5d37700c6bb03a4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d37700c6bb03a6c24b6c9b49p+12", LIT (-0x2.c5d37700c6bb03a6c24b6c9b49p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d37700c6bb03a6c24b6c9b4ap+12", LIT (-0x2.c5d37700c6bb03a6c24b6c9b4ap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d37700c6bb03a8p+12", LIT (-0x2.c5d37700c6bb03a8p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d37700c6bb2p+12", LIT (-0x2.c5d37700c6bb2p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d37700c6bbp+12", LIT (-0x2.c5d37700c6bbp+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5d378p+12", LIT (-0x2.c5d378p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5e3acd2922a6p+8", LIT (-0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5aec6fa96b58p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b58p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b58p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b5cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5e3acp+8", LIT (-0x2.c5e3acp+8), { LIT (0x8.e6726f55d78868187eba9eac38p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac38p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac38p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac3cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c5e3bp+8", LIT (-0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230b719596be4b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4bcp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679d1f73f0fap+8", LIT (-0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72ca74ded4db58p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db58p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db58p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db5cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679d1f73f0fb624d358b213a7p+8", LIT (-0x2.c679d1f73f0fb624d358b213a7p+8), { LIT (0xf.ffffffffffffbffffffffff3p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff304p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff3p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff304p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679d1f73f0fb624d358b213a8p+8", LIT (-0x2.c679d1f73f0fb624d358b213a8p+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679d1f73f0fb624p+8", LIT (-0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2ca74dec583p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58304p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec583p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58304p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679d1f73f0fb628p+8", LIT (-0x2.c679d1f73f0fb628p+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679d1f73f0fcp+8", LIT (-0x2.c679d1f73f0fcp+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679d4p+8", LIT (-0x2.c679d4p+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c679dp+8", LIT (-0x2.c679dp+8), { LIT (0xf.ffe08c2deed02b0e9ba9e9c42p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c424p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.cee48p+0", LIT (-0x3.cee48p+0), { LIT (0x1.68b8dc5c49a88f56145c6a6eb18p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56145c6a6eb2p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56145c6a6eb18p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56145c6a6eb2p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.d04328728b72cp-4", LIT (-0x3.d04328728b72cp-4), { LIT (0x1.074e54544d14c800f66940138b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c800f66940138b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c800f66940138b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c800f66940138cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.d04328p-4", LIT (-0x3.d04328p-4), { LIT (0x1.074e5452941d4cca93e217a9d9p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cca93e217a9d9p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cca93e217a9d9p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cca93e217a9d98p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.d0432cp-4", LIT (-0x3.d0432cp-4), { LIT (0x1.074e5461fa3e0c5d7d941a29998p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5d7d941a299ap+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5d7d941a29998p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5d7d941a299ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.96a7e8p+4", LIT (-0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e7480e07d1c02ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e8p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e8p+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.96a7ep+4", LIT (-0x5.96a7ep+4), { LIT (0xf.fffec1f473940d22f2195eac64p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac64p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac64p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac68p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xb.60713p+0", LIT (-0xb.60713p+0), { LIT (0xa.a7179c1019ae57dfcdfc8ae2cp+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dfcdfc8ae2cp+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dfcdfc8ae2cp+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dfcdfc8ae2c4p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xd.0c03p+0", LIT (-0xd.0c03p+0), { LIT (0x3.89993d3ed8030b962f4a1d333fp+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b962f4a1d333fp+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b962f4a1d333fp+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b962f4a1d334p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.ffffffffffffbffffffffffffcp+1020", LIT (-0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.629188p+4", LIT (0x1.629188p+4), { LIT (0x7.d716115677b7981c1502cadb3cp+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7981c1502cadb3ep+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7981c1502cadb3cp+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7981c1502cadb3ep+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.6p+4", LIT (0x1.6p+4), { LIT (0x6.ad6b6e710d7fe07862bf28dcap+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe07862bf28dcap+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe07862bf28dcap+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe07862bf28dca2p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.7p+4", LIT (0x1.7p+4), { LIT (0x1.226af33b1fdc0a57bd4b4ab231p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a57bd4b4ab231p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a57bd4b4ab231p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a57bd4b4ab2318p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.8p+4", LIT (0x1.8p+4), { LIT (0x3.156ff6a8ebf6e66f4935281c5fp+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66f4935281c6p+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66f4935281c5fp+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66f4935281c6p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x1.000000000080000000000aaaaa8p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000080000000000aaaaa8p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000080000000000aaaaa8p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000080000000000aaaabp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x1.000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000008000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-56", LIT (0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-72", LIT (0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d374p+12", LIT (0x2.c5d374p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d376167f404p+12", LIT (0x2.c5d376167f404p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d376167f4052f4p+12", LIT (0x2.c5d376167f4052f4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d376167f406p+12", LIT (0x2.c5d376167f406p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d37700c6bb03a4p+12", LIT (0x2.c5d37700c6bb03a4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d37700c6bb03a6c24b6c9b49p+12", LIT (0x2.c5d37700c6bb03a6c24b6c9b49p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d37700c6bb03a6c24b6c9b4ap+12", LIT (0x2.c5d37700c6bb03a6c24b6c9b4ap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d37700c6bb03a8p+12", LIT (0x2.c5d37700c6bb03a8p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d37700c6bb2p+12", LIT (0x2.c5d37700c6bb2p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d37700c6bbp+12", LIT (0x2.c5d37700c6bbp+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5d378p+12", LIT (0x2.c5d378p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5e3acd2922a6p+8", LIT (0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5aec6fa96b58p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b58p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b58p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5aec6fa96b5cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5e3acp+8", LIT (0x2.c5e3acp+8), { LIT (0x8.e6726f55d78868187eba9eac38p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac38p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac38p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d78868187eba9eac3cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5e3bp+8", LIT (0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230b719596be4b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4b8p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230b719596be4bcp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c67888p+8", LIT (0x2.c67888p+8), { LIT (0xf.eb6dd0c67ed40c8e47a528f288p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8e47a528f28cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8e47a528f288p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8e47a528f28cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c6788afe3ccd6p+8", LIT (0x2.c6788afe3ccd6p+8), { LIT (0xf.eb9d7748586375cf28c2e4264cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cf28c2e4264cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cf28c2e4264cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cf28c2e4265p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c6788cp+8", LIT (0x2.c6788cp+8), { LIT (0xf.ebad7efd1e065dfa4889d66d8cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfa4889d66d9p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfa4889d66d8cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfa4889d66d9p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679d1f73f0fap+8", LIT (0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72ca74ded4db58p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db58p+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db58p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72ca74ded4db5cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679d1f73f0fb624d358b213a7p+8", LIT (0x2.c679d1f73f0fb624d358b213a7p+8), { LIT (0xf.ffffffffffffbffffffffff3p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff304p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff3p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffbffffffffff304p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679d1f73f0fb624d358b213a8p+8", LIT (0x2.c679d1f73f0fb624d358b213a8p+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679d1f73f0fb624p+8", LIT (0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2ca74dec583p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58304p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec583p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2ca74dec58304p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679d1f73f0fb628p+8", LIT (0x2.c679d1f73f0fb628p+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679d1f73f0fcp+8", LIT (0x2.c679d1f73f0fcp+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679d4p+8", LIT (0x2.c679d4p+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) || (TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c679dp+8", LIT (0x2.c679dp+8), { LIT (0xf.ffe08c2deed02b0e9ba9e9c42p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c42p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b0e9ba9e9c424p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.f5d128p+0", LIT (0x2.f5d128p+0), { LIT (0x9.ad526ad564463ffecc391e218p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffecc391e218p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffecc391e218p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffecc391e2184p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.0000000200000000aaaaaaaac1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000000aaaaaaaac18p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000000aaaaaaaac1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000000aaaaaaaac18p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000002000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x3.2p+4", LIT (0x3.2p+4), { LIT (0x8.c881f20405a2b326bba067c62cp+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b326bba067c63p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b326bba067c62cp+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b326bba067c63p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.00000800000aaaaab05b05b1fbp+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaab05b05b1fbp+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaab05b05b1fbp+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaab05b05b1fb8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000800000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1.00000000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000088p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.8bfe6p+4", LIT (0x5.8bfe6p+4), { LIT (0x8.378d97e8a9838b8164de61b938p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8164de61b93cp+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8164de61b938p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8164de61b93cp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.96a7e8p+4", LIT (0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e7480e07d1c02ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e8p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02ep+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e7480e07d1c02e8p+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.96a7ep+4", LIT (0x5.96a7ep+4), { LIT (0xf.fffec1f473940d22f2195eac64p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac64p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac64p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d22f2195eac68p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x1.000000000000200000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000200000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000200000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000020000000000001p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x1.00000000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000000000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000020008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x1.002000aaac16c30c31eaf1bbb18p+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30c31eaf1bbb18p+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30c31eaf1bbb18p+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30c31eaf1bbb2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x1.4b705d1e5d6a787aa2de94becap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787aa2de94becap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787aa2de94becap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787aa2de94beca8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1p-56", LIT (-0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1p-72", LIT (-0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d374p+12", LIT (-0x2.c5d374p+12), { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d376eefcd4ap+12", LIT (-0x2.c5d376eefcd4ap+12), { LIT (0xf.ffee36237fd43a2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a3p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a3p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d376eefcd4bbe8p+12", LIT (-0x2.c5d376eefcd4bbe8p+12), { LIT (0xf.ffee36239bbc1b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b3p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d376eefcd4bbecp+12", LIT (-0x2.c5d376eefcd4bbecp+12), { LIT (0xf.ffee36239bc01b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b3p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d376eefcd4cp+12", LIT (-0x2.c5d376eefcd4cp+12), { LIT (0xf.ffee36239fd4169p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd4169p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd4169p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd416ap+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d37700c6bb03a4p+12", LIT (-0x2.c5d37700c6bb03a4p+12), { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d37700c6bb03a8p+12", LIT (-0x2.c5d37700c6bb03a8p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d37700c6bb2p+12", LIT (-0x2.c5d37700c6bb2p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d37700c6bbp+12", LIT (-0x2.c5d37700c6bbp+12), { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5d378p+12", LIT (-0x2.c5d378p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5e3acd2922a6p+8", LIT (-0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5e3acp+8", LIT (-0x2.c5e3acp+8), { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c5e3bp+8", LIT (-0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c679d1f73f0fap+8", LIT (-0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c679d1f73f0fb624p+8", LIT (-0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c679d1f73f0fb628p+8", LIT (-0x2.c679d1f73f0fb628p+8), { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c679d1f73f0fcp+8", LIT (-0x2.c679d1f73f0fcp+8), { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c679d4p+8", LIT (-0x2.c679d4p+8), { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c679dp+8", LIT (-0x2.c679dp+8), { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.cee48p+0", LIT (-0x3.cee48p+0), { LIT (0x1.68b8dc5c49a88f56p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f58p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.d04328728b72cp-4", LIT (-0x3.d04328728b72cp-4), { LIT (0x1.074e54544d14c8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c802p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.d04328p-4", LIT (-0x3.d04328p-4), { LIT (0x1.074e5452941d4ccap+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4ccap+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4ccap+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.d0432cp-4", LIT (-0x3.d0432cp-4), { LIT (0x1.074e5461fa3e0c5cp+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5ep+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5cp+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.96a7e8p+4", LIT (-0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e74ap+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.96a7ep+4", LIT (-0x5.96a7ep+4), { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d3p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xb.60713p+0", LIT (-0xb.60713p+0), { LIT (0xa.a7179c1019ae57dp+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57ep+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dp+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57ep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xd.0c03p+0", LIT (-0xd.0c03p+0), { LIT (0x3.89993d3ed8030b94p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b98p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b94p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b98p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.629188p+4", LIT (0x1.629188p+4), { LIT (0x7.d716115677b79818p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7982p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b79818p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7982p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.6p+4", LIT (0x1.6p+4), { LIT (0x6.ad6b6e710d7fe078p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe078p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe078p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe08p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.7p+4", LIT (0x1.7p+4), { LIT (0x1.226af33b1fdc0a56p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a58p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a56p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a58p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.8p+4", LIT (0x1.8p+4), { LIT (0x3.156ff6a8ebf6e66cp+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e67p+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66cp+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e67p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000800002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-56", LIT (0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-72", LIT (0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d374p+12", LIT (0x2.c5d374p+12), { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d376167f404p+12", LIT (0x2.c5d376167f404p+12), { LIT (0xf.ff15bf3851a92bep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92bep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92bep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92bfp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d376167f4052f4p+12", LIT (0x2.c5d376167f4052f4p+12), { LIT (0xf.ff15bf38649c166p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c166p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c166p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c167p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d376167f406p+12", LIT (0x2.c5d376167f406p+12), { LIT (0xf.ff15bf3871a7576p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a7576p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a7576p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a7577p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d37700c6bb03a4p+12", LIT (0x2.c5d37700c6bb03a4p+12), { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d37700c6bb03a8p+12", LIT (0x2.c5d37700c6bb03a8p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d37700c6bb2p+12", LIT (0x2.c5d37700c6bb2p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d37700c6bbp+12", LIT (0x2.c5d37700c6bbp+12), { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5d378p+12", LIT (0x2.c5d378p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5e3acd2922a6p+8", LIT (0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5e3acp+8", LIT (0x2.c5e3acp+8), { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5e3bp+8", LIT (0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c67888p+8", LIT (0x2.c67888p+8), { LIT (0xf.eb6dd0c67ed40c8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c9p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c9p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c6788afe3ccd6p+8", LIT (0x2.c6788afe3ccd6p+8), { LIT (0xf.eb9d7748586375cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375dp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c6788cp+8", LIT (0x2.c6788cp+8), { LIT (0xf.ebad7efd1e065dfp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065ep+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065ep+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c679d1f73f0fap+8", LIT (0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c679d1f73f0fb624p+8", LIT (0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c679d1f73f0fb628p+8", LIT (0x2.c679d1f73f0fb628p+8), { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c679d1f73f0fcp+8", LIT (0x2.c679d1f73f0fcp+8), { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c679d4p+8", LIT (0x2.c679d4p+8), { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c679dp+8", LIT (0x2.c679dp+8), { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.f5d128p+0", LIT (0x2.f5d128p+0), { LIT (0x9.ad526ad564463ffp+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564464p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffp+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564464p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x3.2p+4", LIT (0x3.2p+4), { LIT (0x8.c881f20405a2b32p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b32p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b32p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b33p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.00000800000aaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaacp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5.8bfe6p+4", LIT (0x5.8bfe6p+4), { LIT (0x8.378d97e8a9838b8p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b9p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5.96a7e8p+4", LIT (0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e74ap+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5.96a7ep+4", LIT (0x5.96a7ep+4), { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d3p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x1.002000aaac16c30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x1.4b705d1e5d6a787ap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787ap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787ap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-0", LIT (-0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1p-56", LIT (-0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1p-72", LIT (-0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d374p+12", LIT (-0x2.c5d374p+12), { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d376eefcd4ap+12", LIT (-0x2.c5d376eefcd4ap+12), { LIT (0xf.ffee36237fd43a2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a3p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36237fd43a3p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d376eefcd4bbe8p+12", LIT (-0x2.c5d376eefcd4bbe8p+12), { LIT (0xf.ffee36239bbc1b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bbc1b3p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d376eefcd4bbecp+12", LIT (-0x2.c5d376eefcd4bbecp+12), { LIT (0xf.ffee36239bc01b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b2p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239bc01b3p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d376eefcd4cp+12", LIT (-0x2.c5d376eefcd4cp+12), { LIT (0xf.ffee36239fd4169p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd4169p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd4169p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ffee36239fd416ap+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d37700c6bb03a4p+12", LIT (-0x2.c5d37700c6bb03a4p+12), { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d37700c6bb03a8p+12", LIT (-0x2.c5d37700c6bb03a8p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d37700c6bb2p+12", LIT (-0x2.c5d37700c6bb2p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d37700c6bbp+12", LIT (-0x2.c5d37700c6bbp+12), { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5d378p+12", LIT (-0x2.c5d378p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5e3acd2922a6p+8", LIT (-0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5e3acp+8", LIT (-0x2.c5e3acp+8), { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c5e3bp+8", LIT (-0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c679d1f73f0fap+8", LIT (-0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c679d1f73f0fb624p+8", LIT (-0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c679d1f73f0fb628p+8", LIT (-0x2.c679d1f73f0fb628p+8), { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c679d1f73f0fcp+8", LIT (-0x2.c679d1f73f0fcp+8), { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c679d4p+8", LIT (-0x2.c679d4p+8), { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c679dp+8", LIT (-0x2.c679dp+8), { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.cee48p+0", LIT (-0x3.cee48p+0), { LIT (0x1.68b8dc5c49a88f56p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f56p+4), ERRNO_UNCHANGED }, { LIT (0x1.68b8dc5c49a88f58p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.d04328728b72cp-4", LIT (-0x3.d04328728b72cp-4), { LIT (0x1.074e54544d14c8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c8p+0), ERRNO_UNCHANGED }, { LIT (0x1.074e54544d14c802p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.d04328p-4", LIT (-0x3.d04328p-4), { LIT (0x1.074e5452941d4ccap+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4ccap+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4ccap+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5452941d4cccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.d0432cp-4", LIT (-0x3.d0432cp-4), { LIT (0x1.074e5461fa3e0c5cp+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5ep+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5cp+0), ERRNO_UNCHANGED }, { LIT (0x1.074e5461fa3e0c5ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.96a7e8p+4", LIT (-0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e74ap+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.96a7ep+4", LIT (-0x5.96a7ep+4), { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d3p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xb.60713p+0", LIT (-0xb.60713p+0), { LIT (0xa.a7179c1019ae57dp+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57ep+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57dp+12), ERRNO_UNCHANGED }, { LIT (0xa.a7179c1019ae57ep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xd.0c03p+0", LIT (-0xd.0c03p+0), { LIT (0x3.89993d3ed8030b94p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b98p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b94p+16), ERRNO_UNCHANGED }, { LIT (0x3.89993d3ed8030b98p+16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "+0", LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.629188p+4", LIT (0x1.629188p+4), { LIT (0x7.d716115677b79818p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7982p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b79818p+28), ERRNO_UNCHANGED }, { LIT (0x7.d716115677b7982p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.6p+4", LIT (0x1.6p+4), { LIT (0x6.ad6b6e710d7fe078p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe078p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe078p+28), ERRNO_UNCHANGED }, { LIT (0x6.ad6b6e710d7fe08p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.7p+4", LIT (0x1.7p+4), { LIT (0x1.226af33b1fdc0a56p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a58p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a56p+32), ERRNO_UNCHANGED }, { LIT (0x1.226af33b1fdc0a58p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.8p+4", LIT (0x1.8p+4), { LIT (0x3.156ff6a8ebf6e66cp+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e67p+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e66cp+32), ERRNO_UNCHANGED }, { LIT (0x3.156ff6a8ebf6e67p+32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000800002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-56", LIT (0x1p-56), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-72", LIT (0x1p-72), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d374p+12", LIT (0x2.c5d374p+12), { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3206p+16380), ERRNO_UNCHANGED }, { LIT (0xf.fcff8165c0f3207p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d376167f404p+12", LIT (0x2.c5d376167f404p+12), { LIT (0xf.ff15bf3851a92bep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92bep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92bep+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3851a92bfp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d376167f4052f4p+12", LIT (0x2.c5d376167f4052f4p+12), { LIT (0xf.ff15bf38649c166p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c166p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c166p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf38649c167p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d376167f406p+12", LIT (0x2.c5d376167f406p+12), { LIT (0xf.ff15bf3871a7576p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a7576p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a7576p+16380), ERRNO_UNCHANGED }, { LIT (0xf.ff15bf3871a7577p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d37700c6bb03a4p+12", LIT (0x2.c5d37700c6bb03a4p+12), { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd3dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d37700c6bb03a8p+12", LIT (0x2.c5d37700c6bb03a8p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d37700c6bb2p+12", LIT (0x2.c5d37700c6bb2p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d37700c6bbp+12", LIT (0x2.c5d37700c6bbp+12), { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dbp+16380), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffc593dcp+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5d378p+12", LIT (0x2.c5d378p+12), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5e3acd2922a6p+8", LIT (0x2.c5e3acd2922a6p+8), { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb5p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e679c177a00bfb6p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5e3acp+8", LIT (0x2.c5e3acp+8), { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788681p+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6726f55d788682p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5e3bp+8", LIT (0x2.c5e3bp+8), { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230bp+1020), ERRNO_UNCHANGED }, { LIT (0x8.e6960966c8d230cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c67888p+8", LIT (0x2.c67888p+8), { LIT (0xf.eb6dd0c67ed40c8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c9p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c8p+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb6dd0c67ed40c9p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c6788afe3ccd6p+8", LIT (0x2.c6788afe3ccd6p+8), { LIT (0xf.eb9d7748586375cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375cp+1020), ERRNO_UNCHANGED }, { LIT (0xf.eb9d7748586375dp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c6788cp+8", LIT (0x2.c6788cp+8), { LIT (0xf.ebad7efd1e065dfp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065ep+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065dfp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ebad7efd1e065ep+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c679d1f73f0fap+8", LIT (0x2.c679d1f73f0fap+8), { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffe9d72dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c679d1f73f0fb624p+8", LIT (0x2.c679d1f73f0fb624p+8), { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffffb2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c679d1f73f0fb628p+8", LIT (0x2.c679d1f73f0fb628p+8), { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2cp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffff2dp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c679d1f73f0fcp+8", LIT (0x2.c679d1f73f0fcp+8), { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000000000009d72ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c679d4p+8", LIT (0x2.c679d4p+8), { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1cp+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0x1.000208c301f36f1ep+1024), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c679dp+8", LIT (0x2.c679dp+8), { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02bp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED }, { LIT (0xf.ffe08c2deed02b1p+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.f5d128p+0", LIT (0x2.f5d128p+0), { LIT (0x9.ad526ad564463ffp+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564464p+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564463ffp+0), ERRNO_UNCHANGED }, { LIT (0x9.ad526ad564464p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.00000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000200000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x3.2p+4", LIT (0x3.2p+4), { LIT (0x8.c881f20405a2b32p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b32p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b32p+68), ERRNO_UNCHANGED }, { LIT (0x8.c881f20405a2b33p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x1.00000800000aaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaaap+0), ERRNO_UNCHANGED }, { LIT (0x1.00000800000aaaacp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000008p+0), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.8bfe6p+4", LIT (0x5.8bfe6p+4), { LIT (0x8.378d97e8a9838b8p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b8p+124), ERRNO_UNCHANGED }, { LIT (0x8.378d97e8a9838b9p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.96a7e8p+4", LIT (0x5.96a7e8p+4), { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e748p+128), ERRNO_UNCHANGED }, { LIT (0x1.00006c1f5d48e74ap+128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.96a7ep+4", LIT (0x5.96a7ep+4), { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d2p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffec1f473940d3p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000002002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x1.002000aaac16c30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.002000aaac16c30ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0x1.4b705d1e5d6a787ap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787ap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787ap+0), ERRNO_UNCHANGED }, { LIT (0x1.4b705d1e5d6a787cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE }, { LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, OVERFLOW_EXCEPTION | ERRNO_ERANGE } },
#endif
  };

static void
cosh_test (void)
{
  ALL_RM_TEST (cosh, 0, cosh_test_data, RUN_TEST_LOOP_f_f, END);
}

static void
do_test (void)
{
  cosh_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
