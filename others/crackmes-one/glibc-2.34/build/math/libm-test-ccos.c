/* Test ccos.
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

static const struct test_c_c_data ccos_test_data[] =
  {
    { "inf + 0.0 i", plus_infty, LIT (0.0), { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "inf - 0 i", plus_infty, minus_zero, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "-inf + 0.0 i", minus_infty, LIT (0.0), { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "-inf - 0 i", minus_infty, minus_zero, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },

    { "0.0 + inf i", LIT (0.0), plus_infty, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 } },
    { "0.0 - inf i", LIT (0.0), minus_infty, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 } },
    { "-0 + inf i", minus_zero, plus_infty, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 } },
    { "-0 - inf i", minus_zero, minus_infty, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 } },

    { "inf + inf i", plus_infty, plus_infty, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION } },
    { "-inf + inf i", minus_infty, plus_infty, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION } },
    { "inf - inf i", plus_infty, minus_infty, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION } },
    { "-inf - inf i", minus_infty, minus_infty, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION }, { plus_infty, qnan_value, INVALID_EXCEPTION } },

    { "4.625 + inf i", LIT (4.625), plus_infty, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 } },
    { "4.625 - inf i", LIT (4.625), minus_infty, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 } },
    { "-4.625 + inf i", LIT (-4.625), plus_infty, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 } },
    { "-4.625 - inf i", LIT (-4.625), minus_infty, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 } },

    { "inf + 6.75 i", plus_infty, LIT (6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "inf - 6.75 i", plus_infty, LIT (-6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-inf + 6.75 i", minus_infty, LIT (6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-inf - 6.75 i", minus_infty, LIT (-6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },

    { "qNaN + 0.0 i", qnan_value, LIT (0.0), { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN } },
    { "qNaN - 0 i", qnan_value, minus_zero, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN } },

    { "qNaN + inf i", qnan_value, plus_infty, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 } },
    { "qNaN - inf i", qnan_value, minus_infty, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 } },

    { "qNaN + 9.0 i", qnan_value, LIT (9.0), { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "qNaN - 9.0 i", qnan_value, LIT (-9.0), { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },

    { "0.0 + qNaN i", LIT (0.0), qnan_value, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN } },
    { "-0 + qNaN i", minus_zero, qnan_value, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN } },

    { "10.0 + qNaN i", LIT (10.0), qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "-10.0 + qNaN i", LIT (-10.0), qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },

    { "inf + qNaN i", plus_infty, qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "-inf + qNaN i", minus_infty, qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },

    { "qNaN + qNaN i", qnan_value, qnan_value, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 } },

#if (TEST_COND_binary128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x4.308b4f2d3143111fca0eea4bcab4p+0), LIT (-0x9.1bf65bf77d7960796b4b344b6e6p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143111fca0eea4bcabp+0), LIT (-0x9.1bf65bf77d7960796b4b344b6e58p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143111fca0eea4bcabp+0), LIT (-0x9.1bf65bf77d7960796b4b344b6e58p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143111fca0eea4bcabp+0), LIT (-0x9.1bf65bf77d7960796b4b344b6e58p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p-16384 + 0x1p+0 i", LIT (-0x2p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x2.59b3f889d7304b50049290fe0c9cp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x2.59b3f889d7304b50049290fe0cap-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x2.59b3f889d7304b50049290fe0c9cp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x2.59b3f889d7304b50049290fe0cap-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x4.b367f113ae6096a0092521fc193cp-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x4.b367f113ae6096a0092521fc194p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x4.b367f113ae6096a0092521fc193cp-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x4.b367f113ae6096a0092521fc194p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e248p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e249p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e248p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e249p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x4.b367f113ae6096a0092521fc193cp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x4.b367f113ae6096a0092521fc194p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x4.b367f113ae6096a0092521fc193cp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x4.b367f113ae6096a0092521fc194p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16384 + 0x1p+0 i", LIT (-0x4p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x4.b367f113ae6096a0092521fc193cp-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x4.b367f113ae6096a0092521fc194p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x4.b367f113ae6096a0092521fc193cp-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x4.b367f113ae6096a0092521fc194p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16448 + 0x5p+4 i", LIT (-0x4p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16496 + 0x5p+4 i", LIT (-0x4p-16496), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16380), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16380), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16380), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x2.aaef37309e7d67914a076951c49p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x2.aaef37309e7d67914a076951c492p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x2.aaef37309e7d67914a076951c49p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x2.aaef37309e7d67914a076951c492p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-16448 + 0x5p+4 i", LIT (-0x8p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x9.66cfe2275cc12d40124a43f83278p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x9.66cfe2275cc12d40124a43f8328p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (0x9.66cfe2275cc12d40124a43f83278p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (0x9.66cfe2275cc12d40124a43f8328p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd624p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0bfp+1020), LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (0xb.46f43ab104a625930c1b0cbd624p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0bfp+1020), LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6fp+2076), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-120 + 0x4p-16328 i", LIT (0x1p-120), LIT (0x4p-16328), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-120 + 0x4p-16376 i", LIT (0x1p-120), LIT (0x4p-16376), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-120 + 0x4p-956 i", LIT (0x1p-120), LIT (0x4p-956), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-120 + 0x8p-16328 i", LIT (0x1p-120), LIT (0x8p-16328), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-120 + 0x8p-32 i", LIT (0x1p-120), LIT (0x8p-32), { LIT (0x1.000000000000002p+0), LIT (-0x8.0000000000000055555555555558p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.0000000000000055555555555558p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.000000000000005555555555555p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000020000000000001p+0), LIT (-0x8.000000000000005555555555555p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x1p+0 i", LIT (0x2p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x2.59b3f889d7304b50049290fe0cap-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x2.59b3f889d7304b50049290fe0cap-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x2.59b3f889d7304b50049290fe0c9cp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x2.59b3f889d7304b50049290fe0c9cp-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x4.b367f113ae6096a0092521fc194p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x4.b367f113ae6096a0092521fc194p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x4.b367f113ae6096a0092521fc193cp-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x4.b367f113ae6096a0092521fc193cp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0x5.95116a53e849a311fb99ee22edbcp+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0x5.95116a53e849a311fb99ee22edb8p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0x5.95116a53e849a311fb99ee22edb8p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6fp+2076), LIT (-0x5.95116a53e849a311fb99ee22edb8p+1000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x4.b367f113ae6096a0092521fc194p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x4.b367f113ae6096a0092521fc194p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x4.b367f113ae6096a0092521fc193cp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x4.b367f113ae6096a0092521fc193cp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16328 + 0x1p-120 i", LIT (0x4p-16328), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x4.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16376 + 0x1p-120 i", LIT (0x4p-16376), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x8p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x1p+0 i", LIT (0x4p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x4.b367f113ae6096a0092521fc194p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x4.b367f113ae6096a0092521fc194p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x4.b367f113ae6096a0092521fc193cp-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x4.b367f113ae6096a0092521fc193cp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16436 + 0x5.8cap+12 i", LIT (0x4p-16436), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0x2.bf701efd42c88e7efc2fdf7765fep+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x2.bf701efd42c88e7efc2fdf7765fcp+16356), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0x2.bf701efd42c88e7efc2fdf7765fcp+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x2.bf701efd42c88e7efc2fdf7765fcp+16356), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448 + 0x5p+4 i", LIT (0x4p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496 + 0x5p+4 i", LIT (0x4p-16496), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16380), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16380), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16380), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-956 + 0x1p-120 i", LIT (0x4p-956), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x4.0000000000000000000000000004p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0xb.2a22d4a7d0934623f733dc45db78p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0xb.2a22d4a7d0934623f733dc45db7p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), LIT (-0xb.2a22d4a7d0934623f733dc45db7p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c47ee67b88bb6fp+2076), LIT (-0xb.2a22d4a7d0934623f733dc45db7p+1924), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x6.6e68cac762215372ccfb2fd63cf4p+256), LIT (-0x3.37346563b110a9b9667d97eb1e7cp+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215372ccfb2fd63cf4p+256), LIT (-0x3.37346563b110a9b9667d97eb1e7ap+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215372ccfb2fd63cf4p+256), LIT (-0x3.37346563b110a9b9667d97eb1e7ap+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215372ccfb2fd63cf8p+256), LIT (-0x3.37346563b110a9b9667d97eb1e7ap+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16328 + 0x1p-120 i", LIT (0x8p-16328), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x8.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448 + 0x5p+4 i", LIT (0x8p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a3892p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38924p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-32 + 0x1p-120 i", LIT (0x8p-32), LIT (0x1p-120), { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaaaacp-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaaaacp-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaaaa8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffe00000000000008p-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaaaa8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x9.66cfe2275cc12d40124a43f8328p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x9.66cfe2275cc12d40124a43f8328p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a4p+0), LIT (-0x9.66cfe2275cc12d40124a43f83278p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100196a5p+0), LIT (-0x9.66cfe2275cc12d40124a43f83278p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (0xb.46f43ab104a625930c1b0cbd624p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0bfp+1020), LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.61b9a123b0d167648057acedbf19p+0), LIT (-0x1.1788bbbdb89e778eb7bb390cace5p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d167648057acedbf1ap+0), LIT (-0x1.1788bbbdb89e778eb7bb390cace5p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d167648057acedbf19p+0), LIT (-0x1.1788bbbdb89e778eb7bb390cace4p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d167648057acedbf1ap+0), LIT (-0x1.1788bbbdb89e778eb7bb390cace4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd624p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e08p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41257ed141f4e1p+16380), LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0bfp+1020), LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d29p+124), LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d298p+124), LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x4.308b5p+0), LIT (-0x9.1bf66p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b5p+0), LIT (-0x9.1bf66p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b48p+0), LIT (-0x9.1bf65p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b48p+0), LIT (-0x9.1bf65p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (0x1.8b0754p+0), LIT (0x4.b367fp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b0756p+0), LIT (0x4.b367fp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b0754p+0), LIT (0x4.b367fp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b0756p+0), LIT (0x4.b367f8p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (0x5.55de68p+112), LIT (0x2.aaef34p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de7p+112), LIT (0x2.aaef38p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de68p+112), LIT (0x2.aaef34p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de7p+112), LIT (0x2.aaef38p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa7p+124), LIT (-0xb.dcb18p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (-0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (-0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa8p+124), LIT (-0xb.dcb17p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa7p+124), LIT (0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa8p+124), LIT (0xb.dcb18p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0xf.fffffp+124), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0xf.fffffp+124), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-120 + 0x8p-32 i", LIT (0x1p-120), LIT (0x8p-32), { LIT (0x1p+0), LIT (-0x1p-148), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1.000002p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x1.8b0754p+0), LIT (-0x4.b367f8p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b0756p+0), LIT (-0x4.b367fp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b0754p+0), LIT (-0x4.b367fp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b0756p+0), LIT (-0x4.b367fp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x5.55de68p+112), LIT (-0x2.aaef38p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de7p+112), LIT (-0x2.aaef38p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de68p+112), LIT (-0x2.aaef34p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de7p+112), LIT (-0x2.aaef34p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0xf.fffffp+124), LIT (-0x3.373468p+108), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x3.373464p+108), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0x3.373464p+108), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x3.373464p+108), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-32 + 0x1p-120 i", LIT (0x8p-32), LIT (0x1p-120), { LIT (0xf.fffffp-4), LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffp-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa7p+124), LIT (0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa8p+124), LIT (0xb.dcb18p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.61b9ap+0), LIT (-0x1.1788bcp+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a2p+0), LIT (-0x1.1788bcp+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9ap+0), LIT (-0x1.1788bap+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a2p+0), LIT (-0x1.1788bap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa7p+124), LIT (-0xb.dcb18p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (-0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa7p+124), LIT (-0xb.dcb17p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa8p+124), LIT (-0xb.dcb17p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x4.308b4f2d31434p+0), LIT (-0x9.1bf65bf77d798p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143p+0), LIT (-0x9.1bf65bf77d798p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143p+0), LIT (-0x9.1bf65bf77d79p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143p+0), LIT (-0x9.1bf65bf77d79p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f55p+0), LIT (0x4.b367f113ae608p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (0x4.b367f113ae608p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (0x4.b367f113ae608p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f551p+0), LIT (0x4.b367f113ae60cp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacp+112), LIT (0x1.55779b984f3ebp-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (0x1.55779b984f3ebp-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (0x1.55779b984f3ebp-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfbp+112), LIT (0x1.55779b984f3ecp-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f55p+0), LIT (0x4.b367f113ae608p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (0x4.b367f113ae608p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (0x4.b367f113ae608p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f551p+0), LIT (0x4.b367f113ae60cp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacp+112), LIT (0x2.aaef37309e7d6p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (0x2.aaef37309e7d6p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (0x2.aaef37309e7d6p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfbp+112), LIT (0x2.aaef37309e7d8p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f55p+0), LIT (0x9.66cfe2275cc1p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (0x9.66cfe2275cc1p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (0x9.66cfe2275cc1p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f551p+0), LIT (0x9.66cfe2275cc18p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb528p+1020), LIT (-0xb.2c35ffb603378p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (-0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (-0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb53p+1020), LIT (-0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be579p+124), LIT (-0xb.dcb174d8851ap+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (-0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be579p+124), LIT (-0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (-0xb.dcb174d885198p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb528p+1020), LIT (0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb53p+1020), LIT (0xb.2c35ffb603378p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be579p+124), LIT (0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be579p+124), LIT (0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (0xb.dcb174d8851ap+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffff8p+1020), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0xf.ffffffffffff8p+1020), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-120 + 0x4p-956 i", LIT (0x1p-120), LIT (0x4p-956), { LIT (0xf.ffffffffffff8p-4), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-120 + 0x8p-32 i", LIT (0x1p-120), LIT (0x8p-32), { LIT (0x1p+0), LIT (-0x8.0000000000008p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), LIT (-0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f55p+0), LIT (-0x4.b367f113ae60cp-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (-0x4.b367f113ae608p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (-0x4.b367f113ae608p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f551p+0), LIT (-0x4.b367f113ae608p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0xf.ffffffffffff8p+1020), LIT (-0x5.95116a53e849cp+1000), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x5.95116a53e849cp+1000), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0x5.95116a53e8498p+1000), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x5.95116a53e8498p+1000), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacp+112), LIT (-0x1.55779b984f3ecp-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (-0x1.55779b984f3ebp-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (-0x1.55779b984f3ebp-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfbp+112), LIT (-0x1.55779b984f3ebp-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f55p+0), LIT (-0x4.b367f113ae60cp-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (-0x4.b367f113ae608p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (-0x4.b367f113ae608p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f551p+0), LIT (-0x4.b367f113ae608p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-956 + 0x1p-120 i", LIT (0x4p-956), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000001p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacp+112), LIT (-0x2.aaef37309e7d8p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (-0x2.aaef37309e7d6p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacp+112), LIT (-0x2.aaef37309e7d6p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfbp+112), LIT (-0x2.aaef37309e7d6p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x6.6e68cac762214p+256), LIT (-0x3.37346563b110cp+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762214p+256), LIT (-0x3.37346563b110ap+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762214p+256), LIT (-0x3.37346563b110ap+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762218p+256), LIT (-0x3.37346563b110ap+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-32 + 0x1p-120 i", LIT (0x8p-32), LIT (0x1p-120), { LIT (0xf.ffffffffffff8p-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f55p+0), LIT (-0x9.66cfe2275cc18p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (-0x9.66cfe2275cc1p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f55p+0), LIT (-0x9.66cfe2275cc1p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f551p+0), LIT (-0x9.66cfe2275cc1p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb528p+1020), LIT (0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb53p+1020), LIT (0xb.2c35ffb603378p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be579p+124), LIT (0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be579p+124), LIT (0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (0xb.dcb174d8851ap+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.61b9a123b0d16p+0), LIT (-0x1.1788bbbdb89e8p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16p+0), LIT (-0x1.1788bbbdb89e7p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16p+0), LIT (-0x1.1788bbbdb89e7p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d17p+0), LIT (-0x1.1788bbbdb89e7p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb528p+1020), LIT (-0xb.2c35ffb603378p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (-0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb528p+1020), LIT (-0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb53p+1020), LIT (-0xb.2c35ffb60337p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be579p+124), LIT (-0xb.dcb174d8851ap+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (-0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be579p+124), LIT (-0xb.dcb174d885198p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57908p+124), LIT (-0xb.dcb174d885198p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x4.308b4f2d3143111fca0eea4bccp+0), LIT (-0x9.1bf65bf77d7960796b4b344b7p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143111fca0eea4bcap+0), LIT (-0x9.1bf65bf77d7960796b4b344b7p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143111fca0eea4bcap+0), LIT (-0x9.1bf65bf77d7960796b4b344b6cp+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143111fca0eea4bcap+0), LIT (-0x9.1bf65bf77d7960796b4b344b6cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x4.b367f113ae608p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x4.b367f113ae608p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x4.b367f113ae608p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100197p+0), LIT (0x4.b367f113ae60cp-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e2p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (0x1.55779b984f3eb3c8a503b4a8e28p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (0x1.55779b984f3eb3c8a503b4a8e2p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (0x1.55779b984f3eb3c8a503b4a8e28p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x4.b367f113ae6096a0092521fc18p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x4.b367f113ae6096a0092521fc1ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x4.b367f113ae6096a0092521fc18p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100197p+0), LIT (0x4.b367f113ae6096a0092521fc1ap-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (0x2.aaef37309e7d67914a076951c4p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (0x2.aaef37309e7d67914a076951c5p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (0x2.aaef37309e7d67914a076951c4p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (0x2.aaef37309e7d67914a076951c5p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x9.66cfe2275cc12d40124a43f83p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x9.66cfe2275cc12d40124a43f834p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (0x9.66cfe2275cc12d40124a43f83p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100197p+0), LIT (0x9.66cfe2275cc12d40124a43f834p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (-0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (-0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (-0xb.dcb174d885199a507e02ee9c0cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (-0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (-0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (-0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (0xb.dcb174d885199a507e02ee9c0cp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-120 + 0x4p-956 i", LIT (0x1p-120), LIT (0x4p-956), { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (-0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-120 + 0x8p-32 i", LIT (0x1p-120), LIT (0x8p-32), { LIT (0x1.000000000000002p+0), LIT (-0x8.00000000000000555555555558p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.00000000000000555555555554p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.00000000000000555555555554p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002000000000008p+0), LIT (-0x8.00000000000000555555555554p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x4.b367f113ae60cp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x4.b367f113ae608p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x4.b367f113ae608p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2bd28100197p+0), LIT (-0x4.b367f113ae608p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0x5.95116a53e849a311fb99ee22eep+1000), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x5.95116a53e849a311fb99ee22eep+1000), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0x5.95116a53e849a311fb99ee22ecp+1000), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x5.95116a53e849a311fb99ee22ecp+1000), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e28p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e28p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e2p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (-0x1.55779b984f3eb3c8a503b4a8e2p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x4.b367f113ae6096a0092521fc1ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x4.b367f113ae6096a0092521fc1ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x4.b367f113ae6096a0092521fc18p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100197p+0), LIT (-0x4.b367f113ae6096a0092521fc18p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-956 + 0x1p-120 i", LIT (0x4p-956), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.000000000000000000000000008p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (-0x2.aaef37309e7d67914a076951c5p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (-0x2.aaef37309e7d67914a076951c5p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a388p+112), LIT (-0x2.aaef37309e7d67914a076951c4p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf22940ed2a38ap+112), LIT (-0x2.aaef37309e7d67914a076951c4p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x6.6e68cac762215372ccfb2fd63cp+256), LIT (-0x3.37346563b110a9b9667d97eb1fp+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215372ccfb2fd63cp+256), LIT (-0x3.37346563b110a9b9667d97eb1ep+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215372ccfb2fd63cp+256), LIT (-0x3.37346563b110a9b9667d97eb1ep+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215372ccfb2fd63ep+256), LIT (-0x3.37346563b110a9b9667d97eb1ep+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-32 + 0x1p-120 i", LIT (0x8p-32), LIT (0x1p-120), { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaacp-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaaap-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaaap-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffe000000000004p-4), LIT (-0x7.ffffffffffffffaaaaaaaaaaaap-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x9.66cfe2275cc12d40124a43f834p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x9.66cfe2275cc12d40124a43f834p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd281001968p+0), LIT (-0x9.66cfe2275cc12d40124a43f83p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2bd28100197p+0), LIT (-0x9.66cfe2275cc12d40124a43f83p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (0xb.dcb174d885199a507e02ee9c0cp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.61b9a123b0d167648057acedbfp+0), LIT (-0x1.1788bbbdb89e778eb7bb390cadp+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d167648057acedbfp+0), LIT (-0x1.1788bbbdb89e778eb7bb390cadp+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d167648057acedbfp+0), LIT (-0x1.1788bbbdb89e778eb7bb390cac8p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d167648057acedbf8p+0), LIT (-0x1.1788bbbdb89e778eb7bb390cac8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), LIT (-0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), LIT (-0xb.2c35ffb60337070b74839cd408p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (-0xb.dcb174d885199a507e02ee9c0cp+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (-0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309dp+124), LIT (-0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b422fc94309d4p+124), LIT (-0xb.dcb174d885199a507e02ee9c08p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x4.308b4f2d3143112p+0), LIT (-0x9.1bf65bf77d79608p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143112p+0), LIT (-0x9.1bf65bf77d79608p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d31431118p+0), LIT (-0x9.1bf65bf77d79607p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d31431118p+0), LIT (-0x9.1bf65bf77d79607p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p-16384 + 0x1p+0 i", LIT (-0x2p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x2.59b3f889d7304b5p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x2.59b3f889d7304b5p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x2.59b3f889d7304b5p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x2.59b3f889d7304b58p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x4.b367f113ae6096a8p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (0x1.55779b984f3eb3cap-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x4.b367f113ae6096a8p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-16384 + 0x1p+0 i", LIT (-0x4p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x4.b367f113ae6096a8p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (0x2.aaef37309e7d6794p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-16448 + 0x5p+4 i", LIT (-0x8p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (0x2.aaef37309e7d6794p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x9.66cfe2275cc12d5p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c6p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-120 + 0x4p-16328 i", LIT (0x1p-120), LIT (0x4p-16328), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-120 + 0x4p-16376 i", LIT (0x1p-120), LIT (0x4p-16376), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-120 + 0x4p-956 i", LIT (0x1p-120), LIT (0x4p-956), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-120 + 0x8p-16328 i", LIT (0x1p-120), LIT (0x8p-16328), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-120 + 0x8p-32 i", LIT (0x1p-120), LIT (0x8p-32), { LIT (0x1.000000000000002p+0), LIT (-0x8.000000000000006p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.000000000000005p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.000000000000005p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000022p+0), LIT (-0x8.000000000000005p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x1p+0 i", LIT (0x2p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x2.59b3f889d7304b58p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x2.59b3f889d7304b5p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x2.59b3f889d7304b5p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x2.59b3f889d7304b5p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096a8p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x5.95116a53e849a318p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x5.95116a53e849a31p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x5.95116a53e849a31p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c6p+2076), LIT (-0x5.95116a53e849a31p+1000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3cap-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (-0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096a8p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16328 + 0x1p-120 i", LIT (0x4p-16328), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16376 + 0x1p-120 i", LIT (0x4p-16376), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x1p+0 i", LIT (0x4p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096a8p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16436 + 0x5.8cap+12 i", LIT (0x4p-16436), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (-0x2.bf701efd42c88e8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x2.bf701efd42c88e8p+16356), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0x2.bf701efd42c88e7cp+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x2.bf701efd42c88e7cp+16356), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-956 + 0x1p-120 i", LIT (0x4p-956), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0xb.2a22d4a7d093463p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0xb.2a22d4a7d093462p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0xb.2a22d4a7d093462p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c6p+2076), LIT (-0xb.2a22d4a7d093462p+1924), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d6794p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (-0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x6.6e68cac76221537p+256), LIT (-0x3.37346563b110a9bcp+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac76221537p+256), LIT (-0x3.37346563b110a9b8p+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac76221537p+256), LIT (-0x3.37346563b110a9b8p+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215378p+256), LIT (-0x3.37346563b110a9b8p+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16328 + 0x1p-120 i", LIT (0x8p-16328), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x1p-16444), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448 + 0x5p+4 i", LIT (0x8p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d6794p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-32 + 0x1p-120 i", LIT (0x8p-32), LIT (0x1p-120), { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffbp-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffa8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffa8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffe1p-4), LIT (-0x7.ffffffffffffffa8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x9.66cfe2275cc12d5p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.61b9a123b0d16764p+0), LIT (-0x1.1788bbbdb89e779p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16764p+0), LIT (-0x1.1788bbbdb89e778ep+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16764p+0), LIT (-0x1.1788bbbdb89e778ep+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16766p+0), LIT (-0x1.1788bbbdb89e778ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x4.308b4f2d3143112p+0), LIT (-0x9.1bf65bf77d79608p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d3143112p+0), LIT (-0x9.1bf65bf77d79608p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d31431118p+0), LIT (-0x9.1bf65bf77d79607p+0), ERRNO_UNCHANGED }, { LIT (-0x4.308b4f2d31431118p+0), LIT (-0x9.1bf65bf77d79607p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p-16384 + 0x1p+0 i", LIT (-0x2p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x2.59b3f889d7304b5p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x2.59b3f889d7304b5p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x2.59b3f889d7304b5p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x2.59b3f889d7304b54p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x4.b367f113ae6096a8p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (0x1.55779b984f3eb3cap-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x4.b367f113ae6096a8p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16384 + 0x1p+0 i", LIT (-0x4p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x4.b367f113ae6096a8p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16448 + 0x5p+4 i", LIT (-0x4p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x1.55779b984f3eb3c8p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (0x1.55779b984f3eb3cap-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (0x2.aaef37309e7d6794p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-16448 + 0x5p+4 i", LIT (-0x8p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (0x2.aaef37309e7d6794p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (0x9.66cfe2275cc12d5p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c6p+2076), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-120 + 0x4p-16328 i", LIT (0x1p-120), LIT (0x4p-16328), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-120 + 0x4p-16376 i", LIT (0x1p-120), LIT (0x4p-16376), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-120 + 0x4p-956 i", LIT (0x1p-120), LIT (0x4p-956), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-120 + 0x8p-16328 i", LIT (0x1p-120), LIT (0x8p-16328), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-120 + 0x8p-32 i", LIT (0x1p-120), LIT (0x8p-32), { LIT (0x1.000000000000002p+0), LIT (-0x8.000000000000006p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.000000000000005p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000002p+0), LIT (-0x8.000000000000005p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000022p+0), LIT (-0x8.000000000000005p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x1p+0 i", LIT (0x2p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x2.59b3f889d7304b54p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x2.59b3f889d7304b5p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x2.59b3f889d7304b5p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x2.59b3f889d7304b5p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096a8p-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x4.b367f113ae6096ap-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x5.95116a53e849a318p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x5.95116a53e849a31p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0x5.95116a53e849a31p+1000), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c6p+2076), LIT (-0x5.95116a53e849a31p+1000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3cap-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (-0x1.55779b984f3eb3c8p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096a8p-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x4.b367f113ae6096ap-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16328 + 0x1p-120 i", LIT (0x4p-16328), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16376 + 0x1p-120 i", LIT (0x4p-16376), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x1p+0 i", LIT (0x4p-16384), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096a8p-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x4.b367f113ae6096ap-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16436 + 0x5.8cap+12 i", LIT (0x4p-16436), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (-0x2.bf701efd42c88e8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x2.bf701efd42c88e8p+16356), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0x2.bf701efd42c88e7cp+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0x2.bf701efd42c88e7cp+16356), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448 + 0x5p+4 i", LIT (0x4p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3cap-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3c8p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x1.55779b984f3eb3c8p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (-0x1.55779b984f3eb3c8p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-956 + 0x1p-120 i", LIT (0x4p-956), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0xb.2a22d4a7d093463p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0xb.2a22d4a7d093462p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c4p+2076), LIT (-0xb.2a22d4a7d093462p+1924), ERRNO_UNCHANGED }, { LIT (0x1.65445a94fa1268c6p+2076), LIT (-0xb.2a22d4a7d093462p+1924), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d6794p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (-0x2.aaef37309e7d679p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x6.6e68cac76221537p+256), LIT (-0x3.37346563b110a9bcp+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac76221537p+256), LIT (-0x3.37346563b110a9b8p+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac76221537p+256), LIT (-0x3.37346563b110a9b8p+108), ERRNO_UNCHANGED }, { LIT (0x6.6e68cac762215378p+256), LIT (-0x3.37346563b110a9b8p+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16328 + 0x1p-120 i", LIT (0x8p-16328), LIT (0x1p-120), { LIT (0x1p+0), LIT (-0xcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448 + 0x5p+4 i", LIT (0x8p-16448), LIT (0x5p+4), { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d6794p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf2p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0x5.55de6e613cfacf28p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-32 + 0x1p-120 i", LIT (0x8p-32), LIT (0x1p-120), { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffbp-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffa8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffep-4), LIT (-0x7.ffffffffffffffa8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffe1p-4), LIT (-0x7.ffffffffffffffa8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x9.66cfe2275cc12d5p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c2p+0), LIT (-0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED }, { LIT (0x1.8b07551d9f5504c4p+0), LIT (-0x9.66cfe2275cc12d4p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.61b9a123b0d16764p+0), LIT (-0x1.1788bbbdb89e779p+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16764p+0), LIT (-0x1.1788bbbdb89e778ep+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16764p+0), LIT (-0x1.1788bbbdb89e778ep+0), ERRNO_UNCHANGED }, { LIT (0x1.61b9a123b0d16766p+0), LIT (-0x1.1788bbbdb89e778ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a625ap+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b41p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED }, { LIT (0xc.1aee93505374b42p+16380), LIT (-0xb.46f43ab104a6259p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb60337071p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b27p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED }, { LIT (0xb.fe39a718cb52b28p+1020), LIT (-0xb.2c35ffb6033707p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a6p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b4p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED }, { LIT (0xc.bbaa76be57905b5p+124), LIT (-0xb.dcb174d885199a5p+124), ERRNO_UNCHANGED } },
#endif
  };

static void
ccos_test (void)
{
  ALL_RM_TEST (ccos, 0, ccos_test_data, RUN_TEST_LOOP_c_c, END_COMPLEX);
}

static void
do_test (void)
{
  ccos_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
