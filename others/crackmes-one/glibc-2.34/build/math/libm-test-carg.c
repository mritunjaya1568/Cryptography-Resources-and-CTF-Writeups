/* Test carg.
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

static const struct test_c_f_data carg_test_data[] =
  {
    /* carg (x + iy) is specified as atan2 (y, x) */

    /* carg (inf + i y) == +0 for finite y > 0.  */
    { "inf + 2.0 i", plus_infty, LIT (2.0), { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },

    /* carg (inf + i y) == -0 for finite y < 0.  */
    { "inf - 2.0 i", plus_infty, LIT (-2.0), { minus_zero, 0 }, { minus_zero, 0 }, { minus_zero, 0 }, { minus_zero, 0 } },

    /* carg(x + i inf) == pi/2 for finite x.  */
    { "10.0 + inf i", LIT (10.0), plus_infty, { lit_pi_2_d, 0 }, { lit_pi_2_d, 0 }, { lit_pi_2_d, 0 }, { lit_pi_2_d, 0 } },

    /* carg(x - i inf) == -pi/2 for finite x.  */
    { "10.0 - inf i", LIT (10.0), minus_infty, { -lit_pi_2_d, 0 }, { -lit_pi_2_d, 0 }, { -lit_pi_2_d, 0 }, { -lit_pi_2_d, 0 } },

    /* carg (-inf + i y) == +pi for finite y > 0.  */
    { "-inf + 10.0 i", minus_infty, LIT (10.0), { lit_pi, 0 }, { lit_pi, 0 }, { lit_pi, 0 }, { lit_pi, 0 } },

    /* carg (-inf + i y) == -pi for finite y < 0.  */
    { "-inf - 10.0 i", minus_infty, LIT (-10.0), { -lit_pi, 0 }, { -lit_pi, 0 }, { -lit_pi, 0 }, { -lit_pi, 0 } },

    { "inf + inf i", plus_infty, plus_infty, { lit_pi_4_d, 0 }, { lit_pi_4_d, 0 }, { lit_pi_4_d, 0 }, { lit_pi_4_d, 0 } },

    { "inf - inf i", plus_infty, minus_infty, { -lit_pi_4_d, 0 }, { -lit_pi_4_d, 0 }, { -lit_pi_4_d, 0 }, { -lit_pi_4_d, 0 } },

    { "-inf + inf i", minus_infty, plus_infty, { lit_pi_3_m_4_d, 0 }, { lit_pi_3_m_4_d, 0 }, { lit_pi_3_m_4_d, 0 }, { lit_pi_3_m_4_d, 0 } },

    { "-inf - inf i", minus_infty, minus_infty, { -lit_pi_3_m_4_d, 0 }, { -lit_pi_3_m_4_d, 0 }, { -lit_pi_3_m_4_d, 0 }, { -lit_pi_3_m_4_d, 0 } },

    { "qNaN + qNaN i", qnan_value, qnan_value, { qnan_value, 0 }, { qnan_value, 0 }, { qnan_value, 0 }, { qnan_value, 0 } },

#if (TEST_COND_binary128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d313198a2e0372p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 - 0x2p+0 i", LIT (-0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e0372p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 + 0x2p+0 i", LIT (-0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.0236b6p-20 + 0x2.a6e504p+108 i", LIT (-0x1.0236b6p-20), LIT (0x2.a6e504p+108), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.0a512ap-120 + 0xf.54681p-108 i", LIT (-0x1.0a512ap-120), LIT (0xf.54681p-108), { LIT (0x1.9220cb3a738682a53ab7ff520773p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a53ab7ff520774p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a53ab7ff520773p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a53ab7ff520774p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p+0 - 0 i", LIT (-0x2p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d313198a2e0372p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p+0 + +0 i", LIT (-0x2p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e037p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e0372p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.973cc4p+72 - 0xf.fffffp+124 i", LIT (-0x3.973cc4p+72), LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d18800c6545c53c95p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18800c6545c53c94fp+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18800c6545c53c94fp+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18800c6545c53c94fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.be0054531569p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054531569p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4657291965130fd9b80bae4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965130fd9b80bae4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965130fd9b80bae3p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965130fd9b80bae3p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.be0054p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac45eb390a6d33f541e8704aap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d33f541e8704aap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d33f541e8704a9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d33f541e8704a9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.be0058p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0058p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bd01ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bd019p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bd019p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bd019p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.9c4c8p-4 - 0xa.b4101p+20 i", LIT (-0xf.9c4c8p-4), LIT (-0xa.b4101p+20), { LIT (-0x1.921fb6b9a118c89590d474178551p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c89590d474178551p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c89590d47417855p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c89590d47417855p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 - 0x2p+0 i", LIT (0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0 + 0x2p+0 i", LIT (0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.f4755cp+0 - 0x4.29411p-4 i", LIT (0x1.f4755cp+0), LIT (-0x4.29411p-4), { LIT (-0x2.1dbac4fa4bfeb74f6140009955a8p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74f6140009955a6p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74f6140009955a6p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74f6140009955a6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.21e65p+0 + 0x5.576cf8p-4 i", LIT (0x2.21e65p+0), LIT (0x5.576cf8p-4), { LIT (0x2.7c1782a75e16b743e48c247c62c8p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b743e48c247c62cap-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b743e48c247c62c8p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b743e48c247c62cap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.f2f308p+0 + 0x4.c3841p-4 i", LIT (0x2.f2f308p+0), LIT (0x4.c3841p-4), { LIT (0x1.9c22ce44a7229d114c2b882266f9p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d114c2b882266fap-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d114c2b882266f9p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d114c2b882266fap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+0 - 0 i", LIT (0x2p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+0 + +0 i", LIT (0x2p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x3.8ff10cp+0 - 0x6.b0794p-4 i", LIT (0x3.8ff10cp+0), LIT (-0x6.b0794p-4), { LIT (-0x1.de89352a0e839633c32d65e25422p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839633c32d65e25422p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839633c32d65e25421p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839633c32d65e25421p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x7.40ac68p+0 + 0x4.251bb8p-4 i", LIT (0x7.40ac68p+0), LIT (0x4.251bb8p-4), { LIT (0x9.23e97736442d915917b21858b14p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915917b21858b148p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915917b21858b14p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915917b21858b148p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + +0 i", LIT (0x8p-152), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x4p-1076 i", LIT (0x8p-152), LIT (0x4p-1076), { LIT (0x7.fffffffffffffffffffffffffffcp-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152 + 0x8p-152 i", LIT (0x8p-152), LIT (0x8p-152), { LIT (0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80dc8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dfe20aaf55b15729cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe20aaf55b15729cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe20aaf55b15729cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe20aaf55b15729ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413ea1ce901f1f33f48p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1ce901f1f33f48p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1ce901f1f33f48p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1ce901f1f33f4ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18e8ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18e8ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18e8ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18e9p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca23d8p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92b151371ca23d8p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b42p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b42p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b42p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b44p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca23d8p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92b151371ca23d8p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d15795d5cdae5622p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae5624p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae5622p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae5624p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca23d8p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92b151371ca23d8p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c737390887085ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c737390887086p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c737390887085ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c737390887086p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca24p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92b151371ca24p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b34p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b34p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b34p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5b36p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca24p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92b151371ca24p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d15795d5cdae5614p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae5616p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae5614p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae5616p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca24p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92b151371ca24p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c7373908870852p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c7373908870852p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c7373908870852p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c7373908870854p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca2p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92b151371ca2p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55b57dc8e0f5c8ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5c9p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5c8ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5c9p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca2p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92b151371ca2p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d15795d5cdae577p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae577p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae577p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae5772p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92b151371ca2p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92b151371ca2p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c73739088709acp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c73739088709aep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c73739088709acp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c73739088709aep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55f18574ae50856p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55f18574ae50858p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55f18574ae50856p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55f18574ae50858p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d15b56508d71f218p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15b56508d71f21ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15b56508d71f218p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15b56508d71f21ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698caf7b3c91c47bep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698caf7b3c91c47cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698caf7b3c91c47bep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698caf7b3c91c47cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de559ada88d65a5c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de559ada88d65a5cap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de559ada88d65a5c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de559ada88d65a5cap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d155eba1cbb7da2ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d155eba1cbb7da3p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d155eba1cbb7da2ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d155eba1cbb7da3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c58d050633860ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c58d050633860cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c58d050633860ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c58d050633860cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dd2cb350960010854p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2cb350960010856p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2cb350960010854p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2cb350960010856p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413bec772f42133ed3ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec772f42133ed3ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec772f42133ed3ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec772f42133ed3cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea6863714534ed3f2c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6863714534ed3f2c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6863714534ed3f2c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6863714534ed3f2c6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fp+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6e2f6958ff48a5bba99034128p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48a5bba9903412ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48a5bba99034128p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48a5bba9903412ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fp+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e596969976a535107fa856eap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a535107fa856ecp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a535107fa856eap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a535107fa856ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b5fp+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e652712d3ebc292bc227adf6p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebc292bc227adf8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebc292bc227adf6p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebc292bc227adf8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b6p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6dd8be6cc20610e9a6ce98726p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc20610e9a6ce98726p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc20610e9a6ce98726p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc20610e9a6ce98728p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b6p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e02be7d167c686712d2dadd6p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c686712d2dadd8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c686712d2dadd6p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c686712d2dadd8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x9.27b6p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e0e7c2640133b01126200202p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640133b01126200202p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640133b01126200202p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640133b01126200204p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xa.3ac3cp+68 + 0x1.47239ep+68 i", LIT (0xa.3ac3cp+68), LIT (0x1.47239ep+68), { LIT (0x1.fd0a44d0aba440f30193e8545bc1p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f30193e8545bc2p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f30193e8545bc1p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f30193e8545bc2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xd.3de7ap-36 - 0xe.cf143p-40 i", LIT (0xd.3de7ap-36), LIT (-0xe.cf143p-40), { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a451p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a451p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a45p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a45p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x3.243f6cp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6cp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f68p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f68p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 - 0x2p+0 i", LIT (-0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x3.243f68p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6cp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f68p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 + 0x2p+0 i", LIT (-0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.0236b6p-20 + 0x2.a6e504p+108 i", LIT (-0x1.0236b6p-20), LIT (0x2.a6e504p+108), { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.0a512ap-120 + 0xf.54681p-108 i", LIT (-0x1.0a512ap-120), LIT (0xf.54681p-108), { LIT (0x1.9220cap+0), ERRNO_UNCHANGED }, { LIT (0x1.9220ccp+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cap+0), ERRNO_UNCHANGED }, { LIT (0x1.9220ccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x2p+0 - 0 i", LIT (-0x2p+0), LIT (-0x0p+0), { LIT (-0x3.243f6cp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6cp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f68p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f68p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x2p+0 + +0 i", LIT (-0x2p+0), LIT (0x0p+0), { LIT (0x3.243f68p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6cp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f68p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.973cc4p+72 - 0xf.fffffp+124 i", LIT (-0x3.973cc4p+72), LIT (-0xf.fffffp+124), { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.be0054p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.be0058p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0058p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xf.9c4c8p-4 - 0xa.b4101p+20 i", LIT (-0xf.9c4c8p-4), LIT (-0xa.b4101p+20), { LIT (-0x1.921fb8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 - 0x2p+0 i", LIT (0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0 + 0x2p+0 i", LIT (0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.f4755cp+0 - 0x4.29411p-4 i", LIT (0x1.f4755cp+0), LIT (-0x4.29411p-4), { LIT (-0x2.1dbac8p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.21e65p+0 + 0x5.576cf8p-4 i", LIT (0x2.21e65p+0), LIT (0x5.576cf8p-4), { LIT (0x2.7c178p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1784p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c178p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1784p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.f2f308p+0 + 0x4.c3841p-4 i", LIT (0x2.f2f308p+0), LIT (0x4.c3841p-4), { LIT (0x1.9c22cep-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22cep-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22cep-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+0 - 0 i", LIT (0x2p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+0 + +0 i", LIT (0x2p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x3.8ff10cp+0 - 0x6.b0794p-4 i", LIT (0x3.8ff10cp+0), LIT (-0x6.b0794p-4), { LIT (-0x1.de8936p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de8936p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de8934p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de8934p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x7.40ac68p+0 + 0x4.251bb8p-4 i", LIT (0x7.40ac68p+0), LIT (0x4.251bb8p-4), { LIT (0x9.23e97p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e98p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + +0 i", LIT (0x8p-152), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152 + 0x8p-152 i", LIT (0x8p-152), LIT (0x8p-152), { LIT (0xc.90fdap-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdbp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdap-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdbp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x9.27b5fp+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x9.27b5fp+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x9.27b6p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6dcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x9.27b6p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xa.3ac3cp+68 + 0x1.47239ep+68 i", LIT (0xa.3ac3cp+68), LIT (0x1.47239ep+68), { LIT (0x1.fd0a44p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a46p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xd.3de7ap-36 - 0xe.cf143p-40 i", LIT (0xd.3de7ap-36), LIT (-0xe.cf143p-40), { LIT (-0x1.1dd4c6p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a32p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a3p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0x2p+0 i", LIT (-0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d19p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a32p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 + 0x2p+0 i", LIT (-0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d19p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.0236b6p-20 + 0x2.a6e504p+108 i", LIT (-0x1.0236b6p-20), LIT (0x2.a6e504p+108), { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d19p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.0a512ap-120 + 0xf.54681p-108 i", LIT (-0x1.0a512ap-120), LIT (0xf.54681p-108), { LIT (0x1.9220cb3a73868p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a73868p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a73868p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a73869p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2p+0 - 0 i", LIT (-0x2p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a32p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a3p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2p+0 + +0 i", LIT (-0x2p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a3p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a32p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.973cc4p+72 - 0xf.fffffp+124 i", LIT (-0x3.973cc4p+72), LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d19p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d19p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.be0054531569p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054531569p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4657291ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac46572919p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac46572919p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac46572919p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.be0054p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac45eb390bp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.be0058p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0058p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4b1d8c3dp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3dp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.9c4c8p-4 - 0xa.b4101p+20 i", LIT (-0xf.9c4c8p-4), LIT (-0xa.b4101p+20), { LIT (-0x1.921fb6b9a118dp+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118dp+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 - 0x2p+0 i", LIT (0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d19p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0 + 0x2p+0 i", LIT (0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d19p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.f4755cp+0 - 0x4.29411p-4 i", LIT (0x1.f4755cp+0), LIT (-0x4.29411p-4), { LIT (-0x2.1dbac4fa4bfecp-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfecp-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeap-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.21e65p+0 + 0x5.576cf8p-4 i", LIT (0x2.21e65p+0), LIT (0x5.576cf8p-4), { LIT (0x2.7c1782a75e16ap-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16cp-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16ap-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.f2f308p+0 + 0x4.c3841p-4 i", LIT (0x2.f2f308p+0), LIT (0x4.c3841p-4), { LIT (0x1.9c22ce44a7229p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a722ap-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a722ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+0 - 0 i", LIT (0x2p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+0 + +0 i", LIT (0x2p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x3.8ff10cp+0 - 0x6.b0794p-4 i", LIT (0x3.8ff10cp+0), LIT (-0x6.b0794p-4), { LIT (-0x1.de89352a0e83ap-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x7.40ac68p+0 + 0x4.251bb8p-4 i", LIT (0x7.40ac68p+0), LIT (0x4.251bb8p-4), { LIT (0x9.23e97736442d8p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d8p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d8p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442ep-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + +0 i", LIT (0x8p-152), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x4p-1076 i", LIT (0x8p-152), LIT (0x4p-1076), { LIT (0x7.ffffffffffffcp-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152 + 0x8p-152 i", LIT (0x8p-152), LIT (0x8p-152), { LIT (0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb414p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea6ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea68p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fp+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6e2f6958fep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6959p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958fep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6959p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fp+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e59696996p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e59696998p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e59696996p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e59696998p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b5fp+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e652712d2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b6p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6dd8be6cc2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b6p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e02be7d16p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d16p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d16p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d18p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x9.27b6p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e0e7c264p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c264p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c264p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2642p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xa.3ac3cp+68 + 0x1.47239ep+68 i", LIT (0xa.3ac3cp+68), LIT (0x1.47239ep+68), { LIT (0x1.fd0a44d0aba44p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba44p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba44p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba45p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xd.3de7ap-36 - 0xe.cf143p-40 i", LIT (0xd.3de7ap-36), LIT (-0xe.cf143p-40), { LIT (-0x1.1dd4c4e264577p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e264577p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e264576p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e264576p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d313198a2e04p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0x2p+0 i", LIT (-0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e04p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 + 0x2p+0 i", LIT (-0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.0236b6p-20 + 0x2.a6e504p+108 i", LIT (-0x1.0236b6p-20), LIT (0x2.a6e504p+108), { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.0a512ap-120 + 0xf.54681p-108 i", LIT (-0x1.0a512ap-120), LIT (0xf.54681p-108), { LIT (0x1.9220cb3a738682a53ab7ff5207p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a53ab7ff52078p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a53ab7ff5207p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a53ab7ff52078p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2p+0 - 0 i", LIT (-0x2p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d313198a2e04p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2p+0 + +0 i", LIT (-0x2p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e03p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d313198a2e04p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.973cc4p+72 - 0xf.fffffp+124 i", LIT (-0x3.973cc4p+72), LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d18800c6545c53c98p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18800c6545c53c98p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18800c6545c53c9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18800c6545c53c9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.be0054531569p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054531569p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4657291965130fd9b80bbp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965130fd9b80bbp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965130fd9b80ba8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965130fd9b80ba8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.be0054p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac45eb390a6d33f541e8705p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d33f541e87048p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d33f541e87048p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d33f541e87048p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.be0058p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0058p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bd08p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bdp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bdp+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81987f3ee7bdp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.9c4c8p-4 - 0xa.b4101p+20 i", LIT (-0xf.9c4c8p-4), LIT (-0xa.b4101p+20), { LIT (-0x1.921fb6b9a118c89590d47417858p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c89590d47417858p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c89590d4741785p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c89590d4741785p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 - 0x2p+0 i", LIT (0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0 + 0x2p+0 i", LIT (0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.f4755cp+0 - 0x4.29411p-4 i", LIT (0x1.f4755cp+0), LIT (-0x4.29411p-4), { LIT (-0x2.1dbac4fa4bfeb74f6140009956p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74f6140009956p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74f6140009955p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74f6140009955p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.21e65p+0 + 0x5.576cf8p-4 i", LIT (0x2.21e65p+0), LIT (0x5.576cf8p-4), { LIT (0x2.7c1782a75e16b743e48c247c62p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b743e48c247c63p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b743e48c247c62p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b743e48c247c63p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.f2f308p+0 + 0x4.c3841p-4 i", LIT (0x2.f2f308p+0), LIT (0x4.c3841p-4), { LIT (0x1.9c22ce44a7229d114c2b8822668p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d114c2b882267p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d114c2b8822668p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d114c2b882267p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+0 - 0 i", LIT (0x2p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+0 + +0 i", LIT (0x2p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x3.8ff10cp+0 - 0x6.b0794p-4 i", LIT (0x3.8ff10cp+0), LIT (-0x6.b0794p-4), { LIT (-0x1.de89352a0e839633c32d65e2548p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839633c32d65e254p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839633c32d65e254p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839633c32d65e254p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x7.40ac68p+0 + 0x4.251bb8p-4 i", LIT (0x7.40ac68p+0), LIT (0x4.251bb8p-4), { LIT (0x9.23e97736442d915917b21858bp-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915917b21858bp-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915917b21858bp-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915917b21858b4p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + +0 i", LIT (0x8p-152), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x4p-1076 i", LIT (0x8p-152), LIT (0x4p-1076), { LIT (0x7.fffffffffffffffffffffffffep-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152 + 0x8p-152 i", LIT (0x8p-152), LIT (0x8p-152), { LIT (0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b81p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dfe20aaf55b1572p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe20aaf55b1573p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe20aaf55b1572p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe20aaf55b1573p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413ea1ce901f1f33fp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1ce901f1f33fp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1ce901f1f33fp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1ce901f1f34p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18fp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18ep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18c8a6a94e18fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92b151371ca24p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92b151371ca24p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55b57dc8e0f5bp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5bp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5bp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92b151371ca24p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92b151371ca24p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d15795d5cdae56p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae56p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae56p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae57p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92b151371ca24p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92b151371ca24p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c73739088708p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c73739088708p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c73739088708p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c73739088709p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92b151371ca2p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92b151371ca2p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55b57dc8e0f5cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5dp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55b57dc8e0f5dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92b151371ca2p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92b151371ca2p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d15795d5cdae57p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae57p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae57p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15795d5cdae58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92b151371ca2p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92b151371ca2p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c73739088709p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c7373908870ap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c73739088709p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c7373908870ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55f18574ae508p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55f18574ae508p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55f18574ae508p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55f18574ae509p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d15b56508d71f2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15b56508d71f2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15b56508d71f2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15b56508d71f3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698caf7b3c91c47p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698caf7b3c91c48p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698caf7b3c91c47p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698caf7b3c91c48p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de559ada88d65a5p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de559ada88d65a6p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de559ada88d65a5p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de559ada88d65a6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d155eba1cbb7dap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d155eba1cbb7dap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d155eba1cbb7dap-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d155eba1cbb7dbp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c58d05063386p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c58d05063386p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c58d05063386p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c58d05063387p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dd2cb3509600108p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2cb3509600108p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2cb3509600108p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2cb3509600109p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413bec772f42133edp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec772f42133edp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec772f42133edp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec772f42133eep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea6863714534ed3f2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6863714534ed3f3p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6863714534ed3f2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6863714534ed3f3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fp+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6e2f6958ff48a5bba990341p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48a5bba990341p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48a5bba990341p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48a5bba990342p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fp+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e596969976a535107fa856p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a535107fa857p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a535107fa856p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a535107fa857p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b5fp+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e652712d3ebc292bc227adp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebc292bc227aep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebc292bc227adp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebc292bc227aep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b6p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6dd8be6cc20610e9a6ce987p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc20610e9a6ce987p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc20610e9a6ce987p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc20610e9a6ce988p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b6p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e02be7d167c686712d2dadp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c686712d2daep-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c686712d2dadp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c686712d2daep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x9.27b6p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e0e7c2640133b011262002p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640133b011262002p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640133b011262002p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640133b011262003p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xa.3ac3cp+68 + 0x1.47239ep+68 i", LIT (0xa.3ac3cp+68), LIT (0x1.47239ep+68), { LIT (0x1.fd0a44d0aba440f30193e8545b8p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f30193e8545cp-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f30193e8545b8p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f30193e8545cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xd.3de7ap-36 - 0xe.cf143p-40 i", LIT (0xd.3de7ap-36), LIT (-0xe.cf143p-40), { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a48p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a48p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a4p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d1f7ebdc32a4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0x2p+0 i", LIT (-0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 + 0x2p+0 i", LIT (-0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.0236b6p-20 + 0x2.a6e504p+108 i", LIT (-0x1.0236b6p-20), LIT (0x2.a6e504p+108), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.0a512ap-120 + 0xf.54681p-108 i", LIT (-0x1.0a512ap-120), LIT (0xf.54681p-108), { LIT (0x1.9220cb3a738682a4p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a6p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a4p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p+0 - 0 i", LIT (-0x2p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p+0 + +0 i", LIT (-0x2p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.973cc4p+72 - 0xf.fffffp+124 i", LIT (-0x3.973cc4p+72), LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d18802p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d188p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d188p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d188p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.be0054531569p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054531569p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac46572919652p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac46572919652p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.be0054p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac45eb390a6d4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d2p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.be0058p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0058p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4b1d8c3c81ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c818p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c818p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.9c4c8p-4 - 0xa.b4101p+20 i", LIT (-0xf.9c4c8p-4), LIT (-0xa.b4101p+20), { LIT (-0x1.921fb6b9a118c896p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c896p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c894p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c894p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 - 0x2p+0 i", LIT (0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0 + 0x2p+0 i", LIT (0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.f4755cp+0 - 0x4.29411p-4 i", LIT (0x1.f4755cp+0), LIT (-0x4.29411p-4), { LIT (-0x2.1dbac4fa4bfeb75p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb75p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.21e65p+0 + 0x5.576cf8p-4 i", LIT (0x2.21e65p+0), LIT (0x5.576cf8p-4), { LIT (0x2.7c1782a75e16b74p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b744p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b74p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b744p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.f2f308p+0 + 0x4.c3841p-4 i", LIT (0x2.f2f308p+0), LIT (0x4.c3841p-4), { LIT (0x1.9c22ce44a7229d1p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d12p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d1p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d12p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+0 - 0 i", LIT (0x2p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+0 + +0 i", LIT (0x2p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x3.8ff10cp+0 - 0x6.b0794p-4 i", LIT (0x3.8ff10cp+0), LIT (-0x6.b0794p-4), { LIT (-0x1.de89352a0e839634p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839634p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839632p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839632p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x7.40ac68p+0 + 0x4.251bb8p-4 i", LIT (0x7.40ac68p+0), LIT (0x4.251bb8p-4), { LIT (0x9.23e97736442d915p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d916p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d916p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + +0 i", LIT (0x8p-152), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x4p-1076 i", LIT (0x8p-152), LIT (0x4p-1076), { LIT (0x7.fffffffffffffff8p-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152 + 0x8p-152 i", LIT (0x8p-152), LIT (0x8p-152), { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dfe2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe24p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413ea1cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea6b18cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b19p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de56p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de56p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d158p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d158p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698ccp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698ccp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de558p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de558p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de558p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d154p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d154p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d154p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d158p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dd2c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2ccp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2ccp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413bec4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea68634p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68638p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68634p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68638p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fp+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6e2f6958ff488p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff488p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fp+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e596969976a4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b5fp+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e652712d3ebcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b6p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6dd8be6cc206p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc206p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc206p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc2064p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b6p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e02be7d167c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x9.27b6p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e0e7c264013p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640134p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c264013p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640134p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xa.3ac3cp+68 + 0x1.47239ep+68 i", LIT (0xa.3ac3cp+68), LIT (0x1.47239ep+68), { LIT (0x1.fd0a44d0aba440f2p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f4p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f2p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xd.3de7ap-36 - 0xe.cf143p-40 i", LIT (0xd.3de7ap-36), LIT (-0xe.cf143p-40), { LIT (-0x1.1dd4c4e2645769d2p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d2p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769dp-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0 i", LIT (-0x0p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0x2p+0 i", LIT (-0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 + +0 i", LIT (-0x0p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 + 0x2p+0 i", LIT (-0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.0236b6p-20 + 0x2.a6e504p+108 i", LIT (-0x1.0236b6p-20), LIT (0x2.a6e504p+108), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.0a512ap-120 + 0xf.54681p-108 i", LIT (-0x1.0a512ap-120), LIT (0xf.54681p-108), { LIT (0x1.9220cb3a738682a4p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a6p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a4p+0), ERRNO_UNCHANGED }, { LIT (0x1.9220cb3a738682a6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p+0 - 0 i", LIT (-0x2p+0), LIT (-0x0p+0), { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (-0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p+0 + +0 i", LIT (-0x2p+0), LIT (0x0p+0), { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308dp+0), ERRNO_UNCHANGED }, { LIT (0x3.243f6a8885a308d4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.973cc4p+72 - 0xf.fffffp+124 i", LIT (-0x3.973cc4p+72), LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d18802p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d188p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d188p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d188p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.be0054531569p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054531569p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac46572919652p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac46572919652p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4657291965p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.be0054p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0054p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac45eb390a6d4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d2p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac45eb390a6d2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.be0058p-4 - 0xb.0c5a9p-4 i", LIT (-0x3.be0058p-4), LIT (-0xb.0c5a9p-4), { LIT (-0x1.e5bac4b1d8c3c81ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c81ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c818p+0), ERRNO_UNCHANGED }, { LIT (-0x1.e5bac4b1d8c3c818p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.9c4c8p-4 - 0xa.b4101p+20 i", LIT (-0xf.9c4c8p-4), LIT (-0xa.b4101p+20), { LIT (-0x1.921fb6b9a118c896p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c896p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c894p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6b9a118c894p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 - 0 i", LIT (0x0p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 - 0x2p+0 i", LIT (0x0p+0), LIT (-0x2p+0), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + +0 i", LIT (0x0p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0 + 0x2p+0 i", LIT (0x0p+0), LIT (0x2p+0), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.f4755cp+0 - 0x4.29411p-4 i", LIT (0x1.f4755cp+0), LIT (-0x4.29411p-4), { LIT (-0x2.1dbac4fa4bfeb75p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb75p-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74cp-4), ERRNO_UNCHANGED }, { LIT (-0x2.1dbac4fa4bfeb74cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.21e65p+0 + 0x5.576cf8p-4 i", LIT (0x2.21e65p+0), LIT (0x5.576cf8p-4), { LIT (0x2.7c1782a75e16b74p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b744p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b74p-4), ERRNO_UNCHANGED }, { LIT (0x2.7c1782a75e16b744p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.f2f308p+0 + 0x4.c3841p-4 i", LIT (0x2.f2f308p+0), LIT (0x4.c3841p-4), { LIT (0x1.9c22ce44a7229d1p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d12p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d1p-4), ERRNO_UNCHANGED }, { LIT (0x1.9c22ce44a7229d12p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+0 - 0 i", LIT (0x2p+0), LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+0 + +0 i", LIT (0x2p+0), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x3.8ff10cp+0 - 0x6.b0794p-4 i", LIT (0x3.8ff10cp+0), LIT (-0x6.b0794p-4), { LIT (-0x1.de89352a0e839634p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839634p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839632p-4), ERRNO_UNCHANGED }, { LIT (-0x1.de89352a0e839632p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x7.40ac68p+0 + 0x4.251bb8p-4 i", LIT (0x7.40ac68p+0), LIT (0x4.251bb8p-4), { LIT (0x9.23e97736442d915p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d916p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d915p-8), ERRNO_UNCHANGED }, { LIT (0x9.23e97736442d916p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + +0 i", LIT (0x8p-152), LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x4p-1076 i", LIT (0x8p-152), LIT (0x4p-1076), { LIT (0x7.fffffffffffffff8p-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-928), ERRNO_UNCHANGED }, { LIT (0x8p-928), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152 + 0x8p-152 i", LIT (0x8p-152), LIT (0x8p-152), { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dfe2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe2p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dfe24p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413ea1cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea1cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413ea2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b68p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b68p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea6b18cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b18cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea6b19p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de55cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de56p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de56p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d158p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d158p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d15cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b6c92p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c92p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698ccp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698ccp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30de558p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de558p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de558p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30de55cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413d154p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d154p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d154p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413d158p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b6c93p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b6c93p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea698c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea698c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6de5eb30dd2c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2ccp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6de5eb30dd2ccp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e0feb413bec4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0feb413bec8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fd9157b7p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fd9157b7p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e1ba8ea68634p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68638p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68634p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e1ba8ea68638p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fp+0 + 0x1.d8759ap+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6e2f6958ff488p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48cp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff488p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e2f6958ff48cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fp+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e596969976a4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e596969976a8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b5fp+0 + 0x1.d8759cp+0 i", LIT (0x9.27b5fp+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e652712d3ebcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ebcp-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e652712d3ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b6p+0 + 0x1.d8759ap+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759ap+0), { LIT (0x3.2ec6dd8be6cc206p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc206p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc206p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6dd8be6cc2064p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b6p+0 + 0x1.d8759b9024992p+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759b9024992p+0), { LIT (0x3.2ec6e02be7d167c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c8p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e02be7d167c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x9.27b6p+0 + 0x1.d8759cp+0 i", LIT (0x9.27b6p+0), LIT (0x1.d8759cp+0), { LIT (0x3.2ec6e0e7c264013p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640134p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c264013p-4), ERRNO_UNCHANGED }, { LIT (0x3.2ec6e0e7c2640134p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xa.3ac3cp+68 + 0x1.47239ep+68 i", LIT (0xa.3ac3cp+68), LIT (0x1.47239ep+68), { LIT (0x1.fd0a44d0aba440f2p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f4p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f2p-4), ERRNO_UNCHANGED }, { LIT (0x1.fd0a44d0aba440f4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xd.3de7ap-36 - 0xe.cf143p-40 i", LIT (0xd.3de7ap-36), LIT (-0xe.cf143p-40), { LIT (-0x1.1dd4c4e2645769d2p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769d2p-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769dp-4), ERRNO_UNCHANGED }, { LIT (-0x1.1dd4c4e2645769dp-4), ERRNO_UNCHANGED } },
#endif
  };

static void
carg_test (void)
{
  ALL_RM_TEST (carg, 0, carg_test_data, RUN_TEST_LOOP_c_f, END);
}

static void
do_test (void)
{
  carg_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
