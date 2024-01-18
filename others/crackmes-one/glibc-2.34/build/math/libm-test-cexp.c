/* Test cexp.
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

static const struct test_c_c_data cexp_test_data[] =
  {
    { "inf + +0 i", plus_infty, plus_zero, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 }, { plus_infty, LIT (0.0), 0 } },
    { "inf - 0 i", plus_infty, minus_zero, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 }, { plus_infty, minus_zero, 0 } },

    { "-inf + +0 i", minus_infty, plus_zero, { LIT (0.0), LIT (0.0), 0 }, { LIT (0.0), LIT (0.0), 0 }, { LIT (0.0), LIT (0.0), 0 }, { LIT (0.0), LIT (0.0), 0 } },
    { "-inf - 0 i", minus_infty, minus_zero, { LIT (0.0), minus_zero, 0 }, { LIT (0.0), minus_zero, 0 }, { LIT (0.0), minus_zero, 0 }, { LIT (0.0), minus_zero, 0 } },

    { "0.0 + inf i", LIT (0.0), plus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-0 + inf i", minus_zero, plus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },

    { "0.0 - inf i", LIT (0.0), minus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-0 - inf i", minus_zero, minus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },

    { "100.0 + inf i", LIT (100.0), plus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-100.0 + inf i", LIT (-100.0), plus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },

    { "100.0 - inf i", LIT (100.0), minus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },
    { "-100.0 - inf i", LIT (-100.0), minus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION }, { qnan_value, qnan_value, INVALID_EXCEPTION } },

    { "-inf + 2.0 i", minus_infty, LIT (2.0), { minus_zero, LIT (0.0), 0 }, { minus_zero, LIT (0.0), 0 }, { minus_zero, LIT (0.0), 0 }, { minus_zero, LIT (0.0), 0 } },
    { "-inf + 4.0 i", minus_infty, LIT (4.0), { minus_zero, minus_zero, 0 }, { minus_zero, minus_zero, 0 }, { minus_zero, minus_zero, 0 }, { minus_zero, minus_zero, 0 } },
    { "inf + 2.0 i", plus_infty, LIT (2.0), { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 }, { minus_infty, plus_infty, 0 } },
    { "inf + 4.0 i", plus_infty, LIT (4.0), { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 }, { minus_infty, minus_infty, 0 } },

    { "inf + inf i", plus_infty, plus_infty, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },
    { "inf - inf i", plus_infty, minus_infty, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN }, { plus_infty, qnan_value, INVALID_EXCEPTION|IGNORE_ZERO_INF_SIGN } },

    { "-inf + inf i", minus_infty, plus_infty, { LIT (0.0), LIT (0.0), IGNORE_ZERO_INF_SIGN }, { LIT (0.0), LIT (0.0), IGNORE_ZERO_INF_SIGN }, { LIT (0.0), LIT (0.0), IGNORE_ZERO_INF_SIGN }, { LIT (0.0), LIT (0.0), IGNORE_ZERO_INF_SIGN } },
    { "-inf - inf i", minus_infty, minus_infty, { LIT (0.0), minus_zero, IGNORE_ZERO_INF_SIGN }, { LIT (0.0), minus_zero, IGNORE_ZERO_INF_SIGN }, { LIT (0.0), minus_zero, IGNORE_ZERO_INF_SIGN }, { LIT (0.0), minus_zero, IGNORE_ZERO_INF_SIGN } },

    { "-inf + qNaN i", minus_infty, qnan_value, { 0, 0, IGNORE_ZERO_INF_SIGN }, { 0, 0, IGNORE_ZERO_INF_SIGN }, { 0, 0, IGNORE_ZERO_INF_SIGN }, { 0, 0, IGNORE_ZERO_INF_SIGN } },

    { "inf + qNaN i", plus_infty, qnan_value, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 }, { plus_infty, qnan_value, 0 } },

    { "qNaN + 0.0 i", qnan_value, LIT (0.0), { qnan_value, LIT (0.0), 0 }, { qnan_value, LIT (0.0), 0 }, { qnan_value, LIT (0.0), 0 }, { qnan_value, LIT (0.0), 0 } },
    { "qNaN - 0 i", qnan_value, minus_zero, { qnan_value, minus_zero, 0 }, { qnan_value, minus_zero, 0 }, { qnan_value, minus_zero, 0 }, { qnan_value, minus_zero, 0 } },
    { "qNaN + 1.0 i", qnan_value, LIT (1.0), { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },

    { "qNaN + inf i", qnan_value, plus_infty, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "0 + qNaN i", 0, qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "1 + qNaN i", 1, qnan_value, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK }, { qnan_value, qnan_value, INVALID_EXCEPTION_OK } },
    { "qNaN + qNaN i", qnan_value, qnan_value, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 }, { qnan_value, qnan_value, 0 } },

#if (TEST_COND_binary128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.71p+12 + 0x8p+16380 i", LIT (-0x2.71p+12), LIT (0x8p+16380), { LIT (0x1.e8166e7f3558751c32b0e3dea10dp-14428), LIT (0xc.e535876597146d43011c92edfep-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751c32b0e3dea10dp-14428), LIT (0xc.e535876597146d43011c92edfep-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751c32b0e3dea10dp-14428), LIT (0xc.e535876597146d43011c92edfep-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751c32b0e3dea10ep-14428), LIT (0xc.e535876597146d43011c92edfe08p-14432), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.71p+12 + 0xf.ffffffffffff8p+1020 i", LIT (-0x2.71p+12), LIT (0xf.ffffffffffff8p+1020), { LIT (-0x2.11e61ef928e7d0efbe7438c4fcc4p-14428), LIT (0x2.a11e2ecfaecac192b6a0e262eb96p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0efbe7438c4fcc4p-14428), LIT (0x2.a11e2ecfaecac192b6a0e262eb98p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0efbe7438c4fcc2p-14428), LIT (0x2.a11e2ecfaecac192b6a0e262eb96p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0efbe7438c4fcc2p-14428), LIT (0x2.a11e2ecfaecac192b6a0e262eb98p-14436), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.71p+12 + 0xf.ffffffffffffbffffffffffffcp+1020 i", LIT (-0x2.71p+12), LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0xb.d543737097bf3314fbbe8e859c68p-14432), LIT (-0x1.eeedb82a3f993d2142211659ef2bp-14428), ERRNO_UNCHANGED }, { LIT (-0xb.d543737097bf3314fbbe8e859c68p-14432), LIT (-0x1.eeedb82a3f993d2142211659ef2ap-14428), ERRNO_UNCHANGED }, { LIT (-0xb.d543737097bf3314fbbe8e859c6p-14432), LIT (-0x1.eeedb82a3f993d2142211659ef2ap-14428), ERRNO_UNCHANGED }, { LIT (-0xb.d543737097bf3314fbbe8e859c6p-14432), LIT (-0x1.eeedb82a3f993d2142211659ef2ap-14428), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.71p+12 + 0xf.fffffp+124 i", LIT (-0x2.71p+12), LIT (0xf.fffffp+124), { LIT (0x1.c4053e6f86ae06fa87507d1789dfp-14428), LIT (-0x1.148b929412b0629b094c40cf114ep-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fa87507d1789ep-14428), LIT (-0x1.148b929412b0629b094c40cf114dp-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fa87507d1789dfp-14428), LIT (-0x1.148b929412b0629b094c40cf114dp-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fa87507d1789ep-14428), LIT (-0x1.148b929412b0629b094c40cf114dp-14428), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.c6ap+12 + 0xcp-4 i", LIT (-0x2.c6ap+12), LIT (0xcp-4), { LIT (0x1.13a6153b6bd9627c65c9a3p-16404), LIT (0x1.00cb1cf14f92cea76ffbfc4p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6bd9627c65c9a3p-16404), LIT (0x1.00cb1cf14f92cea76ffbfc4p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6bd9627c65c9a3p-16404), LIT (0x1.00cb1cf14f92cea76ffbfc4p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6bd9627c65c9a34p-16404), LIT (0x1.00cb1cf14f92cea76ffbfc8p-16404), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.dp+8 + 0xcp-4 i", LIT (-0x2.dp+8), LIT (0xcp-4), { LIT (0x1.c078b9f17de705030eb7be1c38bep-1040), LIT (0x1.a1cb672cfaaa50edd9f9bf2df7e2p-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de705030eb7be1c38bep-1040), LIT (0x1.a1cb672cfaaa50edd9f9bf2df7e3p-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de705030eb7be1c38bep-1040), LIT (0x1.a1cb672cfaaa50edd9f9bf2df7e2p-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de705030eb7be1c38bfp-1040), LIT (0x1.a1cb672cfaaa50edd9f9bf2df7e3p-1040), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x2.24c92bfe91963d02be8ecb5378aep-4), LIT (-0x4.e3a3eebe631d441ee01e4010f2ap-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d02be8ecb5378aep-4), LIT (-0x4.e3a3eebe631d441ee01e4010f29cp-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d02be8ecb5378acp-4), LIT (-0x4.e3a3eebe631d441ee01e4010f29cp-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d02be8ecb5378acp-4), LIT (-0x4.e3a3eebe631d441ee01e4010f29cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.fp+4 + 0xcp-4 i", LIT (-0x5.fp+4), LIT (0xcp-4), { LIT (0x5.a16b1470bfb7dfdbbfbeddb710d8p-140), LIT (0x5.3ed1f6801e8aae3c0059585ef1e8p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfdbbfbeddb710d8p-140), LIT (0x5.3ed1f6801e8aae3c0059585ef1e8p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfdbbfbeddb710d8p-140), LIT (0x5.3ed1f6801e8aae3c0059585ef1e8p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfdbbfbeddb710dcp-140), LIT (0x5.3ed1f6801e8aae3c0059585ef1ecp-140), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 - 0x2p+64 i", LIT (0x0p+0), LIT (-0x2p+64), { LIT (0xf.fb701e22987fbe68852ee2bc897p-4), LIT (0xc.143e153b0701e800f9b8a47b75bp-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc897p-4), LIT (0xc.143e153b0701e800f9b8a47b75b8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc897p-4), LIT (0xc.143e153b0701e800f9b8a47b75bp-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc8978p-4), LIT (0xc.143e153b0701e800f9b8a47b75b8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x2.1e19e0c9bab24p+72 i", LIT (0x0p+0), LIT (0x2.1e19e0c9bab24p+72), { LIT (0x8.5f167780e479c9a5c86ffce76148p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc991fp-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9a5c86ffce7615p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc991fp-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9a5c86ffce76148p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc991e8p-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9a5c86ffce7615p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc991e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x2.1e19e4p+72 i", LIT (0x0p+0), LIT (0x2.1e19e4p+72), { LIT (0xf.431dd7a36cf37de5c74544f6b438p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d196p-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37de5c74544f6b438p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d196p-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37de5c74544f6b438p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d195cp-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37de5c74544f6b44p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d195cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x2.1e19ep+72 i", LIT (0x0p+0), LIT (0x2.1e19ep+72), { LIT (0xa.dd6f6bacd20654c1404f52cde16p-4), LIT (-0xb.becc47ab1b8c70793712c4ff2bc8p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654c1404f52cde16p-4), LIT (-0xb.becc47ab1b8c70793712c4ff2bcp-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654c1404f52cde16p-4), LIT (-0xb.becc47ab1b8c70793712c4ff2bcp-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654c1404f52cde168p-4), LIT (-0xb.becc47ab1b8c70793712c4ff2bcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x2p+64 i", LIT (0x0p+0), LIT (0x2p+64), { LIT (0xf.fb701e22987fbe68852ee2bc897p-4), LIT (-0xc.143e153b0701e800f9b8a47b75b8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc897p-4), LIT (-0xc.143e153b0701e800f9b8a47b75b8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc897p-4), LIT (-0xc.143e153b0701e800f9b8a47b75bp-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc8978p-4), LIT (-0xc.143e153b0701e800f9b8a47b75bp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x8p+1020 i", LIT (0x0p+0), LIT (0x8p+1020), { LIT (-0xd.38cf9361195f50b10fac29dd9038p-4), LIT (0x9.0292465edbaff2d2e64a2845e55p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50b10fac29dd9038p-4), LIT (0x9.0292465edbaff2d2e64a2845e558p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50b10fac29dd903p-4), LIT (0x9.0292465edbaff2d2e64a2845e55p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50b10fac29dd903p-4), LIT (0x9.0292465edbaff2d2e64a2845e558p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x8p+16380 i", LIT (0x0p+0), LIT (0x8p+16380), { LIT (0xe.bcc2fc82ae39ebf8da5d687bf358p-4), LIT (0x6.3ad4b2136cc6881f0ca607c7946p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ebf8da5d687bf36p-4), LIT (0x6.3ad4b2136cc6881f0ca607c7946p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ebf8da5d687bf358p-4), LIT (0x6.3ad4b2136cc6881f0ca607c7946p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ebf8da5d687bf36p-4), LIT (0x6.3ad4b2136cc6881f0ca607c79464p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0xf.ffffffffffff8p+1020 i", LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), { LIT (-0xf.fff31767d5ba9e038d934070f138p-4), LIT (0x1.452fc98b34e96b61139b09a7c84ap-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9e038d934070f138p-4), LIT (0x1.452fc98b34e96b61139b09a7c84ap-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9e038d934070f13p-4), LIT (0x1.452fc98b34e96b61139b09a7c84ap-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9e038d934070f13p-4), LIT (0x1.452fc98b34e96b61139b09a7c84bp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0xf.ffffffffffffbffffffffffffcp+1020 i", LIT (0x0p+0), LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x5.b773d971a848e75c230605526978p-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fbe68p-4), ERRNO_UNCHANGED }, { LIT (-0x5.b773d971a848e75c230605526978p-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fbe6p-4), ERRNO_UNCHANGED }, { LIT (-0x5.b773d971a848e75c230605526974p-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fbe6p-4), ERRNO_UNCHANGED }, { LIT (-0x5.b773d971a848e75c230605526974p-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fbe6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0xf.fffffp+124 i", LIT (0x0p+0), LIT (0xf.fffffp+124), { LIT (0xd.a5f963cdefe6d529f6b6009fb2fp-4), LIT (-0x8.599b32844aba906cee446be049ap-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d529f6b6009fb2fp-4), LIT (-0x8.599b32844aba906cee446be04998p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d529f6b6009fb2fp-4), LIT (-0x8.599b32844aba906cee446be04998p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d529f6b6009fb2f8p-4), LIT (-0x8.599b32844aba906cee446be04998p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.f4p+8 + 0x8p+1020 i", LIT (0x1.f4p+8), LIT (0x8p+1020), { LIT (-0x2.1a57a00f46ca0104a4a8debe272cp+720), LIT (0x1.6eda2234d2fb783c9b2dfe363654p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104a4a8debe272cp+720), LIT (0x1.6eda2234d2fb783c9b2dfe363655p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104a4a8debe272ap+720), LIT (0x1.6eda2234d2fb783c9b2dfe363654p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104a4a8debe272ap+720), LIT (0x1.6eda2234d2fb783c9b2dfe363655p+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.f4p+8 + 0xf.fffffp+124 i", LIT (0x1.f4p+8), LIT (0xf.fffffp+124), { LIT (0x2.2bb44f145617f434b0b6dacfc608p+720), LIT (-0x1.53fa90b97c5f314384c5dcbe454bp+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434b0b6dacfc608p+720), LIT (-0x1.53fa90b97c5f314384c5dcbe454bp+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434b0b6dacfc608p+720), LIT (-0x1.53fa90b97c5f314384c5dcbe454ap+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434b0b6dacfc60ap+720), LIT (-0x1.53fa90b97c5f314384c5dcbe454ap+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 - 0x2p-16384 i", LIT (0x1p+0), LIT (-0x2p-16384), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0x5.6fc2a2c515da54d57ee2b10139ecp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0x5.6fc2a2c515da54d57ee2b10139e8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0x5.6fc2a2c515da54d57ee2b10139e8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (-0x5.6fc2a2c515da54d57ee2b10139e8p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 - 0x4p-1024 i", LIT (0x1p+0), LIT (-0x4p-1024), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273d8p-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 - 0x4p-128 i", LIT (0x1p+0), LIT (-0x4p-128), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273d8p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 - 0x4p-16384 i", LIT (0x1p+0), LIT (-0x4p-16384), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273d8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (-0xa.df85458a2bb4a9aafdc5620273dp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 - 0x8p-972 i", LIT (0x1p+0), LIT (-0x8p-972), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0x1.5bf0a8b1457695355fb8ac404e7bp-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0x1.5bf0a8b1457695355fb8ac404e7ap-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (-0x1.5bf0a8b1457695355fb8ac404e7ap-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (-0x1.5bf0a8b1457695355fb8ac404e7ap-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 + 0x2p-16384 i", LIT (0x1p+0), LIT (0x2p-16384), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0x5.6fc2a2c515da54d57ee2b10139e8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0x5.6fc2a2c515da54d57ee2b10139e8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0x5.6fc2a2c515da54d57ee2b10139e8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (0x5.6fc2a2c515da54d57ee2b10139ecp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 + 0x4p-1024 i", LIT (0x1p+0), LIT (0x4p-1024), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (0xa.df85458a2bb4a9aafdc5620273d8p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 + 0x4p-128 i", LIT (0x1p+0), LIT (0x4p-128), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (0xa.df85458a2bb4a9aafdc5620273d8p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 + 0x4p-16384 i", LIT (0x1p+0), LIT (0x4p-16384), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0xa.df85458a2bb4a9aafdc5620273dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (0xa.df85458a2bb4a9aafdc5620273d8p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 + 0x8p-972 i", LIT (0x1p+0), LIT (0x8p-972), { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0x1.5bf0a8b1457695355fb8ac404e7ap-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0x1.5bf0a8b1457695355fb8ac404e7ap-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), LIT (0x1.5bf0a8b1457695355fb8ac404e7ap-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), LIT (0x1.5bf0a8b1457695355fb8ac404e7bp-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5c9p+12 + 0xcp-4 i", LIT (0x2.c5c9p+12), LIT (0xcp-4), { LIT (0xc.2c7b4ebbdc07f2895c5da23f1578p+16380), LIT (0xb.574da480ee945213770f41b94b9p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f2895c5da23f1578p+16380), LIT (0xb.574da480ee945213770f41b94b9p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f2895c5da23f1578p+16380), LIT (0xb.574da480ee945213770f41b94b9p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f2895c5da23f158p+16380), LIT (0xb.574da480ee945213770f41b94b98p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.c5dp+8 + 0xcp-4 i", LIT (0x2.c5dp+8), LIT (0xcp-4), { LIT (0xc.0f9cc448d42c9e187ae50ff49e08p+1020), LIT (0xb.3c68a413f4464ce19f9dc01a8ce8p+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e187ae50ff49e1p+1020), LIT (0xb.3c68a413f4464ce19f9dc01a8ce8p+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e187ae50ff49e08p+1020), LIT (0xb.3c68a413f4464ce19f9dc01a8ce8p+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e187ae50ff49e1p+1020), LIT (0xb.3c68a413f4464ce19f9dc01a8cfp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 - 0x4p-1076 i", LIT (0x2p-16384), LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 - 0x4p-16448 i", LIT (0x2p-16384), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x4.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 - 0x4p-16496 i", LIT (0x2p-16384), LIT (-0x4p-16496), { LIT (0x1p+0), LIT (-0x8p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 - 0x8p-152 i", LIT (0x2p-16384), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 - 0x8p-16448 i", LIT (0x2p-16384), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x8.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x4p-1076 i", LIT (0x2p-16384), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x4p-16448 i", LIT (0x2p-16384), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x4p-16496 i", LIT (0x2p-16384), LIT (0x4p-16496), { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x8p-152 i", LIT (0x2p-16384), LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384 + 0x8p-16448 i", LIT (0x2p-16384), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x3.2p+4 + 0x8p+124 i", LIT (0x3.2p+4), LIT (0x8p+124), { LIT (0xd.bc4832122ae9c442e6aea322857p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a73p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c442e6aea322857p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a738p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c442e6aea322857p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a73p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c442e6aea3228578p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a738p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 - 0x4p-1076 i", LIT (0x4p-1024), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000000000000000004p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 - 0x4p-16448 i", LIT (0x4p-1024), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x4.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 - 0x4p-16496 i", LIT (0x4p-1024), LIT (-0x4p-16496), { LIT (0x1p+0), LIT (-0x8p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 - 0x8p-152 i", LIT (0x4p-1024), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 - 0x8p-16448 i", LIT (0x4p-1024), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x8.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.0000000000000000000000000004p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x4p-16448 i", LIT (0x4p-1024), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x4p-16496 i", LIT (0x4p-1024), LIT (0x4p-16496), { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024 + 0x8p-16448 i", LIT (0x4p-1024), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 - 0x4p-1076 i", LIT (0x4p-128), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000000000000000004p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 - 0x4p-16448 i", LIT (0x4p-128), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x4.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 - 0x4p-16496 i", LIT (0x4p-128), LIT (-0x4p-16496), { LIT (0x1p+0), LIT (-0x8p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 - 0x8p-152 i", LIT (0x4p-128), LIT (-0x8p-152), { LIT (0x1p+0), LIT (-0x8.0000000000000000000000000008p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 - 0x8p-16448 i", LIT (0x4p-128), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x8.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.0000000000000000000000000004p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x4p-16448 i", LIT (0x4p-128), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x4p-16496 i", LIT (0x4p-128), LIT (0x4p-16496), { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8.0000000000000000000000000008p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128 + 0x8p-16448 i", LIT (0x4p-128), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 - 0x4p-1076 i", LIT (0x4p-16384), LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 - 0x4p-16448 i", LIT (0x4p-16384), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x4.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 - 0x4p-16496 i", LIT (0x4p-16384), LIT (-0x4p-16496), { LIT (0x1p+0), LIT (-0x8p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 - 0x8p-152 i", LIT (0x4p-16384), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 - 0x8p-16448 i", LIT (0x4p-16384), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x8.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x4p-1076 i", LIT (0x4p-16384), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x4p-16448 i", LIT (0x4p-16384), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x4p-16496 i", LIT (0x4p-16384), LIT (0x4p-16496), { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x8p-152 i", LIT (0x4p-16384), LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384 + 0x8p-16448 i", LIT (0x4p-16384), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x5.8cap+12 + +0 i", LIT (0x5.8cap+12), LIT (0x0p+0), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x5.8cap+12 + 0x4p-1076 i", LIT (0x5.8cap+12), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x5.8cap+12 + 0x4p-16436 i", LIT (0x5.8cap+12), LIT (0x4p-16436), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0x5.7ee03dfa85911cfdf85fbeeecbf8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x5.7ee03dfa85911cfdf85fbeeecbf8p+16356), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0x5.7ee03dfa85911cfdf85fbeeecbf8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x5.7ee03dfa85911cfdf85fbeeecbfcp+16356), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x5.8cap+12 + 0x8p-152 i", LIT (0x5.8cap+12), LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x5.8cp+4 + 0xcp-4 i", LIT (0x5.8cp+4), LIT (0xcp-4), { LIT (0xc.0783a6d3e5c3237fe2c102f4bap+124), LIT (0xb.34dd5592f15a8d637411b4ac57ep+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237fe2c102f4ba08p+124), LIT (0xb.34dd5592f15a8d637411b4ac57e8p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237fe2c102f4bap+124), LIT (0xb.34dd5592f15a8d637411b4ac57ep+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237fe2c102f4ba08p+124), LIT (0xb.34dd5592f15a8d637411b4ac57e8p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5.ap+8 + +0 i", LIT (0x5.ap+8), LIT (0x0p+0), { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dep+2076), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5.ap+8 + 0x4p-1076 i", LIT (0x5.ap+8), LIT (0x4p-1076), { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0xb.2a22d4a7d0934623f733dc45db7p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0xb.2a22d4a7d0934623f733dc45db7p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0xb.2a22d4a7d0934623f733dc45db7p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dep+2076), LIT (0xb.2a22d4a7d0934623f733dc45db78p+1000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5.ap+8 + 0x8p-152 i", LIT (0x5.ap+8), LIT (0x8p-152), { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dcp+2076), LIT (0x1.65445a94fa1268c47ee67b88bb6ep+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188fdccf71176dep+2076), LIT (0x1.65445a94fa1268c47ee67b88bb6fp+1928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 - 0x4p-1076 i", LIT (0x5p+4), LIT (-0x4p-1076), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 - 0x4p-16448 i", LIT (0x5p+4), LIT (-0x4p-16448), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 - 0x4p-16496 i", LIT (0x5p+4), LIT (-0x4p-16496), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-16380), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x2.aaef37309e7d67914a076951c492p-16380), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-16380), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x2.aaef37309e7d67914a076951c49p-16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 - 0x8p-152 i", LIT (0x5p+4), LIT (-0x8p-152), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x5.55de6e613cfacf22940ed2a38924p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x5.55de6e613cfacf22940ed2a38924p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x5.55de6e613cfacf22940ed2a3892p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x5.55de6e613cfacf22940ed2a3892p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 - 0x8p-16448 i", LIT (0x5p+4), LIT (-0x8p-16448), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x5.55de6e613cfacf22940ed2a38924p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x5.55de6e613cfacf22940ed2a38924p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (-0x5.55de6e613cfacf22940ed2a3892p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (-0x5.55de6e613cfacf22940ed2a3892p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 + 0x4p-1076 i", LIT (0x5p+4), LIT (0x4p-1076), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x2.aaef37309e7d67914a076951c49p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x2.aaef37309e7d67914a076951c492p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x2.aaef37309e7d67914a076951c49p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x2.aaef37309e7d67914a076951c492p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 + 0x4p-16448 i", LIT (0x5p+4), LIT (0x4p-16448), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x2.aaef37309e7d67914a076951c49p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x2.aaef37309e7d67914a076951c492p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 + 0x4p-16496 i", LIT (0x5p+4), LIT (0x4p-16496), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x2.aaef37309e7d67914a076951c49p-16380), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x2.aaef37309e7d67914a076951c492p-16380), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x2.aaef37309e7d67914a076951c49p-16380), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x2.aaef37309e7d67914a076951c492p-16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 + 0x8p-152 i", LIT (0x5p+4), LIT (0x8p-152), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x5.55de6e613cfacf22940ed2a3892p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x5.55de6e613cfacf22940ed2a38924p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x5.55de6e613cfacf22940ed2a3892p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x5.55de6e613cfacf22940ed2a38924p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x5p+4 + 0x8p-16448 i", LIT (0x5p+4), LIT (0x8p-16448), { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x5.55de6e613cfacf22940ed2a3892p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x5.55de6e613cfacf22940ed2a38924p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da547124p+112), LIT (0x5.55de6e613cfacf22940ed2a3892p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471248p+112), LIT (0x5.55de6e613cfacf22940ed2a38924p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 - 0x4p-1076 i", LIT (0x8p-972), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000000000000000004p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 - 0x4p-16448 i", LIT (0x8p-972), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x4.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 - 0x4p-16496 i", LIT (0x8p-972), LIT (-0x4p-16496), { LIT (0x1p+0), LIT (-0x8p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 - 0x8p-152 i", LIT (0x8p-972), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 - 0x8p-16448 i", LIT (0x8p-972), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x8.000000000004p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.0000000000000000000000000004p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x4p-16448 i", LIT (0x8p-972), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x4.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x4p-16496 i", LIT (0x8p-972), LIT (0x4p-16496), { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-4), LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972 + 0x8p-16448 i", LIT (0x8p-972), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000000000000000001p+0), LIT (0x8.000000000004p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xb.4p+4 + 0x8p-152 i", LIT (0xb.4p+4), LIT (0x8p-152), { LIT (0xc.dcd1958ec442a6e599f65fac79e8p+256), LIT (0x6.6e68cac762215372ccfb2fd63cf4p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6e599f65fac79e8p+256), LIT (0x6.6e68cac762215372ccfb2fd63cf4p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6e599f65fac79e8p+256), LIT (0x6.6e68cac762215372ccfb2fd63cf4p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6e599f65fac79fp+256), LIT (0x6.6e68cac762215372ccfb2fd63cf8p+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0xa.ae3bbed44ba9735d1448d2314a48p-4), LIT (0x2.024dda939ed8dc96880c3ee758a8p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735d1448d2314a5p-4), LIT (0x2.024dda939ed8dc96880c3ee758aap+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735d1448d2314a48p-4), LIT (0x2.024dda939ed8dc96880c3ee758a8p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735d1448d2314a5p-4), LIT (0x2.024dda939ed8dc96880c3ee758aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 - 0x2p-16384 i", LIT (0xf.424p+16), LIT (-0x2p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 - 0x4p-1024 i", LIT (0xf.424p+16), LIT (-0x4p-1024), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 - 0x4p-128 i", LIT (0xf.424p+16), LIT (-0x4p-128), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 - 0x4p-16384 i", LIT (0xf.424p+16), LIT (-0x4p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 - 0x8p-972 i", LIT (0xf.424p+16), LIT (-0x8p-972), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 + +0 i", LIT (0xf.424p+16), LIT (0x0p+0), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 + 0x2p-16384 i", LIT (0xf.424p+16), LIT (0x2p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 + 0x4p-1024 i", LIT (0xf.424p+16), LIT (0x4p-1024), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 + 0x4p-128 i", LIT (0xf.424p+16), LIT (0x4p-128), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 + 0x4p-16384 i", LIT (0xf.424p+16), LIT (0x4p-16384), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16 + 0x8p-972 i", LIT (0xf.424p+16), LIT (0x8p-972), { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffffffffffffff8p+16380), LIT (0xf.fffffffffffffffffffffffffff8p+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.71p+12 + 0xf.fffffp+124 i", LIT (-0x2.71p+12), LIT (0xf.fffffp+124), { LIT (0x0p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.c6ap+12 + 0xcp-4 i", LIT (-0x2.c6ap+12), LIT (0xcp-4), { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.dp+8 + 0xcp-4 i", LIT (-0x2.dp+8), LIT (0xcp-4), { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), LIT (0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x2.24c92cp-4), LIT (-0x4.e3a3fp-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92cp-4), LIT (-0x4.e3a3fp-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c928p-4), LIT (-0x4.e3a3e8p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c928p-4), LIT (-0x4.e3a3e8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x5.fp+4 + 0xcp-4 i", LIT (-0x5.fp+4), LIT (0xcp-4), { LIT (0x5.a1p-140), LIT (0x5.3e8p-140), UNDERFLOW_EXCEPTION }, { LIT (0x5.a18p-140), LIT (0x5.3fp-140), UNDERFLOW_EXCEPTION }, { LIT (0x5.a1p-140), LIT (0x5.3e8p-140), UNDERFLOW_EXCEPTION }, { LIT (0x5.a18p-140), LIT (0x5.3fp-140), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 - 0x2p+64 i", LIT (0x0p+0), LIT (-0x2p+64), { LIT (0xf.fb701p-4), LIT (0xc.143e1p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb702p-4), LIT (0xc.143e1p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701p-4), LIT (0xc.143e1p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb702p-4), LIT (0xc.143e2p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x2.1e19e4p+72 i", LIT (0x0p+0), LIT (0x2.1e19e4p+72), { LIT (0xf.431ddp-4), LIT (-0x4.cd7e88p-4), ERRNO_UNCHANGED }, { LIT (0xf.431ddp-4), LIT (-0x4.cd7e88p-4), ERRNO_UNCHANGED }, { LIT (0xf.431ddp-4), LIT (-0x4.cd7e8p-4), ERRNO_UNCHANGED }, { LIT (0xf.431dep-4), LIT (-0x4.cd7e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x2.1e19ep+72 i", LIT (0x0p+0), LIT (0x2.1e19ep+72), { LIT (0xa.dd6f6p-4), LIT (-0xb.becc5p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f7p-4), LIT (-0xb.becc4p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6p-4), LIT (-0xb.becc4p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f7p-4), LIT (-0xb.becc4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x2p+64 i", LIT (0x0p+0), LIT (0x2p+64), { LIT (0xf.fb701p-4), LIT (-0xc.143e2p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb702p-4), LIT (-0xc.143e1p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701p-4), LIT (-0xc.143e1p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb702p-4), LIT (-0xc.143e1p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0xf.fffffp+124 i", LIT (0x0p+0), LIT (0xf.fffffp+124), { LIT (0xd.a5f96p-4), LIT (-0x8.599b4p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f96p-4), LIT (-0x8.599b3p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f96p-4), LIT (-0x8.599b3p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f97p-4), LIT (-0x8.599b3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.f4p+8 + 0xf.fffffp+124 i", LIT (0x1.f4p+8), LIT (0xf.fffffp+124), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0 - 0x4p-128 i", LIT (0x1p+0), LIT (-0x4p-128), { LIT (0x2.b7e15p+0), LIT (-0xa.df855p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e15p+0), LIT (-0xa.df854p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e15p+0), LIT (-0xa.df854p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e154p+0), LIT (-0xa.df854p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0 + 0x4p-128 i", LIT (0x1p+0), LIT (0x4p-128), { LIT (0x2.b7e15p+0), LIT (0xa.df854p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e15p+0), LIT (0xa.df854p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e15p+0), LIT (0xa.df854p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e154p+0), LIT (0xa.df855p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c5c9p+12 + 0xcp-4 i", LIT (0x2.c5c9p+12), LIT (0xcp-4), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x2.c5dp+8 + 0xcp-4 i", LIT (0x2.c5dp+8), LIT (0xcp-4), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x3.2p+4 + 0x8p+124 i", LIT (0x3.2p+4), LIT (0x8p+124), { LIT (0xd.bc483p+68), LIT (0xa.f35fcp+68), ERRNO_UNCHANGED }, { LIT (0xd.bc483p+68), LIT (0xa.f35fcp+68), ERRNO_UNCHANGED }, { LIT (0xd.bc483p+68), LIT (0xa.f35fcp+68), ERRNO_UNCHANGED }, { LIT (0xd.bc484p+68), LIT (0xa.f35fdp+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128 - 0x8p-152 i", LIT (0x4p-128), LIT (-0x8p-152), { LIT (0x1p+0), LIT (-0x1p-148), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1.000002p+0), LIT (-0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x1p+0), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x1.000002p+0), LIT (0x1p-148), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x5.8cap+12 + +0 i", LIT (0x5.8cap+12), LIT (0x0p+0), { LIT (0xf.fffffp+124), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x5.8cap+12 + 0x8p-152 i", LIT (0x5.8cap+12), LIT (0x8p-152), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x5.8cp+4 + 0xcp-4 i", LIT (0x5.8cp+4), LIT (0xcp-4), { LIT (0xc.0783ap+124), LIT (0xb.34dd5p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783ap+124), LIT (0xb.34dd5p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783ap+124), LIT (0xb.34dd5p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783bp+124), LIT (0xb.34dd6p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x5.ap+8 + +0 i", LIT (0x5.ap+8), LIT (0x0p+0), { LIT (0xf.fffffp+124), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x5.ap+8 + 0x8p-152 i", LIT (0x5.ap+8), LIT (0x8p-152), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x5p+4 - 0x8p-152 i", LIT (0x5p+4), LIT (-0x8p-152), { LIT (0xa.abbcdp+112), LIT (-0x5.55de7p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcep+112), LIT (-0x5.55de7p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdp+112), LIT (-0x5.55de68p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcep+112), LIT (-0x5.55de68p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x5p+4 + 0x8p-152 i", LIT (0x5p+4), LIT (0x8p-152), { LIT (0xa.abbcdp+112), LIT (0x5.55de68p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcep+112), LIT (0x5.55de7p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdp+112), LIT (0x5.55de68p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcep+112), LIT (0x5.55de7p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.4p+4 + 0x8p-152 i", LIT (0xb.4p+4), LIT (0x8p-152), { LIT (0xf.fffffp+124), LIT (0x6.6e68c8p+108), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x6.6e68c8p+108), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0x6.6e68c8p+108), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x6.6e68dp+108), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0xa.ae3bbp-4), LIT (0x2.024dd8p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bcp-4), LIT (0x2.024ddcp+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbp-4), LIT (0x2.024dd8p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bcp-4), LIT (0x2.024ddcp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.424p+16 - 0x4p-128 i", LIT (0xf.424p+16), LIT (-0x4p-128), { LIT (0xf.fffffp+124), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffp+124), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xf.424p+16 + +0 i", LIT (0xf.424p+16), LIT (0x0p+0), { LIT (0xf.fffffp+124), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0xf.424p+16 + 0x4p-128 i", LIT (0xf.424p+16), LIT (0x4p-128), { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffp+124), LIT (0xf.fffffp+124), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.71p+12 + 0xf.ffffffffffff8p+1020 i", LIT (-0x2.71p+12), LIT (0xf.ffffffffffff8p+1020), { LIT (-0x4p-1076), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.71p+12 + 0xf.fffffp+124 i", LIT (-0x2.71p+12), LIT (0xf.fffffp+124), { LIT (0x0p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.c6ap+12 + 0xcp-4 i", LIT (-0x2.c6ap+12), LIT (0xcp-4), { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.dp+8 + 0xcp-4 i", LIT (-0x2.dp+8), LIT (0xcp-4), { LIT (0x1.c078b9f14p-1040), LIT (0x1.a1cb672ccp-1040), UNDERFLOW_EXCEPTION }, { LIT (0x1.c078b9f18p-1040), LIT (0x1.a1cb672dp-1040), UNDERFLOW_EXCEPTION }, { LIT (0x1.c078b9f14p-1040), LIT (0x1.a1cb672ccp-1040), UNDERFLOW_EXCEPTION }, { LIT (0x1.c078b9f18p-1040), LIT (0x1.a1cb672dp-1040), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x2.24c92bfe91964p-4), LIT (-0x4.e3a3eebe631d8p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91964p-4), LIT (-0x4.e3a3eebe631d4p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91962p-4), LIT (-0x4.e3a3eebe631d4p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91962p-4), LIT (-0x4.e3a3eebe631d4p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.fp+4 + 0xcp-4 i", LIT (-0x5.fp+4), LIT (0xcp-4), { LIT (0x5.a16b1470bfb7cp-140), LIT (0x5.3ed1f6801e8a8p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7cp-140), LIT (0x5.3ed1f6801e8acp-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7cp-140), LIT (0x5.3ed1f6801e8a8p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb8p-140), LIT (0x5.3ed1f6801e8acp-140), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 - 0x2p+64 i", LIT (0x0p+0), LIT (-0x2p+64), { LIT (0xf.fb701e22987f8p-4), LIT (0xc.143e153b07018p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987f8p-4), LIT (0xc.143e153b0702p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987f8p-4), LIT (0xc.143e153b07018p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22988p-4), LIT (0xc.143e153b0702p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x2.1e19e0c9bab24p+72 i", LIT (0x0p+0), LIT (0x2.1e19e0c9bab24p+72), { LIT (0x8.5f167780e4798p-4), LIT (-0xd.a29d5bb5f9ccp-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e47ap-4), LIT (-0xd.a29d5bb5f9cb8p-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e4798p-4), LIT (-0xd.a29d5bb5f9cb8p-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e47ap-4), LIT (-0xd.a29d5bb5f9cb8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x2.1e19e4p+72 i", LIT (0x0p+0), LIT (0x2.1e19e4p+72), { LIT (0xf.431dd7a36cf3p-4), LIT (-0x4.cd7e86c4077cp-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf38p-4), LIT (-0x4.cd7e86c4077cp-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf3p-4), LIT (-0x4.cd7e86c4077bcp-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf38p-4), LIT (-0x4.cd7e86c4077bcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x2.1e19ep+72 i", LIT (0x0p+0), LIT (0x2.1e19ep+72), { LIT (0xa.dd6f6bacd206p-4), LIT (-0xb.becc47ab1b8c8p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd2068p-4), LIT (-0xb.becc47ab1b8c8p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd206p-4), LIT (-0xb.becc47ab1b8cp-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd2068p-4), LIT (-0xb.becc47ab1b8cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x2p+64 i", LIT (0x0p+0), LIT (0x2p+64), { LIT (0xf.fb701e22987f8p-4), LIT (-0xc.143e153b0702p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987f8p-4), LIT (-0xc.143e153b0702p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987f8p-4), LIT (-0xc.143e153b07018p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22988p-4), LIT (-0xc.143e153b07018p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x8p+1020 i", LIT (0x0p+0), LIT (0x8p+1020), { LIT (-0xd.38cf9361195f8p-4), LIT (0x9.0292465edbaf8p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f8p-4), LIT (0x9.0292465edbbp-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195fp-4), LIT (0x9.0292465edbaf8p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195fp-4), LIT (0x9.0292465edbbp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0xf.ffffffffffff8p+1020 i", LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), { LIT (-0xf.fff31767d5bbp-4), LIT (0x1.452fc98b34e96p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba8p-4), LIT (0x1.452fc98b34e97p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba8p-4), LIT (0x1.452fc98b34e96p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba8p-4), LIT (0x1.452fc98b34e97p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0xf.fffffp+124 i", LIT (0x0p+0), LIT (0xf.fffffp+124), { LIT (0xd.a5f963cdefe68p-4), LIT (-0x8.599b32844abbp-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe7p-4), LIT (-0x8.599b32844aba8p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe68p-4), LIT (-0x8.599b32844aba8p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe7p-4), LIT (-0x8.599b32844aba8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.f4p+8 + 0x8p+1020 i", LIT (0x1.f4p+8), LIT (0x8p+1020), { LIT (-0x2.1a57a00f46ca2p+720), LIT (0x1.6eda2234d2fb7p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46cap+720), LIT (0x1.6eda2234d2fb8p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46cap+720), LIT (0x1.6eda2234d2fb7p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46cap+720), LIT (0x1.6eda2234d2fb8p+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.f4p+8 + 0xf.fffffp+124 i", LIT (0x1.f4p+8), LIT (0xf.fffffp+124), { LIT (0x2.2bb44f145617ep+720), LIT (-0x1.53fa90b97c5f4p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145618p+720), LIT (-0x1.53fa90b97c5f3p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617ep+720), LIT (-0x1.53fa90b97c5f3p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145618p+720), LIT (-0x1.53fa90b97c5f3p+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0 - 0x4p-1024 i", LIT (0x1p+0), LIT (-0x4p-1024), { LIT (0x2.b7e151628aed2p+0), LIT (-0xa.df85458a2bb5p-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (-0xa.df85458a2bb48p-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (-0xa.df85458a2bb48p-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed4p+0), LIT (-0xa.df85458a2bb48p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0 - 0x4p-128 i", LIT (0x1p+0), LIT (-0x4p-128), { LIT (0x2.b7e151628aed2p+0), LIT (-0xa.df85458a2bb5p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (-0xa.df85458a2bb48p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (-0xa.df85458a2bb48p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed4p+0), LIT (-0xa.df85458a2bb48p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0 - 0x8p-972 i", LIT (0x1p+0), LIT (-0x8p-972), { LIT (0x2.b7e151628aed2p+0), LIT (-0x1.5bf0a8b14576ap-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (-0x1.5bf0a8b145769p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (-0x1.5bf0a8b145769p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed4p+0), LIT (-0x1.5bf0a8b145769p-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0 + 0x4p-1024 i", LIT (0x1p+0), LIT (0x4p-1024), { LIT (0x2.b7e151628aed2p+0), LIT (0xa.df85458a2bb48p-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (0xa.df85458a2bb48p-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (0xa.df85458a2bb48p-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed4p+0), LIT (0xa.df85458a2bb5p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0 + 0x4p-128 i", LIT (0x1p+0), LIT (0x4p-128), { LIT (0x2.b7e151628aed2p+0), LIT (0xa.df85458a2bb48p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (0xa.df85458a2bb48p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (0xa.df85458a2bb48p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed4p+0), LIT (0xa.df85458a2bb5p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0 + 0x8p-972 i", LIT (0x1p+0), LIT (0x8p-972), { LIT (0x2.b7e151628aed2p+0), LIT (0x1.5bf0a8b145769p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (0x1.5bf0a8b145769p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2p+0), LIT (0x1.5bf0a8b145769p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed4p+0), LIT (0x1.5bf0a8b14576ap-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5c9p+12 + 0xcp-4 i", LIT (0x2.c5c9p+12), LIT (0xcp-4), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x2.c5dp+8 + 0xcp-4 i", LIT (0x2.c5dp+8), LIT (0xcp-4), { LIT (0xc.0f9cc448d42c8p+1020), LIT (0xb.3c68a413f446p+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c8p+1020), LIT (0xb.3c68a413f4468p+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c8p+1020), LIT (0xb.3c68a413f446p+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42dp+1020), LIT (0xb.3c68a413f4468p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x3.2p+4 + 0x8p+124 i", LIT (0x3.2p+4), LIT (0x8p+124), { LIT (0xd.bc4832122ae98p+68), LIT (0xa.f35fc6babe7f8p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122aeap+68), LIT (0xa.f35fc6babe8p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae98p+68), LIT (0xa.f35fc6babe7f8p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122aeap+68), LIT (0xa.f35fc6babe8p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 - 0x4p-1076 i", LIT (0x4p-1024), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000001p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 - 0x8p-152 i", LIT (0x4p-1024), LIT (-0x8p-152), { LIT (0xf.ffffffffffff8p-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000001p+0), LIT (0x8p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0xf.ffffffffffff8p-4), LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 - 0x4p-1076 i", LIT (0x4p-128), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000001p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 - 0x8p-152 i", LIT (0x4p-128), LIT (-0x8p-152), { LIT (0x1p+0), LIT (-0x8.0000000000008p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), LIT (-0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000001p+0), LIT (0x8p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000001p+0), LIT (0x8.0000000000008p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5.8cap+12 + +0 i", LIT (0x5.8cap+12), LIT (0x0p+0), { LIT (0xf.ffffffffffff8p+1020), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x5.8cap+12 + 0x4p-1076 i", LIT (0x5.8cap+12), LIT (0x4p-1076), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x5.8cap+12 + 0x8p-152 i", LIT (0x5.8cap+12), LIT (0x8p-152), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x5.8cp+4 + 0xcp-4 i", LIT (0x5.8cp+4), LIT (0xcp-4), { LIT (0xc.0783a6d3e5c3p+124), LIT (0xb.34dd5592f15a8p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3p+124), LIT (0xb.34dd5592f15a8p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3p+124), LIT (0xb.34dd5592f15a8p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c38p+124), LIT (0xb.34dd5592f15bp+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5.ap+8 + +0 i", LIT (0x5.ap+8), LIT (0x0p+0), { LIT (0xf.ffffffffffff8p+1020), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x5.ap+8 + 0x4p-1076 i", LIT (0x5.ap+8), LIT (0x4p-1076), { LIT (0xf.ffffffffffff8p+1020), LIT (0xb.2a22d4a7d093p+1000), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0xb.2a22d4a7d0938p+1000), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xb.2a22d4a7d093p+1000), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0xb.2a22d4a7d0938p+1000), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x5.ap+8 + 0x8p-152 i", LIT (0x5.ap+8), LIT (0x8p-152), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x5p+4 - 0x4p-1076 i", LIT (0x5p+4), LIT (-0x4p-1076), { LIT (0xa.abbcdcc279f58p+112), LIT (-0x2.aaef37309e7d8p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (-0x2.aaef37309e7d6p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (-0x2.aaef37309e7d6p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f6p+112), LIT (-0x2.aaef37309e7d6p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5p+4 - 0x8p-152 i", LIT (0x5p+4), LIT (-0x8p-152), { LIT (0xa.abbcdcc279f58p+112), LIT (-0x5.55de6e613cfbp-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (-0x5.55de6e613cfacp-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (-0x5.55de6e613cfacp-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f6p+112), LIT (-0x5.55de6e613cfacp-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5p+4 + 0x4p-1076 i", LIT (0x5p+4), LIT (0x4p-1076), { LIT (0xa.abbcdcc279f58p+112), LIT (0x2.aaef37309e7d6p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (0x2.aaef37309e7d6p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (0x2.aaef37309e7d6p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f6p+112), LIT (0x2.aaef37309e7d8p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x5p+4 + 0x8p-152 i", LIT (0x5p+4), LIT (0x8p-152), { LIT (0xa.abbcdcc279f58p+112), LIT (0x5.55de6e613cfacp-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (0x5.55de6e613cfacp-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f58p+112), LIT (0x5.55de6e613cfacp-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f6p+112), LIT (0x5.55de6e613cfbp-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 - 0x4p-1076 i", LIT (0x8p-972), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000001p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 - 0x8p-152 i", LIT (0x8p-972), LIT (-0x8p-152), { LIT (0xf.ffffffffffff8p-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000001p+0), LIT (0x8p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0xf.ffffffffffff8p-4), LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-4), LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.4p+4 + 0x8p-152 i", LIT (0xb.4p+4), LIT (0x8p-152), { LIT (0xc.dcd1958ec4428p+256), LIT (0x6.6e68cac762214p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec4428p+256), LIT (0x6.6e68cac762214p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec4428p+256), LIT (0x6.6e68cac762214p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec443p+256), LIT (0x6.6e68cac762218p+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0xa.ae3bbed44ba9p-4), LIT (0x2.024dda939ed8cp+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba98p-4), LIT (0x2.024dda939ed8ep+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9p-4), LIT (0x2.024dda939ed8cp+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba98p-4), LIT (0x2.024dda939ed8ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16 - 0x4p-1024 i", LIT (0xf.424p+16), LIT (-0x4p-1024), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16 - 0x4p-128 i", LIT (0xf.424p+16), LIT (-0x4p-128), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16 - 0x8p-972 i", LIT (0xf.424p+16), LIT (-0x8p-972), { LIT (0xf.ffffffffffff8p+1020), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16 + +0 i", LIT (0xf.424p+16), LIT (0x0p+0), { LIT (0xf.ffffffffffff8p+1020), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16 + 0x4p-1024 i", LIT (0xf.424p+16), LIT (0x4p-1024), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16 + 0x4p-128 i", LIT (0xf.424p+16), LIT (0x4p-128), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16 + 0x8p-972 i", LIT (0xf.424p+16), LIT (0x8p-972), { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffff8p+1020), LIT (0xf.ffffffffffff8p+1020), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.71p+12 + 0xf.ffffffffffff8p+1020 i", LIT (-0x2.71p+12), LIT (0xf.ffffffffffff8p+1020), { LIT (-0x4p-1076), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.71p+12 + 0xf.ffffffffffffbffffffffffffcp+1020 i", LIT (-0x2.71p+12), LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x4p-1076), LIT (-0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.71p+12 + 0xf.fffffp+124 i", LIT (-0x2.71p+12), LIT (0xf.fffffp+124), { LIT (0x0p+0), LIT (-0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.c6ap+12 + 0xcp-4 i", LIT (-0x2.c6ap+12), LIT (0xcp-4), { LIT (0x0p+0), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.dp+8 + 0xcp-4 i", LIT (-0x2.dp+8), LIT (0xcp-4), { LIT (0x1.c078b9f14p-1040), LIT (0x1.a1cb672ccp-1040), UNDERFLOW_EXCEPTION }, { LIT (0x1.c078b9f18p-1040), LIT (0x1.a1cb672dp-1040), UNDERFLOW_EXCEPTION }, { LIT (0x1.c078b9f14p-1040), LIT (0x1.a1cb672ccp-1040), UNDERFLOW_EXCEPTION }, { LIT (0x1.c078b9f18p-1040), LIT (0x1.a1cb672dp-1040), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x2.24c92bfe91963d02be8ecb5379p-4), LIT (-0x4.e3a3eebe631d441ee01e4010f4p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d02be8ecb5379p-4), LIT (-0x4.e3a3eebe631d441ee01e4010f2p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d02be8ecb5378p-4), LIT (-0x4.e3a3eebe631d441ee01e4010f2p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d02be8ecb5378p-4), LIT (-0x4.e3a3eebe631d441ee01e4010f2p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.fp+4 + 0xcp-4 i", LIT (-0x5.fp+4), LIT (0xcp-4), { LIT (0x5.a16b1470bfb7dfdbbfbeddb71p-140), LIT (0x5.3ed1f6801e8aae3c0059585efp-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfdbbfbeddb71p-140), LIT (0x5.3ed1f6801e8aae3c0059585ef2p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfdbbfbeddb71p-140), LIT (0x5.3ed1f6801e8aae3c0059585efp-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfdbbfbeddb712p-140), LIT (0x5.3ed1f6801e8aae3c0059585ef2p-140), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 - 0x2p+64 i", LIT (0x0p+0), LIT (-0x2p+64), { LIT (0xf.fb701e22987fbe68852ee2bc88p-4), LIT (0xc.143e153b0701e800f9b8a47b74p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc88p-4), LIT (0xc.143e153b0701e800f9b8a47b74p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc88p-4), LIT (0xc.143e153b0701e800f9b8a47b74p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc8cp-4), LIT (0xc.143e153b0701e800f9b8a47b78p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x2.1e19e0c9bab24p+72 i", LIT (0x0p+0), LIT (0x2.1e19e0c9bab24p+72), { LIT (0x8.5f167780e479c9a5c86ffce76p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc994p-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9a5c86ffce76p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc99p-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9a5c86ffce76p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc99p-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9a5c86ffce764p-4), LIT (-0xd.a29d5bb5f9cb87d14de41dc99p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x2.1e19e4p+72 i", LIT (0x0p+0), LIT (0x2.1e19e4p+72), { LIT (0xf.431dd7a36cf37de5c74544f6b4p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d1ap-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37de5c74544f6b4p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d1ap-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37de5c74544f6b4p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d18p-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37de5c74544f6b8p-4), LIT (-0x4.cd7e86c4077bf0debc87d70d18p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x2.1e19ep+72 i", LIT (0x0p+0), LIT (0x2.1e19ep+72), { LIT (0xa.dd6f6bacd20654c1404f52cdep-4), LIT (-0xb.becc47ab1b8c70793712c4ff2cp-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654c1404f52cdep-4), LIT (-0xb.becc47ab1b8c70793712c4ff2cp-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654c1404f52cdep-4), LIT (-0xb.becc47ab1b8c70793712c4ff28p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654c1404f52cde4p-4), LIT (-0xb.becc47ab1b8c70793712c4ff28p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x2p+64 i", LIT (0x0p+0), LIT (0x2p+64), { LIT (0xf.fb701e22987fbe68852ee2bc88p-4), LIT (-0xc.143e153b0701e800f9b8a47b78p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc88p-4), LIT (-0xc.143e153b0701e800f9b8a47b74p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc88p-4), LIT (-0xc.143e153b0701e800f9b8a47b74p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe68852ee2bc8cp-4), LIT (-0xc.143e153b0701e800f9b8a47b74p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x8p+1020 i", LIT (0x0p+0), LIT (0x8p+1020), { LIT (-0xd.38cf9361195f50b10fac29dd94p-4), LIT (0x9.0292465edbaff2d2e64a2845e4p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50b10fac29dd9p-4), LIT (0x9.0292465edbaff2d2e64a2845e4p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50b10fac29dd9p-4), LIT (0x9.0292465edbaff2d2e64a2845e4p-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50b10fac29dd9p-4), LIT (0x9.0292465edbaff2d2e64a2845e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0xf.ffffffffffff8p+1020 i", LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), { LIT (-0xf.fff31767d5ba9e038d934070f4p-4), LIT (0x1.452fc98b34e96b61139b09a7c8p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9e038d934070fp-4), LIT (0x1.452fc98b34e96b61139b09a7c88p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9e038d934070fp-4), LIT (0x1.452fc98b34e96b61139b09a7c8p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9e038d934070fp-4), LIT (0x1.452fc98b34e96b61139b09a7c88p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0xf.ffffffffffffbffffffffffffcp+1020 i", LIT (0x0p+0), LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x5.b773d971a848e75c230605526ap-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.b773d971a848e75c230605526ap-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.b773d971a848e75c2306055268p-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fbcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.b773d971a848e75c2306055268p-4), LIT (-0xe.f1a3e1dc468a921dddb4e37fbcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0xf.fffffp+124 i", LIT (0x0p+0), LIT (0xf.fffffp+124), { LIT (0xd.a5f963cdefe6d529f6b6009fbp-4), LIT (-0x8.599b32844aba906cee446be04cp-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d529f6b6009fb4p-4), LIT (-0x8.599b32844aba906cee446be048p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d529f6b6009fbp-4), LIT (-0x8.599b32844aba906cee446be048p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d529f6b6009fb4p-4), LIT (-0x8.599b32844aba906cee446be048p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.f4p+8 + 0x8p+1020 i", LIT (0x1.f4p+8), LIT (0x8p+1020), { LIT (-0x2.1a57a00f46ca0104a4a8debe28p+720), LIT (0x1.6eda2234d2fb783c9b2dfe3636p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104a4a8debe27p+720), LIT (0x1.6eda2234d2fb783c9b2dfe36368p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104a4a8debe27p+720), LIT (0x1.6eda2234d2fb783c9b2dfe3636p+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104a4a8debe27p+720), LIT (0x1.6eda2234d2fb783c9b2dfe36368p+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.f4p+8 + 0xf.fffffp+124 i", LIT (0x1.f4p+8), LIT (0xf.fffffp+124), { LIT (0x2.2bb44f145617f434b0b6dacfc6p+720), LIT (-0x1.53fa90b97c5f314384c5dcbe458p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434b0b6dacfc6p+720), LIT (-0x1.53fa90b97c5f314384c5dcbe458p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434b0b6dacfc6p+720), LIT (-0x1.53fa90b97c5f314384c5dcbe45p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434b0b6dacfc7p+720), LIT (-0x1.53fa90b97c5f314384c5dcbe45p+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0 - 0x4p-1024 i", LIT (0x1p+0), LIT (-0x4p-1024), { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (-0xa.df85458a2bb4cp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (-0xa.df85458a2bb4cp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (-0xa.df85458a2bb48p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (-0xa.df85458a2bb48p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0 - 0x4p-128 i", LIT (0x1p+0), LIT (-0x4p-128), { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (-0xa.df85458a2bb4a9aafdc5620274p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (-0xa.df85458a2bb4a9aafdc5620274p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (-0xa.df85458a2bb4a9aafdc562027p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (-0xa.df85458a2bb4a9aafdc562027p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0 - 0x8p-972 i", LIT (0x1p+0), LIT (-0x8p-972), { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (-0x1.5bf0a8b1457695355fb8ac404e8p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (-0x1.5bf0a8b1457695355fb8ac404e8p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (-0x1.5bf0a8b1457695355fb8ac404ep-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (-0x1.5bf0a8b1457695355fb8ac404ep-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0 + 0x4p-1024 i", LIT (0x1p+0), LIT (0x4p-1024), { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (0xa.df85458a2bb48p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (0xa.df85458a2bb4cp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (0xa.df85458a2bb48p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (0xa.df85458a2bb4cp-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0 + 0x4p-128 i", LIT (0x1p+0), LIT (0x4p-128), { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (0xa.df85458a2bb4a9aafdc562027p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (0xa.df85458a2bb4a9aafdc5620274p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (0xa.df85458a2bb4a9aafdc562027p-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (0xa.df85458a2bb4a9aafdc5620274p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0 + 0x8p-972 i", LIT (0x1p+0), LIT (0x8p-972), { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (0x1.5bf0a8b1457695355fb8ac404ep-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (0x1.5bf0a8b1457695355fb8ac404e8p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809cp+0), LIT (0x1.5bf0a8b1457695355fb8ac404ep-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6abf7158809dp+0), LIT (0x1.5bf0a8b1457695355fb8ac404e8p-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5c9p+12 + 0xcp-4 i", LIT (0x2.c5c9p+12), LIT (0xcp-4), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.c5dp+8 + 0xcp-4 i", LIT (0x2.c5dp+8), LIT (0xcp-4), { LIT (0xc.0f9cc448d42c9e187ae50ff49cp+1020), LIT (0xb.3c68a413f4464ce19f9dc01a8cp+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e187ae50ff4ap+1020), LIT (0xb.3c68a413f4464ce19f9dc01a8cp+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e187ae50ff49cp+1020), LIT (0xb.3c68a413f4464ce19f9dc01a8cp+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e187ae50ff4ap+1020), LIT (0xb.3c68a413f4464ce19f9dc01a9p+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x3.2p+4 + 0x8p+124 i", LIT (0x3.2p+4), LIT (0x8p+124), { LIT (0xd.bc4832122ae9c442e6aea32284p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a4p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c442e6aea32284p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a8p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c442e6aea32284p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a4p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c442e6aea32288p+68), LIT (0xa.f35fc6babe7fd6fb2acbde63a8p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 - 0x4p-1076 i", LIT (0x4p-1024), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.000000000000000000000000008p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 - 0x8p-152 i", LIT (0x4p-1024), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.000000000000000000000000008p+0), LIT (0x8p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 - 0x4p-1076 i", LIT (0x4p-128), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.000000000000000000000000008p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 - 0x8p-152 i", LIT (0x4p-128), LIT (-0x8p-152), { LIT (0x1p+0), LIT (-0x8.00000000000000000000000004p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), LIT (-0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.000000000000000000000000008p+0), LIT (0x8p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.000000000000000000000000008p+0), LIT (0x8.00000000000000000000000004p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.8cap+12 + +0 i", LIT (0x5.8cap+12), LIT (0x0p+0), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.8cap+12 + 0x4p-1076 i", LIT (0x5.8cap+12), LIT (0x4p-1076), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.8cap+12 + 0x8p-152 i", LIT (0x5.8cap+12), LIT (0x8p-152), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.8cp+4 + 0xcp-4 i", LIT (0x5.8cp+4), LIT (0xcp-4), { LIT (0xc.0783a6d3e5c3237fe2c102f4b8p+124), LIT (0xb.34dd5592f15a8d637411b4ac54p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237fe2c102f4bcp+124), LIT (0xb.34dd5592f15a8d637411b4ac58p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237fe2c102f4b8p+124), LIT (0xb.34dd5592f15a8d637411b4ac54p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237fe2c102f4bcp+124), LIT (0xb.34dd5592f15a8d637411b4ac58p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.ap+8 + +0 i", LIT (0x5.ap+8), LIT (0x0p+0), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.ap+8 + 0x4p-1076 i", LIT (0x5.ap+8), LIT (0x4p-1076), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xb.2a22d4a7d0934623f733dc45d8p+1000), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0xb.2a22d4a7d0934623f733dc45dcp+1000), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xb.2a22d4a7d0934623f733dc45d8p+1000), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0xb.2a22d4a7d0934623f733dc45dcp+1000), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x5.ap+8 + 0x8p-152 i", LIT (0x5.ap+8), LIT (0x8p-152), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x5p+4 - 0x4p-1076 i", LIT (0x5p+4), LIT (-0x4p-1076), { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (-0x2.aaef37309e7d67914a076951c5p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (-0x2.aaef37309e7d67914a076951c5p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (-0x2.aaef37309e7d67914a076951c4p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (-0x2.aaef37309e7d67914a076951c4p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5p+4 - 0x8p-152 i", LIT (0x5p+4), LIT (-0x8p-152), { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (-0x5.55de6e613cfacf22940ed2a38ap-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (-0x5.55de6e613cfacf22940ed2a38ap-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (-0x5.55de6e613cfacf22940ed2a388p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (-0x5.55de6e613cfacf22940ed2a388p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5p+4 + 0x4p-1076 i", LIT (0x5p+4), LIT (0x4p-1076), { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (0x2.aaef37309e7d67914a076951c4p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (0x2.aaef37309e7d67914a076951c5p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (0x2.aaef37309e7d67914a076951c4p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (0x2.aaef37309e7d67914a076951c5p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x5p+4 + 0x8p-152 i", LIT (0x5p+4), LIT (0x8p-152), { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (0x5.55de6e613cfacf22940ed2a388p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (0x5.55de6e613cfacf22940ed2a38ap-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da5471p+112), LIT (0x5.55de6e613cfacf22940ed2a388p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e45281da54714p+112), LIT (0x5.55de6e613cfacf22940ed2a38ap-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 - 0x4p-1076 i", LIT (0x8p-972), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x8p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.000000000000000000000000008p+0), LIT (-0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 - 0x8p-152 i", LIT (0x8p-972), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x1.000000000000000000000000008p+0), LIT (0x8p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-4), LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.4p+4 + 0x8p-152 i", LIT (0xb.4p+4), LIT (0x8p-152), { LIT (0xc.dcd1958ec442a6e599f65fac78p+256), LIT (0x6.6e68cac762215372ccfb2fd63cp+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6e599f65fac78p+256), LIT (0x6.6e68cac762215372ccfb2fd63cp+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6e599f65fac78p+256), LIT (0x6.6e68cac762215372ccfb2fd63cp+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6e599f65fac7cp+256), LIT (0x6.6e68cac762215372ccfb2fd63ep+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0xa.ae3bbed44ba9735d1448d23148p-4), LIT (0x2.024dda939ed8dc96880c3ee758p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735d1448d2314cp-4), LIT (0x2.024dda939ed8dc96880c3ee759p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735d1448d23148p-4), LIT (0x2.024dda939ed8dc96880c3ee758p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735d1448d2314cp-4), LIT (0x2.024dda939ed8dc96880c3ee759p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16 - 0x4p-1024 i", LIT (0xf.424p+16), LIT (-0x4p-1024), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16 - 0x4p-128 i", LIT (0xf.424p+16), LIT (-0x4p-128), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16 - 0x8p-972 i", LIT (0xf.424p+16), LIT (-0x8p-972), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), minus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16 + +0 i", LIT (0xf.424p+16), LIT (0x0p+0), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16 + 0x4p-1024 i", LIT (0xf.424p+16), LIT (0x4p-1024), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16 + 0x4p-128 i", LIT (0xf.424p+16), LIT (0x4p-128), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16 + 0x8p-972 i", LIT (0xf.424p+16), LIT (0x8p-972), { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.ffffffffffffbffffffffffffcp+1020), LIT (0xf.ffffffffffffbffffffffffffcp+1020), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.71p+12 + 0x8p+16380 i", LIT (-0x2.71p+12), LIT (0x8p+16380), { LIT (0x1.e8166e7f3558751cp-14428), LIT (0xc.e535876597146d4p-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751cp-14428), LIT (0xc.e535876597146d4p-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751cp-14428), LIT (0xc.e535876597146d4p-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751ep-14428), LIT (0xc.e535876597146d5p-14432), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.71p+12 + 0xf.ffffffffffff8p+1020 i", LIT (-0x2.71p+12), LIT (0xf.ffffffffffff8p+1020), { LIT (-0x2.11e61ef928e7d0fp-14428), LIT (0x2.a11e2ecfaecac19p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0fp-14428), LIT (0x2.a11e2ecfaecac194p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0ecp-14428), LIT (0x2.a11e2ecfaecac19p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0ecp-14428), LIT (0x2.a11e2ecfaecac194p-14436), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.71p+12 + 0xf.fffffp+124 i", LIT (-0x2.71p+12), LIT (0xf.fffffp+124), { LIT (0x1.c4053e6f86ae06fap-14428), LIT (-0x1.148b929412b0629cp-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fap-14428), LIT (-0x1.148b929412b0629cp-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fap-14428), LIT (-0x1.148b929412b0629ap-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fcp-14428), LIT (-0x1.148b929412b0629ap-14428), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.c6ap+12 + 0xcp-4 i", LIT (-0x2.c6ap+12), LIT (0xcp-4), { LIT (0x1.13a6153b6b8p-16404), LIT (0x1.00cb1cf14f8p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6cp-16404), LIT (0x1.00cb1cf14f8p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6b8p-16404), LIT (0x1.00cb1cf14f8p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6cp-16404), LIT (0x1.00cb1cf15p-16404), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.dp+8 + 0xcp-4 i", LIT (-0x2.dp+8), LIT (0xcp-4), { LIT (0x1.c078b9f17de70502p-1040), LIT (0x1.a1cb672cfaaa50ecp-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de70504p-1040), LIT (0x1.a1cb672cfaaa50eep-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de70502p-1040), LIT (0x1.a1cb672cfaaa50ecp-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de70504p-1040), LIT (0x1.a1cb672cfaaa50eep-1040), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x2.24c92bfe91963d04p-4), LIT (-0x4.e3a3eebe631d442p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d04p-4), LIT (-0x4.e3a3eebe631d442p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963dp-4), LIT (-0x4.e3a3eebe631d4418p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963dp-4), LIT (-0x4.e3a3eebe631d4418p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.fp+4 + 0xcp-4 i", LIT (-0x5.fp+4), LIT (0xcp-4), { LIT (0x5.a16b1470bfb7dfd8p-140), LIT (0x5.3ed1f6801e8aae38p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfd8p-140), LIT (0x5.3ed1f6801e8aae4p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfd8p-140), LIT (0x5.3ed1f6801e8aae38p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfep-140), LIT (0x5.3ed1f6801e8aae4p-140), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 - 0x2p+64 i", LIT (0x0p+0), LIT (-0x2p+64), { LIT (0xf.fb701e22987fbe6p-4), LIT (0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe6p-4), LIT (0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (0xc.143e153b0701e81p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x2.1e19e0c9bab24p+72 i", LIT (0x0p+0), LIT (0x2.1e19e0c9bab24p+72), { LIT (0x8.5f167780e479c9ap-4), LIT (-0xd.a29d5bb5f9cb87ep-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9ap-4), LIT (-0xd.a29d5bb5f9cb87dp-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9ap-4), LIT (-0xd.a29d5bb5f9cb87dp-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9bp-4), LIT (-0xd.a29d5bb5f9cb87dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x2.1e19e4p+72 i", LIT (0x0p+0), LIT (0x2.1e19e4p+72), { LIT (0xf.431dd7a36cf37dep-4), LIT (-0x4.cd7e86c4077bf0ep-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37dep-4), LIT (-0x4.cd7e86c4077bf0ep-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37dep-4), LIT (-0x4.cd7e86c4077bf0d8p-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37dfp-4), LIT (-0x4.cd7e86c4077bf0d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x2.1e19ep+72 i", LIT (0x0p+0), LIT (0x2.1e19ep+72), { LIT (0xa.dd6f6bacd20654cp-4), LIT (-0xb.becc47ab1b8c708p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654cp-4), LIT (-0xb.becc47ab1b8c708p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654cp-4), LIT (-0xb.becc47ab1b8c707p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654dp-4), LIT (-0xb.becc47ab1b8c707p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x2p+64 i", LIT (0x0p+0), LIT (0x2p+64), { LIT (0xf.fb701e22987fbe6p-4), LIT (-0xc.143e153b0701e81p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (-0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe6p-4), LIT (-0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (-0xc.143e153b0701e8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x8p+1020 i", LIT (0x0p+0), LIT (0x8p+1020), { LIT (-0xd.38cf9361195f50cp-4), LIT (0x9.0292465edbaff2dp-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50bp-4), LIT (0x9.0292465edbaff2dp-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50bp-4), LIT (0x9.0292465edbaff2dp-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50bp-4), LIT (0x9.0292465edbaff2ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x8p+16380 i", LIT (0x0p+0), LIT (0x8p+16380), { LIT (0xe.bcc2fc82ae39ebfp-4), LIT (0x6.3ad4b2136cc68818p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ecp-4), LIT (0x6.3ad4b2136cc6882p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ebfp-4), LIT (0x6.3ad4b2136cc68818p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ecp-4), LIT (0x6.3ad4b2136cc6882p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0xf.ffffffffffff8p+1020 i", LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), { LIT (-0xf.fff31767d5ba9e1p-4), LIT (0x1.452fc98b34e96b6p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9ep-4), LIT (0x1.452fc98b34e96b62p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9ep-4), LIT (0x1.452fc98b34e96b6p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9ep-4), LIT (0x1.452fc98b34e96b62p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0xf.fffffp+124 i", LIT (0x0p+0), LIT (0xf.fffffp+124), { LIT (0xd.a5f963cdefe6d52p-4), LIT (-0x8.599b32844aba907p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d53p-4), LIT (-0x8.599b32844aba907p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d52p-4), LIT (-0x8.599b32844aba906p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d53p-4), LIT (-0x8.599b32844aba906p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.f4p+8 + 0x8p+1020 i", LIT (0x1.f4p+8), LIT (0x8p+1020), { LIT (-0x2.1a57a00f46ca0108p+720), LIT (0x1.6eda2234d2fb783cp+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104p+720), LIT (0x1.6eda2234d2fb783cp+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104p+720), LIT (0x1.6eda2234d2fb783cp+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104p+720), LIT (0x1.6eda2234d2fb783ep+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.f4p+8 + 0xf.fffffp+124 i", LIT (0x1.f4p+8), LIT (0xf.fffffp+124), { LIT (0x2.2bb44f145617f434p+720), LIT (-0x1.53fa90b97c5f3144p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434p+720), LIT (-0x1.53fa90b97c5f3144p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434p+720), LIT (-0x1.53fa90b97c5f3142p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f438p+720), LIT (-0x1.53fa90b97c5f3142p+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 - 0x2p-16384 i", LIT (0x1p+0), LIT (-0x2p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 - 0x4p-1024 i", LIT (0x1p+0), LIT (-0x4p-1024), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 - 0x4p-128 i", LIT (0x1p+0), LIT (-0x4p-128), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 - 0x4p-16384 i", LIT (0x1p+0), LIT (-0x4p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 - 0x8p-972 i", LIT (0x1p+0), LIT (-0x8p-972), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 + 0x2p-16384 i", LIT (0x1p+0), LIT (0x2p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 + 0x4p-1024 i", LIT (0x1p+0), LIT (0x4p-1024), { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 + 0x4p-128 i", LIT (0x1p+0), LIT (0x4p-128), { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 + 0x4p-16384 i", LIT (0x1p+0), LIT (0x4p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 + 0x8p-972 i", LIT (0x1p+0), LIT (0x8p-972), { LIT (0x2.b7e151628aed2a68p+0), LIT (0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5c9p+12 + 0xcp-4 i", LIT (0x2.c5c9p+12), LIT (0xcp-4), { LIT (0xc.2c7b4ebbdc07f28p+16380), LIT (0xb.574da480ee94521p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f29p+16380), LIT (0xb.574da480ee94521p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f28p+16380), LIT (0xb.574da480ee94521p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f29p+16380), LIT (0xb.574da480ee94522p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.c5dp+8 + 0xcp-4 i", LIT (0x2.c5dp+8), LIT (0xcp-4), { LIT (0xc.0f9cc448d42c9e1p+1020), LIT (0xb.3c68a413f4464cep+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e2p+1020), LIT (0xb.3c68a413f4464cep+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e1p+1020), LIT (0xb.3c68a413f4464cep+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e2p+1020), LIT (0xb.3c68a413f4464cfp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 - 0x4p-1076 i", LIT (0x2p-16384), LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 - 0x8p-152 i", LIT (0x2p-16384), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 - 0x8p-16448 i", LIT (0x2p-16384), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x1p-16444), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x4p-1076 i", LIT (0x2p-16384), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x8p-152 i", LIT (0x2p-16384), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384 + 0x8p-16448 i", LIT (0x2p-16384), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x1p-16444), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x3.2p+4 + 0x8p+124 i", LIT (0x3.2p+4), LIT (0x8p+124), { LIT (0xd.bc4832122ae9c44p+68), LIT (0xa.f35fc6babe7fd6fp+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c44p+68), LIT (0xa.f35fc6babe7fd7p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c44p+68), LIT (0xa.f35fc6babe7fd6fp+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c45p+68), LIT (0xa.f35fc6babe7fd7p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 - 0x4p-1076 i", LIT (0x4p-1024), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 - 0x8p-152 i", LIT (0x4p-1024), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 - 0x8p-16448 i", LIT (0x4p-1024), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x1p-16444), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x4.0000000000000008p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024 + 0x8p-16448 i", LIT (0x4p-1024), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x1p-16444), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 - 0x4p-1076 i", LIT (0x4p-128), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 - 0x8p-152 i", LIT (0x4p-128), LIT (-0x8p-152), { LIT (0x1p+0), LIT (-0x8.000000000000001p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 - 0x8p-16448 i", LIT (0x4p-128), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x1p-16444), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x4.0000000000000008p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x8.000000000000001p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128 + 0x8p-16448 i", LIT (0x4p-128), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x1p-16444), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 - 0x4p-1076 i", LIT (0x4p-16384), LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 - 0x8p-152 i", LIT (0x4p-16384), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 - 0x8p-16448 i", LIT (0x4p-16384), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x1p-16444), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x4p-1076 i", LIT (0x4p-16384), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x8p-152 i", LIT (0x4p-16384), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384 + 0x8p-16448 i", LIT (0x4p-16384), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x1p-16444), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x5.8cap+12 + +0 i", LIT (0x5.8cap+12), LIT (0x0p+0), { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x5.8cap+12 + 0x4p-1076 i", LIT (0x5.8cap+12), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x5.8cap+12 + 0x4p-16436 i", LIT (0x5.8cap+12), LIT (0x4p-16436), { LIT (0xf.fffffffffffffffp+16380), LIT (0x5.7ee03dfa85911cf8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x5.7ee03dfa85911dp+16356), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0x5.7ee03dfa85911cf8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x5.7ee03dfa85911dp+16356), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x5.8cap+12 + 0x8p-152 i", LIT (0x5.8cap+12), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x5.8cp+4 + 0xcp-4 i", LIT (0x5.8cp+4), LIT (0xcp-4), { LIT (0xc.0783a6d3e5c3237p+124), LIT (0xb.34dd5592f15a8d6p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3238p+124), LIT (0xb.34dd5592f15a8d6p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237p+124), LIT (0xb.34dd5592f15a8d6p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3238p+124), LIT (0xb.34dd5592f15a8d7p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5.ap+8 + +0 i", LIT (0x5.ap+8), LIT (0x0p+0), { LIT (0x2.ca88b529f424d188p+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d18cp+2076), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5.ap+8 + 0x4p-1076 i", LIT (0x5.ap+8), LIT (0x4p-1076), { LIT (0x2.ca88b529f424d188p+2076), LIT (0xb.2a22d4a7d093462p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0xb.2a22d4a7d093462p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0xb.2a22d4a7d093462p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d18cp+2076), LIT (0xb.2a22d4a7d093463p+1000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5.ap+8 + 0x8p-152 i", LIT (0x5.ap+8), LIT (0x8p-152), { LIT (0x2.ca88b529f424d188p+2076), LIT (0x1.65445a94fa1268c4p+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x1.65445a94fa1268c4p+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x1.65445a94fa1268c4p+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d18cp+2076), LIT (0x1.65445a94fa1268c6p+1928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5p+4 - 0x4p-1076 i", LIT (0x5p+4), LIT (-0x4p-1076), { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d6794p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (-0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5p+4 - 0x8p-152 i", LIT (0x5p+4), LIT (-0x8p-152), { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf28p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (-0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5p+4 - 0x8p-16448 i", LIT (0x5p+4), LIT (-0x8p-16448), { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf28p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (-0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5p+4 + 0x4p-1076 i", LIT (0x5p+4), LIT (0x4p-1076), { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (0x2.aaef37309e7d6794p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5p+4 + 0x8p-152 i", LIT (0x5p+4), LIT (0x8p-152), { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (0x5.55de6e613cfacf28p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x5p+4 + 0x8p-16448 i", LIT (0x5p+4), LIT (0x8p-16448), { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (0x5.55de6e613cfacf28p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 - 0x4p-1076 i", LIT (0x8p-972), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 - 0x8p-152 i", LIT (0x8p-972), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 - 0x8p-16448 i", LIT (0x8p-972), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0x1p-16444), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x4.0000000000000008p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972 + 0x8p-16448 i", LIT (0x8p-972), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x1p-16444), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xb.4p+4 + 0x8p-152 i", LIT (0xb.4p+4), LIT (0x8p-152), { LIT (0xc.dcd1958ec442a6ep+256), LIT (0x6.6e68cac76221537p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6ep+256), LIT (0x6.6e68cac76221537p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6ep+256), LIT (0x6.6e68cac76221537p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6fp+256), LIT (0x6.6e68cac762215378p+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0xa.ae3bbed44ba9735p-4), LIT (0x2.024dda939ed8dc94p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9736p-4), LIT (0x2.024dda939ed8dc98p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735p-4), LIT (0x2.024dda939ed8dc94p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9736p-4), LIT (0x2.024dda939ed8dc98p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 - 0x2p-16384 i", LIT (0xf.424p+16), LIT (-0x2p-16384), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 - 0x4p-1024 i", LIT (0xf.424p+16), LIT (-0x4p-1024), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 - 0x4p-128 i", LIT (0xf.424p+16), LIT (-0x4p-128), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 - 0x4p-16384 i", LIT (0xf.424p+16), LIT (-0x4p-16384), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 - 0x8p-972 i", LIT (0xf.424p+16), LIT (-0x8p-972), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 + +0 i", LIT (0xf.424p+16), LIT (0x0p+0), { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 + 0x2p-16384 i", LIT (0xf.424p+16), LIT (0x2p-16384), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 + 0x4p-1024 i", LIT (0xf.424p+16), LIT (0x4p-1024), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 + 0x4p-128 i", LIT (0xf.424p+16), LIT (0x4p-128), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 + 0x4p-16384 i", LIT (0xf.424p+16), LIT (0x4p-16384), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16 + 0x8p-972 i", LIT (0xf.424p+16), LIT (0x8p-972), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.71p+12 + 0x8p+16380 i", LIT (-0x2.71p+12), LIT (0x8p+16380), { LIT (0x1.e8166e7f3558751cp-14428), LIT (0xc.e535876597146d4p-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751cp-14428), LIT (0xc.e535876597146d4p-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751cp-14428), LIT (0xc.e535876597146d4p-14432), ERRNO_UNCHANGED }, { LIT (0x1.e8166e7f3558751ep-14428), LIT (0xc.e535876597146d5p-14432), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.71p+12 + 0xf.ffffffffffff8p+1020 i", LIT (-0x2.71p+12), LIT (0xf.ffffffffffff8p+1020), { LIT (-0x2.11e61ef928e7d0fp-14428), LIT (0x2.a11e2ecfaecac19p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0fp-14428), LIT (0x2.a11e2ecfaecac194p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0ecp-14428), LIT (0x2.a11e2ecfaecac19p-14436), ERRNO_UNCHANGED }, { LIT (-0x2.11e61ef928e7d0ecp-14428), LIT (0x2.a11e2ecfaecac194p-14436), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.71p+12 + 0xf.fffffp+124 i", LIT (-0x2.71p+12), LIT (0xf.fffffp+124), { LIT (0x1.c4053e6f86ae06fap-14428), LIT (-0x1.148b929412b0629cp-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fap-14428), LIT (-0x1.148b929412b0629cp-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fap-14428), LIT (-0x1.148b929412b0629ap-14428), ERRNO_UNCHANGED }, { LIT (0x1.c4053e6f86ae06fcp-14428), LIT (-0x1.148b929412b0629ap-14428), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.c6ap+12 + 0xcp-4 i", LIT (-0x2.c6ap+12), LIT (0xcp-4), { LIT (0x1.13a6153b6bcp-16404), LIT (0x1.00cb1cf14f8p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6bcp-16404), LIT (0x1.00cb1cf14f8p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6bcp-16404), LIT (0x1.00cb1cf14f8p-16404), UNDERFLOW_EXCEPTION }, { LIT (0x1.13a6153b6cp-16404), LIT (0x1.00cb1cf14fcp-16404), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.dp+8 + 0xcp-4 i", LIT (-0x2.dp+8), LIT (0xcp-4), { LIT (0x1.c078b9f17de70502p-1040), LIT (0x1.a1cb672cfaaa50ecp-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de70504p-1040), LIT (0x1.a1cb672cfaaa50eep-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de70502p-1040), LIT (0x1.a1cb672cfaaa50ecp-1040), ERRNO_UNCHANGED }, { LIT (0x1.c078b9f17de70504p-1040), LIT (0x1.a1cb672cfaaa50eep-1040), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p+0 - 0x3p+0 i", LIT (-0x2p+0), LIT (-0x3p+0), { LIT (-0x2.24c92bfe91963d04p-4), LIT (-0x4.e3a3eebe631d442p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963d04p-4), LIT (-0x4.e3a3eebe631d442p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963dp-4), LIT (-0x4.e3a3eebe631d4418p-8), ERRNO_UNCHANGED }, { LIT (-0x2.24c92bfe91963dp-4), LIT (-0x4.e3a3eebe631d4418p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.fp+4 + 0xcp-4 i", LIT (-0x5.fp+4), LIT (0xcp-4), { LIT (0x5.a16b1470bfb7dfd8p-140), LIT (0x5.3ed1f6801e8aae38p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfd8p-140), LIT (0x5.3ed1f6801e8aae4p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfd8p-140), LIT (0x5.3ed1f6801e8aae38p-140), ERRNO_UNCHANGED }, { LIT (0x5.a16b1470bfb7dfep-140), LIT (0x5.3ed1f6801e8aae4p-140), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 - 0x2p+64 i", LIT (0x0p+0), LIT (-0x2p+64), { LIT (0xf.fb701e22987fbe6p-4), LIT (0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe6p-4), LIT (0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (0xc.143e153b0701e81p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x2.1e19e0c9bab24p+72 i", LIT (0x0p+0), LIT (0x2.1e19e0c9bab24p+72), { LIT (0x8.5f167780e479c9ap-4), LIT (-0xd.a29d5bb5f9cb87ep-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9ap-4), LIT (-0xd.a29d5bb5f9cb87dp-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9ap-4), LIT (-0xd.a29d5bb5f9cb87dp-4), ERRNO_UNCHANGED }, { LIT (0x8.5f167780e479c9bp-4), LIT (-0xd.a29d5bb5f9cb87dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x2.1e19e4p+72 i", LIT (0x0p+0), LIT (0x2.1e19e4p+72), { LIT (0xf.431dd7a36cf37dep-4), LIT (-0x4.cd7e86c4077bf0ep-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37dep-4), LIT (-0x4.cd7e86c4077bf0ep-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37dep-4), LIT (-0x4.cd7e86c4077bf0d8p-4), ERRNO_UNCHANGED }, { LIT (0xf.431dd7a36cf37dfp-4), LIT (-0x4.cd7e86c4077bf0d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x2.1e19ep+72 i", LIT (0x0p+0), LIT (0x2.1e19ep+72), { LIT (0xa.dd6f6bacd20654cp-4), LIT (-0xb.becc47ab1b8c708p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654cp-4), LIT (-0xb.becc47ab1b8c708p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654cp-4), LIT (-0xb.becc47ab1b8c707p-4), ERRNO_UNCHANGED }, { LIT (0xa.dd6f6bacd20654dp-4), LIT (-0xb.becc47ab1b8c707p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x2p+64 i", LIT (0x0p+0), LIT (0x2p+64), { LIT (0xf.fb701e22987fbe6p-4), LIT (-0xc.143e153b0701e81p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (-0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe6p-4), LIT (-0xc.143e153b0701e8p-8), ERRNO_UNCHANGED }, { LIT (0xf.fb701e22987fbe7p-4), LIT (-0xc.143e153b0701e8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x8p+1020 i", LIT (0x0p+0), LIT (0x8p+1020), { LIT (-0xd.38cf9361195f50cp-4), LIT (0x9.0292465edbaff2dp-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50bp-4), LIT (0x9.0292465edbaff2dp-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50bp-4), LIT (0x9.0292465edbaff2dp-4), ERRNO_UNCHANGED }, { LIT (-0xd.38cf9361195f50bp-4), LIT (0x9.0292465edbaff2ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x8p+16380 i", LIT (0x0p+0), LIT (0x8p+16380), { LIT (0xe.bcc2fc82ae39ebfp-4), LIT (0x6.3ad4b2136cc68818p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ecp-4), LIT (0x6.3ad4b2136cc6882p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ebfp-4), LIT (0x6.3ad4b2136cc68818p-4), ERRNO_UNCHANGED }, { LIT (0xe.bcc2fc82ae39ecp-4), LIT (0x6.3ad4b2136cc6882p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0xf.ffffffffffff8p+1020 i", LIT (0x0p+0), LIT (0xf.ffffffffffff8p+1020), { LIT (-0xf.fff31767d5ba9e1p-4), LIT (0x1.452fc98b34e96b6p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9ep-4), LIT (0x1.452fc98b34e96b62p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9ep-4), LIT (0x1.452fc98b34e96b6p-8), ERRNO_UNCHANGED }, { LIT (-0xf.fff31767d5ba9ep-4), LIT (0x1.452fc98b34e96b62p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0xf.fffffp+124 i", LIT (0x0p+0), LIT (0xf.fffffp+124), { LIT (0xd.a5f963cdefe6d52p-4), LIT (-0x8.599b32844aba907p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d53p-4), LIT (-0x8.599b32844aba907p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d52p-4), LIT (-0x8.599b32844aba906p-4), ERRNO_UNCHANGED }, { LIT (0xd.a5f963cdefe6d53p-4), LIT (-0x8.599b32844aba906p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.f4p+8 + 0x8p+1020 i", LIT (0x1.f4p+8), LIT (0x8p+1020), { LIT (-0x2.1a57a00f46ca0108p+720), LIT (0x1.6eda2234d2fb783cp+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104p+720), LIT (0x1.6eda2234d2fb783cp+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104p+720), LIT (0x1.6eda2234d2fb783cp+720), ERRNO_UNCHANGED }, { LIT (-0x2.1a57a00f46ca0104p+720), LIT (0x1.6eda2234d2fb783ep+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.f4p+8 + 0xf.fffffp+124 i", LIT (0x1.f4p+8), LIT (0xf.fffffp+124), { LIT (0x2.2bb44f145617f434p+720), LIT (-0x1.53fa90b97c5f3144p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434p+720), LIT (-0x1.53fa90b97c5f3144p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f434p+720), LIT (-0x1.53fa90b97c5f3142p+720), ERRNO_UNCHANGED }, { LIT (0x2.2bb44f145617f438p+720), LIT (-0x1.53fa90b97c5f3142p+720), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 - 0x2p-16384 i", LIT (0x1p+0), LIT (-0x2p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 - 0x4p-1024 i", LIT (0x1p+0), LIT (-0x4p-1024), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 - 0x4p-128 i", LIT (0x1p+0), LIT (-0x4p-128), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 - 0x4p-16384 i", LIT (0x1p+0), LIT (-0x4p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 - 0x8p-972 i", LIT (0x1p+0), LIT (-0x8p-972), { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (-0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (-0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 + 0x2p-16384 i", LIT (0x1p+0), LIT (0x2p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0x5.6fc2a2c515da54dp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x5.6fc2a2c515da54d8p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 + 0x4p-1024 i", LIT (0x1p+0), LIT (0x4p-1024), { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-1024), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 + 0x4p-128 i", LIT (0x1p+0), LIT (0x4p-128), { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-128), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 + 0x4p-16384 i", LIT (0x1p+0), LIT (0x4p-16384), { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0xa.df85458a2bb4a9ap-16384), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0xa.df85458a2bb4a9bp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 + 0x8p-972 i", LIT (0x1p+0), LIT (0x8p-972), { LIT (0x2.b7e151628aed2a68p+0), LIT (0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a68p+0), LIT (0x1.5bf0a8b145769534p-968), ERRNO_UNCHANGED }, { LIT (0x2.b7e151628aed2a6cp+0), LIT (0x1.5bf0a8b145769536p-968), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5c9p+12 + 0xcp-4 i", LIT (0x2.c5c9p+12), LIT (0xcp-4), { LIT (0xc.2c7b4ebbdc07f28p+16380), LIT (0xb.574da480ee94521p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f29p+16380), LIT (0xb.574da480ee94521p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f28p+16380), LIT (0xb.574da480ee94521p+16380), ERRNO_UNCHANGED }, { LIT (0xc.2c7b4ebbdc07f29p+16380), LIT (0xb.574da480ee94522p+16380), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.c5dp+8 + 0xcp-4 i", LIT (0x2.c5dp+8), LIT (0xcp-4), { LIT (0xc.0f9cc448d42c9e1p+1020), LIT (0xb.3c68a413f4464cep+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e2p+1020), LIT (0xb.3c68a413f4464cep+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e1p+1020), LIT (0xb.3c68a413f4464cep+1020), ERRNO_UNCHANGED }, { LIT (0xc.0f9cc448d42c9e2p+1020), LIT (0xb.3c68a413f4464cfp+1020), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 - 0x4p-1076 i", LIT (0x2p-16384), LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 - 0x4p-16448 i", LIT (0x2p-16384), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 - 0x8p-152 i", LIT (0x2p-16384), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 - 0x8p-16448 i", LIT (0x2p-16384), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0xcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x4p-1076 i", LIT (0x2p-16384), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x4p-16448 i", LIT (0x2p-16384), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x8p-152 i", LIT (0x2p-16384), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384 + 0x8p-16448 i", LIT (0x2p-16384), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0xcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x3.2p+4 + 0x8p+124 i", LIT (0x3.2p+4), LIT (0x8p+124), { LIT (0xd.bc4832122ae9c44p+68), LIT (0xa.f35fc6babe7fd6fp+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c44p+68), LIT (0xa.f35fc6babe7fd7p+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c44p+68), LIT (0xa.f35fc6babe7fd6fp+68), ERRNO_UNCHANGED }, { LIT (0xd.bc4832122ae9c45p+68), LIT (0xa.f35fc6babe7fd7p+68), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 - 0x4p-1076 i", LIT (0x4p-1024), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 - 0x4p-16448 i", LIT (0x4p-1024), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 - 0x8p-152 i", LIT (0x4p-1024), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 - 0x8p-16448 i", LIT (0x4p-1024), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0xcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x4p-1076 i", LIT (0x4p-1024), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x4.0000000000000008p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x4p-16448 i", LIT (0x4p-1024), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x8p-152 i", LIT (0x4p-1024), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024 + 0x8p-16448 i", LIT (0x4p-1024), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0xcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 - 0x4p-1076 i", LIT (0x4p-128), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 - 0x4p-16448 i", LIT (0x4p-128), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 - 0x8p-152 i", LIT (0x4p-128), LIT (-0x8p-152), { LIT (0x1p+0), LIT (-0x8.000000000000001p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 - 0x8p-16448 i", LIT (0x4p-128), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0xcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x4p-1076 i", LIT (0x4p-128), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x4.0000000000000008p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x4p-16448 i", LIT (0x4p-128), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x8p-152 i", LIT (0x4p-128), LIT (0x8p-152), { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x8.000000000000001p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128 + 0x8p-16448 i", LIT (0x4p-128), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0xcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 - 0x4p-1076 i", LIT (0x4p-16384), LIT (-0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 - 0x4p-16448 i", LIT (0x4p-16384), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 - 0x8p-152 i", LIT (0x4p-16384), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 - 0x8p-16448 i", LIT (0x4p-16384), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0xcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x4p-1076 i", LIT (0x4p-16384), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x4p-16448 i", LIT (0x4p-16384), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x8p-152 i", LIT (0x4p-16384), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384 + 0x8p-16448 i", LIT (0x4p-16384), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0xcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.8cap+12 + +0 i", LIT (0x5.8cap+12), LIT (0x0p+0), { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.8cap+12 + 0x4p-1076 i", LIT (0x5.8cap+12), LIT (0x4p-1076), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.8cap+12 + 0x4p-16436 i", LIT (0x5.8cap+12), LIT (0x4p-16436), { LIT (0xf.fffffffffffffffp+16380), LIT (0x5.7ee03dfa85911cf8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x5.7ee03dfa85911dp+16356), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0x5.7ee03dfa85911cf8p+16356), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x5.7ee03dfa85911dp+16356), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.8cap+12 + 0x8p-152 i", LIT (0x5.8cap+12), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.8cp+4 + 0xcp-4 i", LIT (0x5.8cp+4), LIT (0xcp-4), { LIT (0xc.0783a6d3e5c3237p+124), LIT (0xb.34dd5592f15a8d6p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3238p+124), LIT (0xb.34dd5592f15a8d6p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3237p+124), LIT (0xb.34dd5592f15a8d6p+124), ERRNO_UNCHANGED }, { LIT (0xc.0783a6d3e5c3238p+124), LIT (0xb.34dd5592f15a8d7p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.ap+8 + +0 i", LIT (0x5.ap+8), LIT (0x0p+0), { LIT (0x2.ca88b529f424d188p+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d18cp+2076), LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.ap+8 + 0x4p-1076 i", LIT (0x5.ap+8), LIT (0x4p-1076), { LIT (0x2.ca88b529f424d188p+2076), LIT (0xb.2a22d4a7d093462p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0xb.2a22d4a7d093462p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0xb.2a22d4a7d093462p+1000), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d18cp+2076), LIT (0xb.2a22d4a7d093463p+1000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5.ap+8 + 0x8p-152 i", LIT (0x5.ap+8), LIT (0x8p-152), { LIT (0x2.ca88b529f424d188p+2076), LIT (0x1.65445a94fa1268c4p+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x1.65445a94fa1268c4p+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d188p+2076), LIT (0x1.65445a94fa1268c4p+1928), ERRNO_UNCHANGED }, { LIT (0x2.ca88b529f424d18cp+2076), LIT (0x1.65445a94fa1268c6p+1928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 - 0x4p-1076 i", LIT (0x5p+4), LIT (-0x4p-1076), { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d6794p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (-0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 - 0x4p-16448 i", LIT (0x5p+4), LIT (-0x4p-16448), { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d6794p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (-0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 - 0x8p-152 i", LIT (0x5p+4), LIT (-0x8p-152), { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf28p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (-0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 - 0x8p-16448 i", LIT (0x5p+4), LIT (-0x8p-16448), { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf28p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (-0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (-0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 + 0x4p-1076 i", LIT (0x5p+4), LIT (0x4p-1076), { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-960), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (0x2.aaef37309e7d6794p-960), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 + 0x4p-16448 i", LIT (0x5p+4), LIT (0x4p-16448), { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x2.aaef37309e7d679p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (0x2.aaef37309e7d6794p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 + 0x8p-152 i", LIT (0x5p+4), LIT (0x8p-152), { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-36), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (0x5.55de6e613cfacf28p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x5p+4 + 0x8p-16448 i", LIT (0x5p+4), LIT (0x8p-16448), { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e4p+112), LIT (0x5.55de6e613cfacf2p-16332), ERRNO_UNCHANGED }, { LIT (0xa.abbcdcc279f59e5p+112), LIT (0x5.55de6e613cfacf28p-16332), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 - 0x4p-1076 i", LIT (0x8p-972), LIT (-0x4p-1076), { LIT (0x1p+0), LIT (-0x4.0000000000000008p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 - 0x4p-16448 i", LIT (0x8p-972), LIT (-0x4p-16448), { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 - 0x8p-152 i", LIT (0x8p-972), LIT (-0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 - 0x8p-16448 i", LIT (0x8p-972), LIT (-0x8p-16448), { LIT (0x1p+0), LIT (-0xcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (-0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x4p-1076 i", LIT (0x8p-972), LIT (0x4p-1076), { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x1.0000000000000002p+0), LIT (0x4.0000000000000008p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x4p-16448 i", LIT (0x8p-972), LIT (0x4p-16448), { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x8p-152 i", LIT (0x8p-972), LIT (0x8p-152), { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-4), LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x1p+0), LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972 + 0x8p-16448 i", LIT (0x8p-972), LIT (0x8p-16448), { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1p+0), LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x1.0000000000000002p+0), LIT (0xcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.4p+4 + 0x8p-152 i", LIT (0xb.4p+4), LIT (0x8p-152), { LIT (0xc.dcd1958ec442a6ep+256), LIT (0x6.6e68cac76221537p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6ep+256), LIT (0x6.6e68cac76221537p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6ep+256), LIT (0x6.6e68cac76221537p+108), ERRNO_UNCHANGED }, { LIT (0xc.dcd1958ec442a6fp+256), LIT (0x6.6e68cac762215378p+108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0xa.ae3bbed44ba9735p-4), LIT (0x2.024dda939ed8dc94p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9736p-4), LIT (0x2.024dda939ed8dc98p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9735p-4), LIT (0x2.024dda939ed8dc94p+0), ERRNO_UNCHANGED }, { LIT (0xa.ae3bbed44ba9736p-4), LIT (0x2.024dda939ed8dc98p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 - 0x2p-16384 i", LIT (0xf.424p+16), LIT (-0x2p-16384), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 - 0x4p-1024 i", LIT (0xf.424p+16), LIT (-0x4p-1024), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 - 0x4p-128 i", LIT (0xf.424p+16), LIT (-0x4p-128), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 - 0x4p-16384 i", LIT (0xf.424p+16), LIT (-0x4p-16384), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 - 0x8p-972 i", LIT (0xf.424p+16), LIT (-0x8p-972), { LIT (0xf.fffffffffffffffp+16380), minus_infty, OVERFLOW_EXCEPTION }, { plus_infty, minus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, LIT (-0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 + +0 i", LIT (0xf.424p+16), LIT (0x0p+0), { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0x0p+0), OVERFLOW_EXCEPTION }, { plus_infty, LIT (0x0p+0), OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 + 0x2p-16384 i", LIT (0xf.424p+16), LIT (0x2p-16384), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 + 0x4p-1024 i", LIT (0xf.424p+16), LIT (0x4p-1024), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 + 0x4p-128 i", LIT (0xf.424p+16), LIT (0x4p-128), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 + 0x4p-16384 i", LIT (0xf.424p+16), LIT (0x4p-16384), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16 + 0x8p-972 i", LIT (0xf.424p+16), LIT (0x8p-972), { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION }, { LIT (0xf.fffffffffffffffp+16380), LIT (0xf.fffffffffffffffp+16380), OVERFLOW_EXCEPTION }, { plus_infty, plus_infty, OVERFLOW_EXCEPTION } },
#endif
  };

static void
cexp_test (void)
{
  ALL_RM_TEST (cexp, 0, cexp_test_data, RUN_TEST_LOOP_c_c, END_COMPLEX);
}

static void
do_test (void)
{
  cexp_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
