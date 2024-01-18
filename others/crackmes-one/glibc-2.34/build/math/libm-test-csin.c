/* Test csin.
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

static const struct test_c_c_data csin_test_data[] =
  {
    { "0.0 + inf i", LIT (0.0), plus_infty, { LIT (0.0), plus_infty, 0 }, { LIT (0.0), plus_infty, 0 }, { LIT (0.0), plus_infty, 0 }, { LIT (0.0), plus_infty, 0 } },
    { "-0 + inf i", minus_zero, plus_infty, { minus_zero, plus_infty, 0 }, { minus_zero, plus_infty, 0 }, { minus_zero, plus_infty, 0 }, { minus_zero, plus_infty, 0 } },
    { "0.0 - inf i", LIT (0.0), minus_infty, { LIT (0.0), minus_infty, 0 }, { LIT (0.0), minus_infty, 0 }, { LIT (0.0), minus_infty, 0 }, { LIT (0.0), minus_infty, 0 } },
    { "-0 - inf i", minus_zero, minus_infty, { minus_zero, minus_infty, 0 }, { minus_zero, minus_infty, 0 }, { minus_zero, minus_infty, 0 }, { minus_zero, minus_infty, 0 } },

    { "inf + 0.0 i", plus_infty, LIT (0.0), { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "-inf + 0.0 i", minus_infty, LIT (0.0), { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "inf - 0 i", plus_infty, minus_zero, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "-inf - 0 i", minus_infty, minus_zero, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },

    { "inf + inf i", plus_infty, plus_infty, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "-inf + inf i", minus_infty, plus_infty, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "inf - inf i", plus_infty, minus_infty, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "-inf - inf i", minus_infty, minus_infty, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },

    { "inf + 6.75 i", plus_infty, LIT (6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "inf - 6.75 i", plus_infty, LIT (-6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-inf + 6.75 i", minus_infty, LIT (6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-inf - 6.75 i", minus_infty, LIT (-6.75), { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },

    { "4.625 + inf i", LIT (4.625), plus_infty, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 } },
    { "4.625 - inf i", LIT (4.625), minus_infty, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 } },
    { "-4.625 + inf i", LIT (-4.625), plus_infty, { plus_infty, minus_infty, 0 }, { plus_infty, minus_infty, 0 }, { plus_infty, minus_infty, 0 }, { plus_infty, minus_infty, 0 } },
    { "-4.625 - inf i", LIT (-4.625), minus_infty, { plus_infty, plus_infty, 0 }, { plus_infty, plus_infty, 0 }, { plus_infty, plus_infty, 0 }, { plus_infty, plus_infty, 0 } },

    { "qNaN + 0.0 i", qnan_value, LIT (0.0), { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN } },
    { "qNaN - 0 i", qnan_value, minus_zero, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN }, { qnan_value, LIT (0.0), IGNORE_ZERO_INF_SIGN } },

    { "qNaN + inf i", qnan_value, plus_infty, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN } },
    { "qNaN - inf i", qnan_value, minus_infty, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN }, { qnan_value, plus_infty, IGNORE_ZERO_INF_SIGN } },

    { "qNaN + 9.0 i", qnan_value, LIT (9.0), { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "qNaN - 9.0 i", qnan_value, LIT (-9.0), { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },

    { "0.0 + qNaN i", LIT (0.0), qnan_value, { LIT (0.0), qnan_value, 0 }, { LIT (0.0), qnan_value, 0 }, { LIT (0.0), qnan_value, 0 }, { LIT (0.0), qnan_value, 0 } },
    { "-0 + qNaN i", minus_zero, qnan_value, { minus_zero, qnan_value, 0 }, { minus_zero, qnan_value, 0 }, { minus_zero, qnan_value, 0 }, { minus_zero, qnan_value, 0 } },

    { "10.0 + qNaN i", LIT (10.0), qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "qNaN - 10.0 i", qnan_value, LIT (-10.0), { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },

    { "inf + qNaN i", plus_infty, qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "-inf + qNaN i", minus_infty, qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },

    { "qNaN + qNaN i", qnan_value, qnan_value, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 } },

#if (TEST_COND_binary128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x9.278d418f3e96dbebad2bf89d946p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338523bp+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbebad2bf89d946p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338523bp+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbebad2bf89d9458p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338523bp+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbebad2bf89d9458p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338523b4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p-16384 + 0x1p+0 i", LIT (-0x2p-16384), LIT (0x1p+0), { LIT (-0x3.160eaa3b3eaa09857a5020032d4cp-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), UNDERFLOW_EXCEPTION }, { LIT (-0x3.160eaa3b3eaa09857a5020032d48p-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x3.160eaa3b3eaa09857a5020032d48p-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), UNDERFLOW_EXCEPTION }, { LIT (-0x3.160eaa3b3eaa09857a5020032d48p-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54130af4a040065a94p-1024), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a94p-1024), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a9p-1024), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a9p-1024), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-960), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-960), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-960), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-960), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54130af4a040065a94p-128), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a94p-128), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a9p-128), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a9p-128), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16384 + 0x1p+0 i", LIT (-0x4p-16384), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54130af4a040065a94p-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a94p-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a9p-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065a9p-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16448 + 0x5p+4 i", LIT (-0x4p-16448), LIT (0x5p+4), { LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16496 + 0x5p+4 i", LIT (-0x4p-16496), LIT (0x5p+4), { LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16380), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e249p-16380), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16380), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e248p-16380), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d67914a076951c492p-36), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c492p-36), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c49p-36), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c49p-36), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-16448 + 0x5p+4 i", LIT (-0x8p-16448), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d67914a076951c492p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c492p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c49p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c49p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (-0xc.583aa8ecfaa82615e940800cb528p-972), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa82615e940800cb528p-972), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa82615e940800cb52p-972), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa82615e940800cb52p-972), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (-0xb.46f43ab104a625930c1b0cbd624p+16380), LIT (-0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (-0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (-0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (-0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0bfp+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (-0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (-0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), LIT (-0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), LIT (-0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0xf.424p+16 i", LIT (-0xcp-4), LIT (-0xf.424p+16), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (-0xb.46f43ab104a625930c1b0cbd624p+16380), LIT (0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0bfp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), LIT (0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08cp+124), LIT (0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0xf.424p+16 i", LIT (-0xcp-4), LIT (0xf.424p+16), { minus_infty, LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffffffffffffff8p+16380), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0x0p+0), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x0p+0), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c47ee67b88bb6fp+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x1p+0 i", LIT (0x2p-16384), LIT (0x1p+0), { LIT (0x3.160eaa3b3eaa09857a5020032d48p-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), UNDERFLOW_EXCEPTION }, { LIT (0x3.160eaa3b3eaa09857a5020032d48p-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), UNDERFLOW_EXCEPTION }, { LIT (0x3.160eaa3b3eaa09857a5020032d48p-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), UNDERFLOW_EXCEPTION }, { LIT (0x3.160eaa3b3eaa09857a5020032d4cp-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x4p-1076 i", LIT (0x2p-16384), LIT (0x4p-1076), { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x2.0000000000000000000000000004p-16384), LIT (0x4.0000000000000000000000000004p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x4p-16448 i", LIT (0x2p-16384), LIT (0x4p-16448), { LIT (0x1.fffffffffffffffffffffffffffcp-16384), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffffffffffffffcp-16384), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x4p-16496 i", LIT (0x2p-16384), LIT (0x4p-16496), { LIT (0x1.fffffffffffffffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x8p-152 i", LIT (0x2p-16384), LIT (0x8p-152), { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x2.0000000000000000000000000004p-16384), LIT (0x8.0000000000000000000000000008p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x8p-16448 i", LIT (0x2p-16384), LIT (0x8p-16448), { LIT (0x1.fffffffffffffffffffffffffffcp-16384), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffffffffffffffcp-16384), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x6.2c1d54767d54130af4a040065a9p-1024), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a94p-1024), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a9p-1024), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a94p-1024), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x4p-16448 i", LIT (0x4p-1024), LIT (0x4p-16448), { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x4p-16496 i", LIT (0x4p-1024), LIT (0x4p-16496), { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000000000000000004p-1024), LIT (0x8.0000000000000000000000000008p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x8p-16448 i", LIT (0x4p-1024), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffep-1024), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x2p-16384 i", LIT (0x4p-1076), LIT (0x2p-16384), { LIT (0x3.fffffffffffffffffffffffffffep-1076), LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffep-1076), LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x4p-1024 i", LIT (0x4p-1076), LIT (0x4p-1024), { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000000000000000004p-1076), LIT (0x4.0000000000000000000000000004p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x4p-128 i", LIT (0x4p-1076), LIT (0x4p-128), { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000000000000000004p-1076), LIT (0x4.0000000000000000000000000004p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x4p-16384 i", LIT (0x4p-1076), LIT (0x4p-16384), { LIT (0x3.fffffffffffffffffffffffffffep-1076), LIT (0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1076), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffffffffffffffffffffffffffep-1076), LIT (0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1076), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x5.95116a53e849a311fb99ee22edb8p+1000), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a311fb99ee22edb8p+1000), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a311fb99ee22edb8p+1000), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a311fb99ee22edbcp+1000), LIT (0x1.65445a94fa1268c47ee67b88bb6fp+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x1.55779b984f3eb3c8a503b4a8e248p-960), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e249p-960), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e248p-960), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e249p-960), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076 + 0x8p-972 i", LIT (0x4p-1076), LIT (0x8p-972), { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000000000000000004p-1076), LIT (0x8.0000000000000000000000000008p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x6.2c1d54767d54130af4a040065a9p-128), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a94p-128), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a9p-128), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a94p-128), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x4p-16448 i", LIT (0x4p-128), LIT (0x4p-16448), { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x4p-16496 i", LIT (0x4p-128), LIT (0x4p-16496), { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x8p-16448 i", LIT (0x4p-128), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffep-128), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x1p+0 i", LIT (0x4p-16384), LIT (0x1p+0), { LIT (0x6.2c1d54767d54130af4a040065a9p-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a94p-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a9p-16384), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065a94p-16384), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x4p-1076 i", LIT (0x4p-16384), LIT (0x4p-1076), { LIT (0x4p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4.0000000000000000000000000004p-16384), LIT (0x4.0000000000000000000000000004p-1076), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x4p-16448 i", LIT (0x4p-16384), LIT (0x4p-16448), { LIT (0x3.fffffffffffffffffffffffffffcp-16384), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffcp-16384), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x4p-16496 i", LIT (0x4p-16384), LIT (0x4p-16496), { LIT (0x3.fffffffffffffffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x8p-152 i", LIT (0x4p-16384), LIT (0x8p-152), { LIT (0x4p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4.0000000000000000000000000004p-16384), LIT (0x8.0000000000000000000000000008p-152), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x8p-16448 i", LIT (0x4p-16384), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffffffffffffffcp-16384), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffffffffffffffcp-16384), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16436 + 0x5.8cap+12 i", LIT (0x4p-16436), LIT (0x5.8cap+12), { LIT (0x2.bf701efd42c88e7efc2fdf7765fcp+16356), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e7efc2fdf7765fcp+16356), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e7efc2fdf7765fcp+16356), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e7efc2fdf7765fep+16356), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448 + 0x2p-16384 i", LIT (0x4p-16448), LIT (0x2p-16384), { LIT (0x4p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4.000000000004p-16448), LIT (0x2.0000000000000000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448 + 0x4p-1024 i", LIT (0x4p-16448), LIT (0x4p-1024), { LIT (0x4p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4.000000000004p-16448), LIT (0x4.0000000000000000000000000004p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448 + 0x4p-128 i", LIT (0x4p-16448), LIT (0x4p-128), { LIT (0x4p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4.000000000004p-16448), LIT (0x4.0000000000000000000000000004p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448 + 0x4p-16384 i", LIT (0x4p-16448), LIT (0x4p-16384), { LIT (0x4p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4.000000000004p-16448), LIT (0x4.0000000000000000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448 + 0x5p+4 i", LIT (0x4p-16448), LIT (0x5p+4), { LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448 + 0x8p-972 i", LIT (0x4p-16448), LIT (0x8p-972), { LIT (0x4p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4.000000000004p-16448), LIT (0x8.0000000000000000000000000008p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496 + 0x2p-16384 i", LIT (0x4p-16496), LIT (0x2p-16384), { LIT (0x4p-16496), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16496), LIT (0x2.0000000000000000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496 + 0x4p-1024 i", LIT (0x4p-16496), LIT (0x4p-1024), { LIT (0x4p-16496), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16496), LIT (0x4.0000000000000000000000000004p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496 + 0x4p-128 i", LIT (0x4p-16496), LIT (0x4p-128), { LIT (0x4p-16496), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16496), LIT (0x4.0000000000000000000000000004p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496 + 0x4p-16384 i", LIT (0x4p-16496), LIT (0x4p-16384), { LIT (0x4p-16496), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16496), LIT (0x4.0000000000000000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496 + 0x5p+4 i", LIT (0x4p-16496), LIT (0x5p+4), { LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16380), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16380), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e248p-16380), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e249p-16380), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496 + 0x8p-972 i", LIT (0x4p-16496), LIT (0x8p-972), { LIT (0x4p-16496), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16496), LIT (0x8.0000000000000000000000000008p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x2p-16384 i", LIT (0x8p-152), LIT (0x2p-16384), { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x4p-1024 i", LIT (0x8p-152), LIT (0x4p-1024), { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x4p-128 i", LIT (0x8p-152), LIT (0x4p-128), { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8.0000000000000000000000000008p-152), LIT (0x4.0000000000000000000000000004p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x4p-16384 i", LIT (0x8p-152), LIT (0x4p-16384), { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xb.2a22d4a7d0934623f733dc45db7p+1924), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d0934623f733dc45db7p+1924), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d0934623f733dc45db7p+1924), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d0934623f733dc45db78p+1924), LIT (0x1.65445a94fa1268c47ee67b88bb6fp+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x2.aaef37309e7d67914a076951c49p-36), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c492p-36), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c49p-36), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c492p-36), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x8p-972 i", LIT (0x8p-152), LIT (0x8p-972), { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-152), LIT (0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x3.37346563b110a9b9667d97eb1e7ap+108), LIT (0x6.6e68cac762215372ccfb2fd63cf4p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b9667d97eb1e7ap+108), LIT (0x6.6e68cac762215372ccfb2fd63cf4p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b9667d97eb1e7ap+108), LIT (0x6.6e68cac762215372ccfb2fd63cf4p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b9667d97eb1e7cp+108), LIT (0x6.6e68cac762215372ccfb2fd63cf8p+256), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448 + 0x2p-16384 i", LIT (0x8p-16448), LIT (0x2p-16384), { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8.000000000004p-16448), LIT (0x2.0000000000000000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448 + 0x4p-1024 i", LIT (0x8p-16448), LIT (0x4p-1024), { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8.000000000004p-16448), LIT (0x4.0000000000000000000000000004p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448 + 0x4p-128 i", LIT (0x8p-16448), LIT (0x4p-128), { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8.000000000004p-16448), LIT (0x4.0000000000000000000000000004p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448 + 0x4p-16384 i", LIT (0x8p-16448), LIT (0x4p-16384), { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8.000000000004p-16448), LIT (0x4.0000000000000000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448 + 0x5p+4 i", LIT (0x8p-16448), LIT (0x5p+4), { LIT (0x2.aaef37309e7d67914a076951c49p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c492p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c49p-16332), LIT (0x5.55de6e613cfacf22940ed2a3892p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c492p-16332), LIT (0x5.55de6e613cfacf22940ed2a38924p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448 + 0x8p-972 i", LIT (0x8p-16448), LIT (0x8p-972), { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8.000000000004p-16448), LIT (0x8.0000000000000000000000000008p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0xc.583aa8ecfaa82615e940800cb52p-972), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa82615e940800cb528p-972), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa82615e940800cb52p-972), LIT (0x1.2cd9fc44eb9825a80249487f064fp+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa82615e940800cb528p-972), LIT (0x1.2cd9fc44eb9825a80249487f065p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x4p-16448 i", LIT (0x8p-972), LIT (0x4p-16448), { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x4p-16496 i", LIT (0x8p-972), LIT (0x4p-16496), { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8.0000000000000000000000000008p-972), LIT (0x8.0000000000000000000000000008p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x8p-16448 i", LIT (0x8p-972), LIT (0x8p-16448), { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffffffffffffffffcp-972), LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (-0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (-0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (-0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625930c1b0cbd624p+16380), LIT (-0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0bfp+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xb.dcb174d885199a507e02ee9c08cp+124), LIT (-0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (-0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08cp+124), LIT (-0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (-0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 - 0xf.424p+16 i", LIT (0xcp-4), LIT (-0xf.424p+16), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.498770cd39c9a5b290663a71f533p+0), LIT (0x1.2c0f29932c3a3bb5105a4748968dp+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b290663a71f533p+0), LIT (0x1.2c0f29932c3a3bb5105a4748968ep+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b290663a71f533p+0), LIT (0x1.2c0f29932c3a3bb5105a4748968dp+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b290663a71f534p+0), LIT (0x1.2c0f29932c3a3bb5105a4748968ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625930c1b0cbd6238p+16380), LIT (0xc.1aee93505374b41257ed141f4e08p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625930c1b0cbd624p+16380), LIT (0xc.1aee93505374b41257ed141f4e1p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40a28p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0be8p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40a3p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0bfp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xb.dcb174d885199a507e02ee9c08cp+124), LIT (0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08cp+124), LIT (0xc.bbaa76be57905b422fc94309d29p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08c8p+124), LIT (0xc.bbaa76be57905b422fc94309d298p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0xf.424p+16 i", LIT (0xcp-4), LIT (0xf.424p+16), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x9.278d5p+0), LIT (0x4.2b3d78p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d4p+0), LIT (0x4.2b3d8p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d4p+0), LIT (0x4.2b3d78p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d4p+0), LIT (0x4.2b3d8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (-0x6.2c1d58p-128), LIT (0x1.2cd9fcp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d58p-128), LIT (0x1.2cd9fcp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d5p-128), LIT (0x1.2cd9fcp+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d5p-128), LIT (0x1.2cd9fep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (-0x2.aaef38p-36), LIT (0x5.55de68p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef38p-36), LIT (0x5.55de7p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef34p-36), LIT (0x5.55de68p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef34p-36), LIT (0x5.55de7p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (-0xb.dcb18p+124), LIT (-0xc.bbaa8p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb17p+124), LIT (-0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb17p+124), LIT (-0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb17p+124), LIT (-0xc.bbaa7p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0xf.424p+16 i", LIT (-0xcp-4), LIT (-0xf.424p+16), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { minus_infty, LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { minus_infty, LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (-0xb.dcb18p+124), LIT (0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb17p+124), LIT (0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb17p+124), LIT (0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb17p+124), LIT (0xc.bbaa8p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0xf.424p+16 i", LIT (-0xcp-4), LIT (0xf.424p+16), { minus_infty, LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffp+124), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0x0p+0), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x0p+0), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x6.2c1d5p-128), LIT (0x1.2cd9fcp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d58p-128), LIT (0x1.2cd9fcp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d5p-128), LIT (0x1.2cd9fcp+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d58p-128), LIT (0x1.2cd9fep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x3.fffff8p-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffff8p-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x4p-128 i", LIT (0x8p-152), LIT (0x4p-128), { LIT (0x8p-152), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x1p-148), LIT (0x4.000008p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x2.aaef34p-36), LIT (0x5.55de68p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef38p-36), LIT (0x5.55de7p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef34p-36), LIT (0x5.55de68p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef38p-36), LIT (0x5.55de7p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x3.373464p+108), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (0x3.373464p+108), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x3.373464p+108), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { LIT (0x3.373468p+108), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xb.dcb17p+124), LIT (-0xc.bbaa8p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb17p+124), LIT (-0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb17p+124), LIT (-0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb18p+124), LIT (-0xc.bbaa7p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 - 0xf.424p+16 i", LIT (0xcp-4), LIT (-0xf.424p+16), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.49877p+0), LIT (0x1.2c0f28p+0), ERRNO_UNCHANGED }, { LIT (0x1.49877p+0), LIT (0x1.2c0f2ap+0), ERRNO_UNCHANGED }, { LIT (0x1.49877p+0), LIT (0x1.2c0f28p+0), ERRNO_UNCHANGED }, { LIT (0x1.498772p+0), LIT (0x1.2c0f2ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xb.dcb17p+124), LIT (0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb17p+124), LIT (0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb17p+124), LIT (0xc.bbaa7p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb18p+124), LIT (0xc.bbaa8p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0xf.424p+16 i", LIT (0xcp-4), LIT (0xf.424p+16), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x9.278d418f3e97p+0), LIT (0x4.2b3d7c8d1f884p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e97p+0), LIT (0x4.2b3d7c8d1f888p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e968p+0), LIT (0x4.2b3d7c8d1f884p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e968p+0), LIT (0x4.2b3d7c8d1f888p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (-0x6.2c1d54767d544p-1024), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb983p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (-0x1.55779b984f3ecp-960), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3ebp-960), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3ebp-960), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3ebp-960), LIT (0x5.55de6e613cfbp+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (-0x6.2c1d54767d544p-128), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54p-128), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54p-128), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54p-128), LIT (0x1.2cd9fc44eb983p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d8p-36), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d6p-36), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d6p-36), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d6p-36), LIT (0x5.55de6e613cfbp+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (-0xc.583aa8ecfaa88p-972), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8p-972), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8p-972), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8p-972), LIT (0x1.2cd9fc44eb983p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (-0xb.2c35ffb603378p+1020), LIT (-0xb.fe39a718cb53p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337p+1020), LIT (-0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337p+1020), LIT (-0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337p+1020), LIT (-0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (-0xb.dcb174d8851ap+124), LIT (-0xc.bbaa76be57908p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885198p+124), LIT (-0xc.bbaa76be57908p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885198p+124), LIT (-0xc.bbaa76be579p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885198p+124), LIT (-0xc.bbaa76be579p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0xf.424p+16 i", LIT (-0xcp-4), LIT (-0xf.424p+16), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { minus_infty, LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (-0xb.2c35ffb603378p+1020), LIT (0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337p+1020), LIT (0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337p+1020), LIT (0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337p+1020), LIT (0xb.fe39a718cb53p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (-0xb.dcb174d8851ap+124), LIT (0xc.bbaa76be579p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885198p+124), LIT (0xc.bbaa76be57908p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885198p+124), LIT (0xc.bbaa76be579p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885198p+124), LIT (0xc.bbaa76be57908p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0xf.424p+16 i", LIT (-0xcp-4), LIT (0xf.424p+16), { minus_infty, LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffff8p+1020), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d544p-1024), LIT (0x1.2cd9fc44eb983p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x3.ffffffffffffcp-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x3.ffffffffffffcp-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0x4p-1024), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1024), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1024), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4.0000000000004p-1024), LIT (0x8.0000000000008p-152), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x4p-1024 i", LIT (0x4p-1076), LIT (0x4p-1024), { LIT (0x4p-1076), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-1076), LIT (0x4.0000000000004p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x4p-128 i", LIT (0x4p-1076), LIT (0x4p-128), { LIT (0x4p-1076), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-1076), LIT (0x4.0000000000004p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x5.95116a53e8498p+1000), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (0x5.95116a53e849cp+1000), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x5.95116a53e8498p+1000), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { LIT (0x5.95116a53e849cp+1000), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x1.55779b984f3ebp-960), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3ebp-960), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3ebp-960), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3ecp-960), LIT (0x5.55de6e613cfbp+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076 + 0x8p-972 i", LIT (0x4p-1076), LIT (0x8p-972), { LIT (0x4p-1076), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-1076), LIT (0x8.0000000000008p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x6.2c1d54767d54p-128), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54p-128), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54p-128), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d544p-128), LIT (0x1.2cd9fc44eb983p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x3.ffffffffffffep-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x3.ffffffffffffep-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x3.ffffffffffffep-128), LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-128), LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x4p-1024 i", LIT (0x8p-152), LIT (0x4p-1024), { LIT (0x7.ffffffffffffcp-152), LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x4p-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x7.ffffffffffffcp-152), LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x4p-1024), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x4p-128 i", LIT (0x8p-152), LIT (0x4p-128), { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8.0000000000008p-152), LIT (0x4.0000000000004p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x2.aaef37309e7d6p-36), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d6p-36), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d6p-36), LIT (0x5.55de6e613cfacp+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d8p-36), LIT (0x5.55de6e613cfbp+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x8p-972 i", LIT (0x8p-152), LIT (0x8p-972), { LIT (0x7.ffffffffffffcp-152), LIT (0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-152), LIT (0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x3.37346563b110ap+108), LIT (0x6.6e68cac762214p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110ap+108), LIT (0x6.6e68cac762214p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110ap+108), LIT (0x6.6e68cac762214p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110cp+108), LIT (0x6.6e68cac762218p+256), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0xc.583aa8ecfaa8p-972), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8p-972), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8p-972), LIT (0x1.2cd9fc44eb982p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa88p-972), LIT (0x1.2cd9fc44eb983p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x7.ffffffffffffcp-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x7.ffffffffffffcp-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8.0000000000008p-972), LIT (0x8.0000000000008p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.2c35ffb60337p+1020), LIT (-0xb.fe39a718cb53p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337p+1020), LIT (-0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337p+1020), LIT (-0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb603378p+1020), LIT (-0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xb.dcb174d885198p+124), LIT (-0xc.bbaa76be57908p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885198p+124), LIT (-0xc.bbaa76be57908p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885198p+124), LIT (-0xc.bbaa76be579p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d8851ap+124), LIT (-0xc.bbaa76be579p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 - 0xf.424p+16 i", LIT (0xcp-4), LIT (-0xf.424p+16), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.498770cd39c9ap+0), LIT (0x1.2c0f29932c3a3p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9ap+0), LIT (0x1.2c0f29932c3a4p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9ap+0), LIT (0x1.2c0f29932c3a3p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9bp+0), LIT (0x1.2c0f29932c3a4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.2c35ffb60337p+1020), LIT (0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337p+1020), LIT (0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337p+1020), LIT (0xb.fe39a718cb528p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb603378p+1020), LIT (0xb.fe39a718cb53p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xb.dcb174d885198p+124), LIT (0xc.bbaa76be579p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885198p+124), LIT (0xc.bbaa76be57908p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885198p+124), LIT (0xc.bbaa76be579p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d8851ap+124), LIT (0xc.bbaa76be57908p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0xf.424p+16 i", LIT (0xcp-4), LIT (0xf.424p+16), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x9.278d418f3e96dbebad2bf89d98p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338522p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbebad2bf89d94p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338524p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbebad2bf89d94p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338522p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbebad2bf89d94p+0), LIT (0x4.2b3d7c8d1f8867eddb7c338524p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (-0x6.2c1d54767d544p-1024), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (-0x1.55779b984f3eb3c8a503b4a8e28p-960), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e28p-960), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e2p-960), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8a503b4a8e2p-960), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54130af4a040065cp-128), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065ap-128), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065ap-128), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d54130af4a040065ap-128), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d67914a076951c5p-36), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c5p-36), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c4p-36), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d67914a076951c4p-36), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (-0xc.583aa8ecfaa82615e940800cb8p-972), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa82615e940800cb4p-972), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa82615e940800cb4p-972), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa82615e940800cb4p-972), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { minus_infty, minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd408p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd408p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (-0xb.dcb174d885199a507e02ee9c0cp+124), LIT (-0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08p+124), LIT (-0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08p+124), LIT (-0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08p+124), LIT (-0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0xf.424p+16 i", LIT (-0xcp-4), LIT (-0xf.424p+16), { minus_infty, minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { minus_infty, LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd40cp+1020), LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd408p+1020), LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337070b74839cd408p+1020), LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (-0xb.dcb174d885199a507e02ee9c0cp+124), LIT (0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08p+124), LIT (0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08p+124), LIT (0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a507e02ee9c08p+124), LIT (0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0xf.424p+16 i", LIT (-0xcp-4), LIT (0xf.424p+16), { minus_infty, LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (-0xf.ffffffffffffbffffffffffffcp+1020), plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0x0p+0), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x0p+0), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), UNDERFLOW_EXCEPTION }, { LIT (0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), UNDERFLOW_EXCEPTION }, { LIT (0x6.2c1d54767d54p-1024), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), UNDERFLOW_EXCEPTION }, { LIT (0x6.2c1d54767d544p-1024), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x3.ffffffffffffcp-1024), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x3.ffffffffffffcp-1024), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0x4p-1024), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x4.0000000000004p-1024), LIT (0x8.00000000000000000000000004p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x4p-1024 i", LIT (0x4p-1076), LIT (0x4p-1024), { LIT (0x4p-1076), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-1076), LIT (0x4.0000000000004p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x4p-128 i", LIT (0x4p-1076), LIT (0x4p-128), { LIT (0x4p-1076), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-1076), LIT (0x4.00000000000000000000000002p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x5.95116a53e849a311fb99ee22ecp+1000), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (0x5.95116a53e849a311fb99ee22eep+1000), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x5.95116a53e849a311fb99ee22ecp+1000), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { LIT (0x5.95116a53e849a311fb99ee22eep+1000), plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x1.55779b984f3eb3c8a503b4a8e2p-960), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e28p-960), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e2p-960), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8a503b4a8e28p-960), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076 + 0x8p-972 i", LIT (0x4p-1076), LIT (0x8p-972), { LIT (0x4p-1076), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-1076), LIT (0x8.00000000000000000000000004p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x6.2c1d54767d54130af4a040065ap-128), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065ap-128), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065ap-128), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54130af4a040065cp-128), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x3.ffffffffffffffffffffffffffp-128), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x3.ffffffffffffffffffffffffffp-128), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x3.ffffffffffffffffffffffffffp-128), LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffffp-128), LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x4p-1024 i", LIT (0x8p-152), LIT (0x4p-1024), { LIT (0x7.fffffffffffffffffffffffffep-152), LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffffffffffffffep-152), LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x4p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x4p-128 i", LIT (0x8p-152), LIT (0x4p-128), { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8.00000000000000000000000004p-152), LIT (0x4.00000000000000000000000002p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x2.aaef37309e7d67914a076951c4p-36), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c5p-36), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c4p-36), LIT (0x5.55de6e613cfacf22940ed2a388p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d67914a076951c5p-36), LIT (0x5.55de6e613cfacf22940ed2a38ap+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x8p-972 i", LIT (0x8p-152), LIT (0x8p-972), { LIT (0x7.fffffffffffffffffffffffffep-152), LIT (0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x8p-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x7.fffffffffffffffffffffffffep-152), LIT (0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x8p-972), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x3.37346563b110a9b9667d97eb1ep+108), LIT (0x6.6e68cac762215372ccfb2fd63cp+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b9667d97eb1ep+108), LIT (0x6.6e68cac762215372ccfb2fd63cp+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b9667d97eb1ep+108), LIT (0x6.6e68cac762215372ccfb2fd63cp+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b9667d97eb1fp+108), LIT (0x6.6e68cac762215372ccfb2fd63ep+256), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0xc.583aa8ecfaa82615e940800cb4p-972), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa82615e940800cb4p-972), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa82615e940800cb4p-972), LIT (0x1.2cd9fc44eb9825a80249487f06p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa82615e940800cb8p-972), LIT (0x1.2cd9fc44eb9825a80249487f068p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x7.fffffffffffffffffffffffffcp-972), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffffffffffffffcp-972), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0x8p-972), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-972), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-972), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8.00000000000000000000000004p-972), LIT (0x8.00000000000000000000000004p-152), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.2c35ffb60337070b74839cd408p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40cp+1020), LIT (-0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd408p+1020), LIT (-0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40cp+1020), LIT (-0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xb.dcb174d885199a507e02ee9c08p+124), LIT (-0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08p+124), LIT (-0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08p+124), LIT (-0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c0cp+124), LIT (-0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 - 0xf.424p+16 i", LIT (0xcp-4), LIT (-0xf.424p+16), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.498770cd39c9a5b290663a71f5p+0), LIT (0x1.2c0f29932c3a3bb5105a4748968p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b290663a71f5p+0), LIT (0x1.2c0f29932c3a3bb5105a4748968p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b290663a71f5p+0), LIT (0x1.2c0f29932c3a3bb5105a4748968p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b290663a71f58p+0), LIT (0x1.2c0f29932c3a3bb5105a474897p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.2c35ffb60337070b74839cd408p+1020), LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40cp+1020), LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd408p+1020), LIT (0xb.fe39a718cb52b2731922dd2e08p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337070b74839cd40cp+1020), LIT (0xb.fe39a718cb52b2731922dd2e0cp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xb.dcb174d885199a507e02ee9c08p+124), LIT (0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08p+124), LIT (0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c08p+124), LIT (0xc.bbaa76be57905b422fc94309dp+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a507e02ee9c0cp+124), LIT (0xc.bbaa76be57905b422fc94309d4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0xf.424p+16 i", LIT (0xcp-4), LIT (0xf.424p+16), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x9.278d418f3e96dbfp+0), LIT (0x4.2b3d7c8d1f8867e8p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbfp+0), LIT (0x4.2b3d7c8d1f8867fp+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbep+0), LIT (0x4.2b3d7c8d1f8867e8p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbep+0), LIT (0x4.2b3d7c8d1f8867fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p-16384 + 0x1p+0 i", LIT (-0x2p-16384), LIT (0x1p+0), { LIT (-0x3.160eaa3b3eaa0988p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x3.160eaa3b3eaa0988p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x3.160eaa3b3eaa098p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x3.160eaa3b3eaa098p-16384), LIT (0x1.2cd9fc44eb9825aap+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54131p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (-0x1.55779b984f3eb3cap-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54131p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-16384 + 0x1p+0 i", LIT (-0x4p-16384), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54131p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d6794p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-16448 + 0x5p+4 i", LIT (-0x8p-16448), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d6794p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (-0xc.583aa8ecfaa8262p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (-0xb.46f43ab104a625ap+16380), LIT (-0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (-0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (-0xb.dcb174d885199a6p+124), LIT (-0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0xf.424p+16 i", LIT (-0xcp-4), LIT (-0xf.424p+16), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (-0xb.46f43ab104a625ap+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (-0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (-0xb.dcb174d885199a6p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0xf.424p+16 i", LIT (-0xcp-4), LIT (0xf.424p+16), { minus_infty, LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0x0p+0), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x0p+0), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c6p+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x1p+0 i", LIT (0x2p-16384), LIT (0x1p+0), { LIT (0x3.160eaa3b3eaa098p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), UNDERFLOW_EXCEPTION }, { LIT (0x3.160eaa3b3eaa0988p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), UNDERFLOW_EXCEPTION }, { LIT (0x3.160eaa3b3eaa098p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), UNDERFLOW_EXCEPTION }, { LIT (0x3.160eaa3b3eaa0988p-16384), LIT (0x1.2cd9fc44eb9825aap+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x4p-1076 i", LIT (0x2p-16384), LIT (0x4p-1076), { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x2.0000000000000008p-16384), LIT (0x4.0000000000000008p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x8p-152 i", LIT (0x2p-16384), LIT (0x8p-152), { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x2.0000000000000008p-16384), LIT (0x8.000000000000001p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x8p-16448 i", LIT (0x2p-16384), LIT (0x8p-16448), { LIT (0x1.fffffffffffffff8p-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffff8p-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54131p-1024), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-1024), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1024), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1024), LIT (0x8.000000000000001p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x8p-16448 i", LIT (0x4p-1024), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffcp-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x2p-16384 i", LIT (0x4p-1076), LIT (0x2p-16384), { LIT (0x3.fffffffffffffffcp-1076), LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-1076), LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x4p-1024 i", LIT (0x4p-1076), LIT (0x4p-1024), { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1076), LIT (0x4.0000000000000008p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x4p-128 i", LIT (0x4p-1076), LIT (0x4p-128), { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1076), LIT (0x4.0000000000000008p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x4p-16384 i", LIT (0x4p-1076), LIT (0x4p-16384), { LIT (0x3.fffffffffffffffcp-1076), LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1076), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffffffffffffffcp-1076), LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1076), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x5.95116a53e849a31p+1000), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a31p+1000), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a31p+1000), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a318p+1000), LIT (0x1.65445a94fa1268c6p+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3cap-960), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076 + 0x8p-972 i", LIT (0x4p-1076), LIT (0x8p-972), { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1076), LIT (0x8.000000000000001p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54131p-128), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-128), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-128), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x3.fffffffffffffffcp-128), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-128), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x8p-16448 i", LIT (0x4p-128), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffcp-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x1p+0 i", LIT (0x4p-16384), LIT (0x1p+0), { LIT (0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54131p-16384), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x4p-1076 i", LIT (0x4p-16384), LIT (0x4p-1076), { LIT (0x4p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4.0000000000000008p-16384), LIT (0x4.0000000000000008p-1076), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x8p-152 i", LIT (0x4p-16384), LIT (0x8p-152), { LIT (0x4p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4.0000000000000008p-16384), LIT (0x8.000000000000001p-152), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x8p-16448 i", LIT (0x4p-16384), LIT (0x8p-16448), { LIT (0x3.fffffffffffffff8p-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffff8p-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16436 + 0x5.8cap+12 i", LIT (0x4p-16436), LIT (0x5.8cap+12), { LIT (0x2.bf701efd42c88e7cp+16356), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e8p+16356), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e7cp+16356), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e8p+16356), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x2p-16384 i", LIT (0x8p-152), LIT (0x2p-16384), { LIT (0x7.fffffffffffffff8p-152), LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x4p-1024 i", LIT (0x8p-152), LIT (0x4p-1024), { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x4p-128 i", LIT (0x8p-152), LIT (0x4p-128), { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8.000000000000001p-152), LIT (0x4.0000000000000008p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x4p-16384 i", LIT (0x8p-152), LIT (0x4p-16384), { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xb.2a22d4a7d093462p+1924), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d093462p+1924), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d093462p+1924), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d093463p+1924), LIT (0x1.65445a94fa1268c6p+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d6794p-36), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x8p-972 i", LIT (0x8p-152), LIT (0x8p-972), { LIT (0x7.fffffffffffffff8p-152), LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x3.37346563b110a9b8p+108), LIT (0x6.6e68cac76221537p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b8p+108), LIT (0x6.6e68cac76221537p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b8p+108), LIT (0x6.6e68cac76221537p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9bcp+108), LIT (0x6.6e68cac762215378p+256), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448 + 0x2p-16384 i", LIT (0x8p-16448), LIT (0x2p-16384), { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16444), LIT (0x2.0000000000000008p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448 + 0x4p-1024 i", LIT (0x8p-16448), LIT (0x4p-1024), { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16444), LIT (0x4.0000000000000008p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448 + 0x4p-128 i", LIT (0x8p-16448), LIT (0x4p-128), { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16444), LIT (0x4.0000000000000008p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448 + 0x4p-16384 i", LIT (0x8p-16448), LIT (0x4p-16384), { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16444), LIT (0x4.0000000000000008p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448 + 0x5p+4 i", LIT (0x8p-16448), LIT (0x5p+4), { LIT (0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d6794p-16332), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448 + 0x8p-972 i", LIT (0x8p-16448), LIT (0x8p-972), { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x1p-16444), LIT (0x8.000000000000001p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8262p-972), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x7.fffffffffffffff8p-972), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-972), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8.000000000000001p-972), LIT (0x8.000000000000001p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x8p-16448 i", LIT (0x8p-972), LIT (0x8p-16448), { LIT (0x7.fffffffffffffff8p-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffff8p-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625ap+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a6p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 - 0xf.424p+16 i", LIT (0xcp-4), LIT (-0xf.424p+16), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.498770cd39c9a5b2p+0), LIT (0x1.2c0f29932c3a3bb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b2p+0), LIT (0x1.2c0f29932c3a3bb6p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b2p+0), LIT (0x1.2c0f29932c3a3bb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b4p+0), LIT (0x1.2c0f29932c3a3bb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625ap+16380), LIT (0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a6p+124), LIT (0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0xf.424p+16 i", LIT (0xcp-4), LIT (0xf.424p+16), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x9.278d418f3e96dbfp+0), LIT (0x4.2b3d7c8d1f8867e8p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbfp+0), LIT (0x4.2b3d7c8d1f8867fp+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbep+0), LIT (0x4.2b3d7c8d1f8867e8p+0), ERRNO_UNCHANGED }, { LIT (-0x9.278d418f3e96dbep+0), LIT (0x4.2b3d7c8d1f8867fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p-16384 + 0x1p+0 i", LIT (-0x2p-16384), LIT (0x1p+0), { LIT (-0x3.160eaa3b3eaa0988p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x3.160eaa3b3eaa0984p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x3.160eaa3b3eaa0984p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x3.160eaa3b3eaa0984p-16384), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1024 + 0x1p+0 i", LIT (-0x4p-1024), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54131p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1076 + 0x5p+4 i", LIT (-0x4p-1076), LIT (0x5p+4), { LIT (-0x1.55779b984f3eb3cap-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-128 + 0x1p+0 i", LIT (-0x4p-128), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54131p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16384 + 0x1p+0 i", LIT (-0x4p-16384), LIT (0x1p+0), { LIT (-0x6.2c1d54767d54131p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16448 + 0x5p+4 i", LIT (-0x4p-16448), LIT (0x5p+4), { LIT (-0x1.55779b984f3eb3cap-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x1.55779b984f3eb3c8p-16332), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-152 + 0x5p+4 i", LIT (-0x8p-152), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d6794p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-16448 + 0x5p+4 i", LIT (-0x8p-16448), LIT (0x5p+4), { LIT (-0x2.aaef37309e7d6794p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (-0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-972 + 0x1p+0 i", LIT (-0x8p-972), LIT (0x1p+0), { LIT (-0xc.583aa8ecfaa8262p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (-0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (-0x2.c5d4p+12), { LIT (-0xb.46f43ab104a625ap+16380), LIT (-0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0x2.c68p+8 i", LIT (-0xcp-4), LIT (-0x2.c68p+8), { LIT (-0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0x5.98p+4 i", LIT (-0xcp-4), LIT (-0x5.98p+4), { LIT (-0xb.dcb174d885199a6p+124), LIT (-0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0xf.424p+16 i", LIT (-0xcp-4), LIT (-0xf.424p+16), { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { minus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0x2.c5d4p+12 i", LIT (-0xcp-4), LIT (0x2.c5d4p+12), { LIT (-0xb.46f43ab104a625ap+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (-0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0x2.c68p+8 i", LIT (-0xcp-4), LIT (0x2.c68p+8), { LIT (-0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (-0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0x5.98p+4 i", LIT (-0xcp-4), LIT (0x5.98p+4), { LIT (-0xb.dcb174d885199a6p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (-0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0xf.424p+16 i", LIT (-0xcp-4), LIT (0xf.424p+16), { minus_infty, LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { minus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (-0xf.fffffffffffffffp+16380), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x5.8cap+12 i", LIT (0x0p+0), LIT (0x5.8cap+12), { LIT (0x0p+0), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x0p+0), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x5.ap+8 i", LIT (0x0p+0), LIT (0x5.ap+8), { LIT (0x0p+0), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x0p+0), LIT (0x1.65445a94fa1268c6p+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x1p+0 i", LIT (0x2p-16384), LIT (0x1p+0), { LIT (0x3.160eaa3b3eaa0984p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x3.160eaa3b3eaa0984p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x3.160eaa3b3eaa0984p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x3.160eaa3b3eaa0988p-16384), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x4p-1076 i", LIT (0x2p-16384), LIT (0x4p-1076), { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), LIT (0x4p-1076), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2.0000000000000004p-16384), LIT (0x4.0000000000000008p-1076), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x4p-16448 i", LIT (0x2p-16384), LIT (0x4p-16448), { LIT (0x1.fffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x8p-152 i", LIT (0x2p-16384), LIT (0x8p-152), { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), LIT (0x8p-152), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2.0000000000000004p-16384), LIT (0x8.000000000000001p-152), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x8p-16448 i", LIT (0x2p-16384), LIT (0x8p-16448), { LIT (0x1.fffffffffffffffcp-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffcp-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x1p+0 i", LIT (0x4p-1024), LIT (0x1p+0), { LIT (0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-1024), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54131p-1024), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-1024), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1024), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x4p-16448 i", LIT (0x4p-1024), LIT (0x4p-16448), { LIT (0x3.fffffffffffffffcp-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-1024), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-1024), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1024), LIT (0x8.000000000000001p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x8p-16448 i", LIT (0x4p-1024), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffcp-1024), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-1024), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x2p-16384 i", LIT (0x4p-1076), LIT (0x2p-16384), { LIT (0x3.fffffffffffffffcp-1076), LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1076), LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffffffffffffffcp-1076), LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1076), LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x4p-1024 i", LIT (0x4p-1076), LIT (0x4p-1024), { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1076), LIT (0x4.0000000000000008p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x4p-128 i", LIT (0x4p-1076), LIT (0x4p-128), { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1076), LIT (0x4.0000000000000008p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x4p-16384 i", LIT (0x4p-1076), LIT (0x4p-16384), { LIT (0x3.fffffffffffffffcp-1076), LIT (0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-16384), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1076), LIT (0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x4p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x5.8cap+12 i", LIT (0x4p-1076), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x5.ap+8 i", LIT (0x4p-1076), LIT (0x5.ap+8), { LIT (0x5.95116a53e849a31p+1000), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a31p+1000), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a31p+1000), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0x5.95116a53e849a318p+1000), LIT (0x1.65445a94fa1268c6p+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x5p+4 i", LIT (0x4p-1076), LIT (0x5p+4), { LIT (0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8p-960), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3cap-960), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076 + 0x8p-972 i", LIT (0x4p-1076), LIT (0x8p-972), { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4p-1076), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-1076), LIT (0x8.000000000000001p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x1p+0 i", LIT (0x4p-128), LIT (0x1p+0), { LIT (0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-128), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54131p-128), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-128), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-128), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x4p-16448 i", LIT (0x4p-128), LIT (0x4p-16448), { LIT (0x3.fffffffffffffffcp-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-128), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x3.fffffffffffffffcp-128), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-128), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-128), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x8p-16448 i", LIT (0x4p-128), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffcp-128), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-128), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-128), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x1p+0 i", LIT (0x4p-16384), LIT (0x1p+0), { LIT (0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d541308p-16384), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0x6.2c1d54767d54131p-16384), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x4p-1076 i", LIT (0x4p-16384), LIT (0x4p-1076), { LIT (0x4p-16384), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x4p-16384), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x4p-16384), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-16384), LIT (0x4.0000000000000008p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x4p-16448 i", LIT (0x4p-16384), LIT (0x4p-16448), { LIT (0x3.fffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-16384), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x8p-152 i", LIT (0x4p-16384), LIT (0x8p-152), { LIT (0x4p-16384), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-16384), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4p-16384), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x4.0000000000000008p-16384), LIT (0x8.000000000000001p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x8p-16448 i", LIT (0x4p-16384), LIT (0x8p-16448), { LIT (0x3.fffffffffffffffcp-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffffffcp-16384), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16384), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16436 + 0x5.8cap+12 i", LIT (0x4p-16436), LIT (0x5.8cap+12), { LIT (0x2.bf701efd42c88e7cp+16356), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e8p+16356), plus_infty, OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e7cp+16356), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { LIT (0x2.bf701efd42c88e8p+16356), plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448 + 0x2p-16384 i", LIT (0x4p-16448), LIT (0x2p-16384), { LIT (0x4p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x2.0000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448 + 0x4p-1024 i", LIT (0x4p-16448), LIT (0x4p-1024), { LIT (0x4p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4.0000000000000008p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448 + 0x4p-128 i", LIT (0x4p-16448), LIT (0x4p-128), { LIT (0x4p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4.0000000000000008p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448 + 0x4p-16384 i", LIT (0x4p-16448), LIT (0x4p-16384), { LIT (0x4p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4.0000000000000008p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448 + 0x5p+4 i", LIT (0x4p-16448), LIT (0x5p+4), { LIT (0x1.55779b984f3eb3c8p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3c8p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x1.55779b984f3eb3cap-16332), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448 + 0x8p-972 i", LIT (0x4p-16448), LIT (0x8p-972), { LIT (0x4p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x8.000000000000001p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x2p-16384 i", LIT (0x8p-152), LIT (0x2p-16384), { LIT (0x7.fffffffffffffff8p-152), LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-152), LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x4p-1024 i", LIT (0x8p-152), LIT (0x4p-1024), { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x4p-128 i", LIT (0x8p-152), LIT (0x4p-128), { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x8.000000000000001p-152), LIT (0x4.0000000000000008p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x4p-16384 i", LIT (0x8p-152), LIT (0x4p-16384), { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-16384), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x4p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x5.8cap+12 i", LIT (0x8p-152), LIT (0x5.8cap+12), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x5.ap+8 i", LIT (0x8p-152), LIT (0x5.ap+8), { LIT (0xb.2a22d4a7d093462p+1924), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d093462p+1924), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d093462p+1924), LIT (0x1.65445a94fa1268c4p+2076), ERRNO_UNCHANGED }, { LIT (0xb.2a22d4a7d093463p+1924), LIT (0x1.65445a94fa1268c6p+2076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x5p+4 i", LIT (0x8p-152), LIT (0x5p+4), { LIT (0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-36), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d6794p-36), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x8p-972 i", LIT (0x8p-152), LIT (0x8p-972), { LIT (0x7.fffffffffffffff8p-152), LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-152), LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0xb.4p+4 i", LIT (0x8p-152), LIT (0xb.4p+4), { LIT (0x3.37346563b110a9b8p+108), LIT (0x6.6e68cac76221537p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b8p+108), LIT (0x6.6e68cac76221537p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9b8p+108), LIT (0x6.6e68cac76221537p+256), ERRNO_UNCHANGED }, { LIT (0x3.37346563b110a9bcp+108), LIT (0x6.6e68cac762215378p+256), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448 + 0x2p-16384 i", LIT (0x8p-16448), LIT (0x2p-16384), { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0xcp-16448), LIT (0x2.0000000000000004p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448 + 0x4p-1024 i", LIT (0x8p-16448), LIT (0x4p-1024), { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0xcp-16448), LIT (0x4.0000000000000008p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448 + 0x4p-128 i", LIT (0x8p-16448), LIT (0x4p-128), { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-128), UNDERFLOW_EXCEPTION }, { LIT (0xcp-16448), LIT (0x4.0000000000000008p-128), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448 + 0x4p-16384 i", LIT (0x8p-16448), LIT (0x4p-16384), { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x4p-16384), UNDERFLOW_EXCEPTION }, { LIT (0xcp-16448), LIT (0x4.0000000000000008p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448 + 0x5p+4 i", LIT (0x8p-16448), LIT (0x5p+4), { LIT (0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d679p-16332), LIT (0x5.55de6e613cfacf2p+112), ERRNO_UNCHANGED }, { LIT (0x2.aaef37309e7d6794p-16332), LIT (0x5.55de6e613cfacf28p+112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448 + 0x8p-972 i", LIT (0x8p-16448), LIT (0x8p-972), { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), LIT (0x8p-972), UNDERFLOW_EXCEPTION }, { LIT (0xcp-16448), LIT (0x8.000000000000001p-972), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x1p+0 i", LIT (0x8p-972), LIT (0x1p+0), { LIT (0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8261p-972), LIT (0x1.2cd9fc44eb9825a8p+0), ERRNO_UNCHANGED }, { LIT (0xc.583aa8ecfaa8262p-972), LIT (0x1.2cd9fc44eb9825aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x7.fffffffffffffff8p-972), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-972), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x4p-16448 i", LIT (0x8p-972), LIT (0x4p-16448), { LIT (0x7.fffffffffffffff8p-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffff8p-972), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-972), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x8.000000000000001p-972), LIT (0x8.000000000000001p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x8p-16448 i", LIT (0x8p-972), LIT (0x8p-16448), { LIT (0x7.fffffffffffffff8p-972), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffffff8p-972), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-972), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 - 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (-0x2.c5d4p+12), { LIT (0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625ap+16380), LIT (-0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 - 0x2.c68p+8 i", LIT (0xcp-4), LIT (-0x2.c68p+8), { LIT (0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb6033707p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (-0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 - 0x5.98p+4 i", LIT (0xcp-4), LIT (-0x5.98p+4), { LIT (0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a6p+124), LIT (-0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 - 0xf.424p+16 i", LIT (0xcp-4), LIT (-0xf.424p+16), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.498770cd39c9a5b2p+0), LIT (0x1.2c0f29932c3a3bb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b2p+0), LIT (0x1.2c0f29932c3a3bb6p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b2p+0), LIT (0x1.2c0f29932c3a3bb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.498770cd39c9a5b4p+0), LIT (0x1.2c0f29932c3a3bb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x2.c5d4p+12 i", LIT (0xcp-4), LIT (0x2.c5d4p+12), { LIT (0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a6259p+16380), LIT (0xc.1aee93505374b41p+16380), ERRNO_UNCHANGED }, { LIT (0xb.46f43ab104a625ap+16380), LIT (0xc.1aee93505374b42p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x2.c68p+8 i", LIT (0xcp-4), LIT (0x2.c68p+8), { LIT (0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb6033707p+1020), LIT (0xb.fe39a718cb52b27p+1020), ERRNO_UNCHANGED }, { LIT (0xb.2c35ffb60337071p+1020), LIT (0xb.fe39a718cb52b28p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x5.98p+4 i", LIT (0xcp-4), LIT (0x5.98p+4), { LIT (0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a5p+124), LIT (0xc.bbaa76be57905b4p+124), ERRNO_UNCHANGED }, { LIT (0xb.dcb174d885199a6p+124), LIT (0xc.bbaa76be57905b5p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0xf.424p+16 i", LIT (0xcp-4), LIT (0xf.424p+16), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
  };

static void
csin_test (void)
{
  ALL_RM_TEST (csin, 0, csin_test_data, RUN_TEST_LOOP_c_c, END_COMPLEX);
}

static void
do_test (void)
{
  csin_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
