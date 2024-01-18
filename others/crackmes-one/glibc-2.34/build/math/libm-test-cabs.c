/* Test cabs.
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

static const struct test_c_f_data cabs_test_data[] =
  {
    /* cabs (x + iy) is specified as hypot (x,y) */

    /* cabs (+inf + i x) == +inf.  */
    { "inf + 1.0 i", plus_infty, LIT (1.0), { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 } },
    /* cabs (-inf + i x) == +inf.  */
    { "-inf + 1.0 i", minus_infty, LIT (1.0), { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 } },

    { "-inf + qNaN i", minus_infty, qnan_value, { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 } },
    { "-inf + qNaN i", minus_infty, qnan_value, { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 }, { plus_infty, 0 } },

    { "qNaN + qNaN i", qnan_value, qnan_value, { qnan_value, 0 }, { qnan_value, 0 }, { qnan_value, 0 }, { qnan_value, 0 } },

#if (TEST_COND_binary128)
    { "-0 - 0x3.4e5d7877324cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7877324cp+0), { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 - 0x3.4e5d78p+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d78p+0), { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0 - 0x3.4e5d7cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7cp+0), { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.055fb2p+48 + 0x9.1ce86p+24 i", LIT (-0x1.055fb2p+48), LIT (0x9.1ce86p+24), { LIT (0x1.055fb2000028ab411a37f7ed75bdp+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab411a37f7ed75bdp+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab411a37f7ed75bdp+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab411a37f7ed75bep+48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.0932cp-80 - 0x2.51109p-24 i", LIT (-0x1.0932cp-80), LIT (-0x2.51109p-24), { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.5110900000000000000000000002p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.0eda54p+28 + 0xb.09476p+0 i", LIT (-0x1.0eda54p+28), LIT (0xb.09476p+0), { LIT (0x1.0eda54000000398f4eef03909ac1p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398f4eef03909ac2p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398f4eef03909ac1p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398f4eef03909ac2p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.133b84p+84 - 0xa.7d925f57f60cp+768 i", LIT (-0x1.133b84p+84), LIT (-0xa.7d925f57f60cp+768), { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60c0000000000000008p+768), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.133b84p+84 - 0xf.fffffp+124 i", LIT (-0x1.133b84p+84), LIT (-0xf.fffffp+124), { LIT (0xf.fffff000000000000000093f476p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff000000000000000093f4768p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff000000000000000093f476p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff000000000000000093f4768p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.250366p-36 - 0x5.a5046p-4 i", LIT (-0x1.250366p-36), LIT (-0x5.a5046p-4), { LIT (0x5.a5046000000000001db5376a4a08p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046000000000001db5376a4a08p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046000000000001db5376a4a08p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046000000000001db5376a4a0cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.26a566p+120 + 0x4.017b28p+92 i", LIT (-0x1.26a566p+120), LIT (0x4.017b28p+92), { LIT (0x1.26a56600000006f8887eefeb06d1p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8887eefeb06d2p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8887eefeb06d1p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8887eefeb06d2p+120), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.2b0ff8p+28 - 0x2.549fc4p+16 i", LIT (-0x1.2b0ff8p+28), LIT (-0x2.549fc4p+16), { LIT (0x1.2b0ffa53208c702cbc8f252e1dfp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cbc8f252e1dfp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cbc8f252e1dfp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cbc8f252e1df1p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.30ed4cp+0 + 0x1.e9d956p+56 i", LIT (-0x1.30ed4cp+0), LIT (0x1.e9d956p+56), { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d9560000000000000000000001p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.34be3p-4 - 0xc.56623p+0 i", LIT (-0x1.34be3p-4), LIT (-0xc.56623p+0), { LIT (0xc.56714717944141fc40fa4c79194p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fc40fa4c791948p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fc40fa4c79194p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fc40fa4c791948p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.88858cp+84 + 0x5.bd9198p+36 i", LIT (-0x1.88858cp+84), LIT (0x5.bd9198p+36), { LIT (0x1.88858c00000000000000000abef8p+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c00000000000000000abef9p+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c00000000000000000abef8p+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c00000000000000000abef9p+84), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1p+0 + +0 i", LIT (-0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.65c04p+24 + +0 i", LIT (-0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xa.f59b8p+4 + 0xa.21a95p+20 i", LIT (-0xa.f59b8p+4), LIT (0xa.21a95p+20), { LIT (0xa.21a95005ed6fbffe68d320c0fde8p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffe68d320c0fde8p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffe68d320c0fde8p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffe68d320c0fdfp+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xc.64p+0 - 0xcp-4 i", LIT (-0xc.64p+0), LIT (-0xcp-4), { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xc.64p+0 + 0xcp-4 i", LIT (-0xc.64p+0), LIT (0xcp-4), { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 - 0xc.64p+0 i", LIT (-0xcp-4), LIT (-0xc.64p+0), { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + +0 i", LIT (-0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xcp-4 + 0xc.64p+0 i", LIT (-0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0 + +0 i", LIT (0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x3.65c04p+24 + +0 i", LIT (0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + +0 i", LIT (0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.752e50db3a3a1b1b33b0456f1fbap+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1b33b0456f1fbbp+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1b33b0456f1fbap+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1b33b0456f1fbbp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4 + 0xc.64p+0 i", LIT (0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9e8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c9fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 - 0x3.4e5d78p+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d78p+0), { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0 - 0x3.4e5d7cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7cp+0), { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.055fb2p+48 + 0x9.1ce86p+24 i", LIT (-0x1.055fb2p+48), LIT (0x9.1ce86p+24), { LIT (0x1.055fb2p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb4p+48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.0932cp-80 - 0x2.51109p-24 i", LIT (-0x1.0932cp-80), LIT (-0x2.51109p-24), { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.511094p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.0eda54p+28 + 0xb.09476p+0 i", LIT (-0x1.0eda54p+28), LIT (0xb.09476p+0), { LIT (0x1.0eda54p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda56p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.133b84p+84 - 0xf.fffffp+124 i", LIT (-0x1.133b84p+84), LIT (-0xf.fffffp+124), { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { plus_infty, OVERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.250366p-36 - 0x5.a5046p-4 i", LIT (-0x1.250366p-36), LIT (-0x5.a5046p-4), { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a50468p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.26a566p+120 + 0x4.017b28p+92 i", LIT (-0x1.26a566p+120), LIT (0x4.017b28p+92), { LIT (0x1.26a566p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a566p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a566p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a568p+120), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.2b0ff8p+28 - 0x2.549fc4p+16 i", LIT (-0x1.2b0ff8p+28), LIT (-0x2.549fc4p+16), { LIT (0x1.2b0ffap+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffap+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffap+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffcp+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.30ed4cp+0 + 0x1.e9d956p+56 i", LIT (-0x1.30ed4cp+0), LIT (0x1.e9d956p+56), { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d958p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.34be3p-4 - 0xc.56623p+0 i", LIT (-0x1.34be3p-4), LIT (-0xc.56623p+0), { LIT (0xc.56714p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714p+0), ERRNO_UNCHANGED }, { LIT (0xc.56715p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.88858cp+84 + 0x5.bd9198p+36 i", LIT (-0x1.88858cp+84), LIT (0x5.bd9198p+36), { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858ep+84), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1p+0 + +0 i", LIT (-0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.65c04p+24 + +0 i", LIT (-0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xa.f59b8p+4 + 0xa.21a95p+20 i", LIT (-0xa.f59b8p+4), LIT (0xa.21a95p+20), { LIT (0xa.21a95p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a96p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xc.64p+0 - 0xcp-4 i", LIT (-0xc.64p+0), LIT (-0xcp-4), { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xc.64p+0 + 0xcp-4 i", LIT (-0xc.64p+0), LIT (0xcp-4), { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 - 0xc.64p+0 i", LIT (-0xcp-4), LIT (-0xc.64p+0), { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + +0 i", LIT (-0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xcp-4 + 0xc.64p+0 i", LIT (-0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0 + +0 i", LIT (0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x3.65c04p+24 + +0 i", LIT (0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + +0 i", LIT (0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.752e5p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e5p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e5p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e52p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4 + 0xc.64p+0 i", LIT (0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce3p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0x3.4e5d7877324cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7877324cp+0), { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0x3.4e5d78p+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d78p+0), { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0 - 0x3.4e5d7cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7cp+0), { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.055fb2p+48 + 0x9.1ce86p+24 i", LIT (-0x1.055fb2p+48), LIT (0x9.1ce86p+24), { LIT (0x1.055fb2000028ap+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028bp+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ap+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028bp+48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.0932cp-80 - 0x2.51109p-24 i", LIT (-0x1.0932cp-80), LIT (-0x2.51109p-24), { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.5110900000002p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.0eda54p+28 + 0xb.09476p+0 i", LIT (-0x1.0eda54p+28), LIT (0xb.09476p+0), { LIT (0x1.0eda540000003p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda540000004p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda540000003p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda540000004p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.133b84p+84 - 0xa.7d925f57f60cp+768 i", LIT (-0x1.133b84p+84), LIT (-0xa.7d925f57f60cp+768), { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60c8p+768), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.133b84p+84 - 0xf.fffffp+124 i", LIT (-0x1.133b84p+84), LIT (-0xf.fffffp+124), { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff00000008p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.250366p-36 - 0x5.a5046p-4 i", LIT (-0x1.250366p-36), LIT (-0x5.a5046p-4), { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a504600000004p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.26a566p+120 + 0x4.017b28p+92 i", LIT (-0x1.26a566p+120), LIT (0x4.017b28p+92), { LIT (0x1.26a566p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a566p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a566p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a5660000001p+120), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.2b0ff8p+28 - 0x2.549fc4p+16 i", LIT (-0x1.2b0ff8p+28), LIT (-0x2.549fc4p+16), { LIT (0x1.2b0ffa53208c7p+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c7p+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c7p+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c8p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.30ed4cp+0 + 0x1.e9d956p+56 i", LIT (-0x1.30ed4cp+0), LIT (0x1.e9d956p+56), { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d9560000001p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.34be3p-4 - 0xc.56623p+0 i", LIT (-0x1.34be3p-4), LIT (-0xc.56623p+0), { LIT (0xc.567147179441p+0), ERRNO_UNCHANGED }, { LIT (0xc.5671471794418p+0), ERRNO_UNCHANGED }, { LIT (0xc.567147179441p+0), ERRNO_UNCHANGED }, { LIT (0xc.5671471794418p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.88858cp+84 + 0x5.bd9198p+36 i", LIT (-0x1.88858cp+84), LIT (0x5.bd9198p+36), { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c0000001p+84), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1p+0 + +0 i", LIT (-0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.65c04p+24 + +0 i", LIT (-0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xa.f59b8p+4 + 0xa.21a95p+20 i", LIT (-0xa.f59b8p+4), LIT (0xa.21a95p+20), { LIT (0xa.21a95005ed6f8p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6f8p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6f8p+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed7p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xc.64p+0 - 0xcp-4 i", LIT (-0xc.64p+0), LIT (-0xcp-4), { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xc.64p+0 + 0xcp-4 i", LIT (-0xc.64p+0), LIT (0xcp-4), { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 - 0xc.64p+0 i", LIT (-0xcp-4), LIT (-0xc.64p+0), { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + +0 i", LIT (-0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xcp-4 + 0xc.64p+0 i", LIT (-0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0 + +0 i", LIT (0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x3.65c04p+24 + +0 i", LIT (0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + +0 i", LIT (0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.752e50db3a3a1p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a2p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4 + 0xc.64p+0 i", LIT (0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e08p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0x3.4e5d7877324cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7877324cp+0), { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0x3.4e5d78p+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d78p+0), { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0 - 0x3.4e5d7cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7cp+0), { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.055fb2p+48 + 0x9.1ce86p+24 i", LIT (-0x1.055fb2p+48), LIT (0x9.1ce86p+24), { LIT (0x1.055fb2000028ab411a37f7ed758p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab411a37f7ed758p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab411a37f7ed758p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab411a37f7ed76p+48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.0932cp-80 - 0x2.51109p-24 i", LIT (-0x1.0932cp-80), LIT (-0x2.51109p-24), { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109000000000000000000001p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.0eda54p+28 + 0xb.09476p+0 i", LIT (-0x1.0eda54p+28), LIT (0xb.09476p+0), { LIT (0x1.0eda54000000398f4eef03909a8p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398f4eef03909bp+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398f4eef03909a8p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398f4eef03909bp+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.133b84p+84 - 0xa.7d925f57f60cp+768 i", LIT (-0x1.133b84p+84), LIT (-0xa.7d925f57f60cp+768), { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60c00000000000004p+768), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.133b84p+84 - 0xf.fffffp+124 i", LIT (-0x1.133b84p+84), LIT (-0xf.fffffp+124), { LIT (0xf.fffff000000000000000093f44p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff000000000000000093f48p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff000000000000000093f44p+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff000000000000000093f48p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.250366p-36 - 0x5.a5046p-4 i", LIT (-0x1.250366p-36), LIT (-0x5.a5046p-4), { LIT (0x5.a5046000000000001db5376a4ap-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046000000000001db5376a4ap-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046000000000001db5376a4ap-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046000000000001db5376a4cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.26a566p+120 + 0x4.017b28p+92 i", LIT (-0x1.26a566p+120), LIT (0x4.017b28p+92), { LIT (0x1.26a56600000006f8887eefeb068p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8887eefeb07p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8887eefeb068p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8887eefeb07p+120), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.2b0ff8p+28 - 0x2.549fc4p+16 i", LIT (-0x1.2b0ff8p+28), LIT (-0x2.549fc4p+16), { LIT (0x1.2b0ffa53208c702cbc8f252e1d8p+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cbc8f252e1ep+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cbc8f252e1d8p+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cbc8f252e1ep+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.30ed4cp+0 + 0x1.e9d956p+56 i", LIT (-0x1.30ed4cp+0), LIT (0x1.e9d956p+56), { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956000000000000000000008p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.34be3p-4 - 0xc.56623p+0 i", LIT (-0x1.34be3p-4), LIT (-0xc.56623p+0), { LIT (0xc.56714717944141fc40fa4c7918p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fc40fa4c7918p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fc40fa4c7918p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fc40fa4c791cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.88858cp+84 + 0x5.bd9198p+36 i", LIT (-0x1.88858cp+84), LIT (0x5.bd9198p+36), { LIT (0x1.88858c00000000000000000abe8p+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c00000000000000000abfp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c00000000000000000abe8p+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c00000000000000000abfp+84), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1p+0 + +0 i", LIT (-0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.65c04p+24 + +0 i", LIT (-0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xa.f59b8p+4 + 0xa.21a95p+20 i", LIT (-0xa.f59b8p+4), LIT (0xa.21a95p+20), { LIT (0xa.21a95005ed6fbffe68d320c0fcp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffe68d320c0fcp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffe68d320c0fcp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffe68d320c1p+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xc.64p+0 - 0xcp-4 i", LIT (-0xc.64p+0), LIT (-0xcp-4), { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830ccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xc.64p+0 + 0xcp-4 i", LIT (-0xc.64p+0), LIT (0xcp-4), { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830ccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 - 0xc.64p+0 i", LIT (-0xcp-4), LIT (-0xc.64p+0), { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830ccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + +0 i", LIT (-0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xcp-4 + 0xc.64p+0 i", LIT (-0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830ccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0 + +0 i", LIT (0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x3.65c04p+24 + +0 i", LIT (0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + +0 i", LIT (0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.752e50db3a3a1b1b33b0456f1f8p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1b33b0456f1f8p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1b33b0456f1f8p+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1b33b0456f2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4 + 0xc.64p+0 i", LIT (0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830c8p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9df3616830ccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0x3.4e5d7877324cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7877324cp+0), { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0x3.4e5d78p+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d78p+0), { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0 - 0x3.4e5d7cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7cp+0), { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.055fb2p+48 + 0x9.1ce86p+24 i", LIT (-0x1.055fb2p+48), LIT (0x9.1ce86p+24), { LIT (0x1.055fb2000028ab4p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab42p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab4p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab42p+48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.0932cp-80 - 0x2.51109p-24 i", LIT (-0x1.0932cp-80), LIT (-0x2.51109p-24), { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.5110900000000004p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.0eda54p+28 + 0xb.09476p+0 i", LIT (-0x1.0eda54p+28), LIT (0xb.09476p+0), { LIT (0x1.0eda54000000398ep+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000399p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398ep+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000399p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.133b84p+84 - 0xa.7d925f57f60cp+768 i", LIT (-0x1.133b84p+84), LIT (-0xa.7d925f57f60cp+768), { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60c001p+768), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.133b84p+84 - 0xf.fffffp+124 i", LIT (-0x1.133b84p+84), LIT (-0xf.fffffp+124), { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff0000000001p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.250366p-36 - 0x5.a5046p-4 i", LIT (-0x1.250366p-36), LIT (-0x5.a5046p-4), { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a504600000000008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.26a566p+120 + 0x4.017b28p+92 i", LIT (-0x1.26a566p+120), LIT (0x4.017b28p+92), { LIT (0x1.26a56600000006f8p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006fap+120), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.2b0ff8p+28 - 0x2.549fc4p+16 i", LIT (-0x1.2b0ff8p+28), LIT (-0x2.549fc4p+16), { LIT (0x1.2b0ffa53208c702cp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702ep+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.30ed4cp+0 + 0x1.e9d956p+56 i", LIT (-0x1.30ed4cp+0), LIT (0x1.e9d956p+56), { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d9560000000002p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.34be3p-4 - 0xc.56623p+0 i", LIT (-0x1.34be3p-4), LIT (-0xc.56623p+0), { LIT (0xc.56714717944141fp+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944142p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fp+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944142p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.88858cp+84 + 0x5.bd9198p+36 i", LIT (-0x1.88858cp+84), LIT (0x5.bd9198p+36), { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c0000000002p+84), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1p+0 + +0 i", LIT (-0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.65c04p+24 + +0 i", LIT (-0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xa.f59b8p+4 + 0xa.21a95p+20 i", LIT (-0xa.f59b8p+4), LIT (0xa.21a95p+20), { LIT (0xa.21a95005ed6fbffp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fcp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fcp+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xc.64p+0 - 0xcp-4 i", LIT (-0xc.64p+0), LIT (-0xcp-4), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xc.64p+0 + 0xcp-4 i", LIT (-0xc.64p+0), LIT (0xcp-4), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 - 0xc.64p+0 i", LIT (-0xcp-4), LIT (-0xc.64p+0), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + +0 i", LIT (-0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xcp-4 + 0xc.64p+0 i", LIT (-0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0 + +0 i", LIT (0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x3.65c04p+24 + +0 i", LIT (0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + +0 i", LIT (0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.752e50db3a3a1b1ap+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1cp+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1ap+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4 + 0xc.64p+0 i", LIT (0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0x3.4e5d7877324cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7877324cp+0), { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7877324cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0x3.4e5d78p+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d78p+0), { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d78p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0 - 0x3.4e5d7cp+0 i", LIT (-0x0p+0), LIT (-0x3.4e5d7cp+0), { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED }, { LIT (0x3.4e5d7cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.055fb2p+48 + 0x9.1ce86p+24 i", LIT (-0x1.055fb2p+48), LIT (0x9.1ce86p+24), { LIT (0x1.055fb2000028ab4p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab42p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab4p+48), ERRNO_UNCHANGED }, { LIT (0x1.055fb2000028ab42p+48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.0932cp-80 - 0x2.51109p-24 i", LIT (-0x1.0932cp-80), LIT (-0x2.51109p-24), { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.51109p-24), ERRNO_UNCHANGED }, { LIT (0x2.5110900000000004p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.0eda54p+28 + 0xb.09476p+0 i", LIT (-0x1.0eda54p+28), LIT (0xb.09476p+0), { LIT (0x1.0eda54000000398ep+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000399p+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000398ep+28), ERRNO_UNCHANGED }, { LIT (0x1.0eda54000000399p+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.133b84p+84 - 0xa.7d925f57f60cp+768 i", LIT (-0x1.133b84p+84), LIT (-0xa.7d925f57f60cp+768), { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60cp+768), ERRNO_UNCHANGED }, { LIT (0xa.7d925f57f60c001p+768), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.133b84p+84 - 0xf.fffffp+124 i", LIT (-0x1.133b84p+84), LIT (-0xf.fffffp+124), { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffffp+124), ERRNO_UNCHANGED }, { LIT (0xf.fffff0000000001p+124), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.250366p-36 - 0x5.a5046p-4 i", LIT (-0x1.250366p-36), LIT (-0x5.a5046p-4), { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a5046p-4), ERRNO_UNCHANGED }, { LIT (0x5.a504600000000008p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.26a566p+120 + 0x4.017b28p+92 i", LIT (-0x1.26a566p+120), LIT (0x4.017b28p+92), { LIT (0x1.26a56600000006f8p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006f8p+120), ERRNO_UNCHANGED }, { LIT (0x1.26a56600000006fap+120), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.2b0ff8p+28 - 0x2.549fc4p+16 i", LIT (-0x1.2b0ff8p+28), LIT (-0x2.549fc4p+16), { LIT (0x1.2b0ffa53208c702cp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702cp+28), ERRNO_UNCHANGED }, { LIT (0x1.2b0ffa53208c702ep+28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.30ed4cp+0 + 0x1.e9d956p+56 i", LIT (-0x1.30ed4cp+0), LIT (0x1.e9d956p+56), { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d956p+56), ERRNO_UNCHANGED }, { LIT (0x1.e9d9560000000002p+56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.34be3p-4 - 0xc.56623p+0 i", LIT (-0x1.34be3p-4), LIT (-0xc.56623p+0), { LIT (0xc.56714717944141fp+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944142p+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944141fp+0), ERRNO_UNCHANGED }, { LIT (0xc.56714717944142p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.88858cp+84 + 0x5.bd9198p+36 i", LIT (-0x1.88858cp+84), LIT (0x5.bd9198p+36), { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858cp+84), ERRNO_UNCHANGED }, { LIT (0x1.88858c0000000002p+84), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1p+0 + +0 i", LIT (-0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.65c04p+24 + +0 i", LIT (-0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xa.f59b8p+4 + 0xa.21a95p+20 i", LIT (-0xa.f59b8p+4), LIT (0xa.21a95p+20), { LIT (0xa.21a95005ed6fbffp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fcp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fbffp+20), ERRNO_UNCHANGED }, { LIT (0xa.21a95005ed6fcp+20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xc.64p+0 - 0xcp-4 i", LIT (-0xc.64p+0), LIT (-0xcp-4), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xc.64p+0 + 0xcp-4 i", LIT (-0xc.64p+0), LIT (0xcp-4), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 - 0xc.64p+0 i", LIT (-0xcp-4), LIT (-0xc.64p+0), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + +0 i", LIT (-0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xcp-4 + 0xc.64p+0 i", LIT (-0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0 + +0 i", LIT (0x1p+0), LIT (0x0p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x3.65c04p+24 + +0 i", LIT (0x3.65c04p+24), LIT (0x0p+0), { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED }, { LIT (0x3.65c04p+24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + +0 i", LIT (0xcp-4), LIT (0x0p+0), { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED }, { LIT (0xcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0x1.4p+0 i", LIT (0xcp-4), LIT (0x1.4p+0), { LIT (0x1.752e50db3a3a1b1ap+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1cp+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1ap+0), ERRNO_UNCHANGED }, { LIT (0x1.752e50db3a3a1b1cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4 + 0xc.64p+0 i", LIT (0xcp-4), LIT (0xc.64p+0), { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09a9p+0), ERRNO_UNCHANGED }, { LIT (0xc.69ce375a71e09aap+0), ERRNO_UNCHANGED } },
#endif
  };

static void
cabs_test (void)
{
  ALL_RM_TEST (cabs, 0, cabs_test_data, RUN_TEST_LOOP_c_f, END);
}

static void
do_test (void)
{
  cabs_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
